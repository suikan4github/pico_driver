#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "adau1361lower.hpp"
#include "i2cmaster.hpp"

class Adau1361LowerTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    fs_ = 48000;               // Hz
    master_clock_ = 12000000;  // Hz
    device_address_ = 31;      // 7bit I2C address
    codec_lower_ = new Adau1361Lower(fs_, master_clock_, i2c_, device_address_);
  }

  unsigned int fs_;              // Hz
  unsigned int master_clock_;    // Hz
  unsigned int device_address_;  // 7bit I2C address
  MockI2CMaster i2c_;
  Adau1361Lower *codec_lower_;
};

TEST_F(Adau1361LowerTest, SendCommand) {
  uint8_t cmd[7];

  // nostop parameter must be false. That mean, stop condition of I2C.
  EXPECT_CALL(i2c_,
              i2c_write_blocking(device_address_, cmd, sizeof(cmd), false));
  codec_lower_->SendCommand(cmd, sizeof(cmd));
}

TEST_F(Adau1361LowerTest, SendCommandTable) {
  const uint8_t cmd[][3] = {
      // R0,1, are set by init_freq_xxx table
      {0x40, 0x08, 0x00},  // R2: Digital Mic
      {0x40, 0x09, 0x00},  // R3: Rec Power Management
      {0x40, 0x0a, 0x00}   // R4: Rec Mixer Left 0
  };
  // nostop parameter must be false. That mean, stop condition of I2C.
  using ::testing::InSequence;
  {
    InSequence dummy;

    EXPECT_CALL(i2c_, i2c_write_blocking(device_address_, cmd[0], 3, false));
    EXPECT_CALL(i2c_, i2c_write_blocking(device_address_, cmd[1], 3, false));
    EXPECT_CALL(i2c_, i2c_write_blocking(device_address_, cmd[2], 3, false));
  }
  codec_lower_->SendCommandTable(cmd, sizeof(cmd) / 3);
}

TEST_F(Adau1361LowerTest, DoesI2CDeviceExist) {
  uint8_t cmd[7];

  using ::testing::_;
  using ::testing::Return;

  using ::testing::InSequence;
  {
    InSequence dummy;

    // nostop parameter must be false. That mean, stop condition of I2C.
    EXPECT_CALL(i2c_, i2c_write_blocking(device_address_, _, 0, false))
        .WillOnce(Return(PICO_ERROR_GENERIC));
    EXPECT_CALL(i2c_, i2c_write_blocking(device_address_, _, 0, false))
        .WillOnce(Return(3));
  }
  EXPECT_FALSE(codec_lower_->DoesI2CDeivceExist());
  EXPECT_TRUE(codec_lower_->DoesI2CDeivceExist());
}

TEST_F(Adau1361LowerTest, WaitPllLock) {
  uint8_t cmd[7];

  using ::testing::_;
  using ::testing::Return;

  using ::testing::InSequence;
  {
    InSequence dummy;

    // nostop parameter must be true. That mean repeated start of I2C.
    // The write command give only 2 byte length register address.
    EXPECT_CALL(i2c_, i2c_write_blocking(device_address_, _, 2, true));
    // nostop parameter must be true. That mean, stop condition of I2C.
    // This will check the status register of ADAU1361A. These status
    // registers must be read 6 byte at once.
    EXPECT_CALL(i2c_, i2c_read_blocking(device_address_, _, 6, false));
  }
  codec_lower_->WaitPllLock();
}

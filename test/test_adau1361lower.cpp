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
  const uint8_t lock_status_address[] = {0x40, 0x02};  // R1 : 6 byte register.
  uint8_t status_notlocked[6] = {0, 0, 0, 0, 0, 0};
  uint8_t status_locked[6] = {0, 0, 0, 0, 0, 2};

  using ::testing::Args;
  using ::testing::DoAll;
  using ::testing::ElementsAreArray;
  using ::testing::InSequence;
  using ::testing::NotNull;
  using ::testing::Return;
  using ::testing::SetArrayArgument;

  {
    InSequence dummy;

    // Now we test unlocked status. Funciton must not return.

    // nostop parameter must be true. That mean repeated start of I2C.
    // The write command give only 2 byte length register address.
    EXPECT_CALL(i2c_,
                i2c_write_blocking(device_address_,  // Arg 0 : I2C Address.
                                   NotNull(),  // Arg 1 : Data buffer address.
                                   2,  // Arg 2 : Data buffer length to send.
                                   true))  // Arg 3 : true to repeated start.
        .With(Args<1,  // parameter position of the array : 0 origin.
                   2>  // parameter position of the size : 0 origin.
              (ElementsAreArray(lock_status_address)))
        .WillOnce(Return(2));  // 2 is the transfered data length

    // nostop parameter must be false. That mean, stop condition of I2C.
    // This will check the status register of ADAU1361A. These status
    // registers must be read 6 byte at once.
    EXPECT_CALL(i2c_,
                i2c_read_blocking(device_address_,  // Arg 0 : I2C Address
                                  NotNull(),  // Arg 1 : Data buffer address
                                  6,          // Arg 2 : Data buffer length
                                  false))     // Arg 3 : fasle to stop I2C.
        .WillOnce(DoAll(
            SetArrayArgument<1>  // parameter position of the array : 0 origin.
            (status_notlocked,   // pointer to the beginning of the data.
             status_notlocked + 6),  // pointer to the end of the data + 1.
            Return(3)));             // 6 is the transfered data length.

    // Now, we test the locked status. The funciton must return.

    // nostop parameter must be true. That mean repeated start of I2C.
    // The write command give only 2 byte length register address.
    EXPECT_CALL(i2c_,
                i2c_write_blocking(device_address_,  // Arg 0 : I2C Address.
                                   NotNull(),  // Arg 1 : Data buffer address.
                                   2,  // Arg 2 : Data buffer length to send.
                                   true))  // Arg 3 : true to repeated start.
        .With(Args<1,  // parameter position of the array : 0 origin.
                   2>  // parameter position of the size : 0 origin.
              (ElementsAreArray(lock_status_address)))
        .WillOnce(Return(2));  // 2 is the transfered data length

    // nostop parameter must be false. That mean, stop condition of I2C.
    // This will check the status register of ADAU1361A. These status
    // registers must be read 6 byte at once.
    EXPECT_CALL(i2c_,
                i2c_read_blocking(device_address_,  // Arg 0 : I2C Address
                                  NotNull(),  // Arg 1 : Data buffer address
                                  6,          // Arg 2 : Data buffer length
                                  false))     // Arg 3 : fasle to stop I2C.
        .WillOnce(DoAll(
            SetArrayArgument<1>   // parameter position of the array : 0 origin.
            (status_locked,       // pointer to the beginning of the data.
             status_locked + 6),  // pointer to the end of the data + 1.
            Return(3)));          // 6 is the transfered data length.
  }

  codec_lower_->WaitPllLock();
}

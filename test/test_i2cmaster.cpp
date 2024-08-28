#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "i2cmaster.hpp"

using testing::Return;

// Constructor test
TEST(I2CMaster, Constructor) {
  ::pico_driver::MockSDKWrapper sdk;
  i2c_inst_t i2c_inst;

  uint freq = 100 * 1000;
  uint sda_pin = 17;
  uint scl_pin = 18;

  EXPECT_CALL(sdk, i2c_init(&i2c_inst, freq));
  EXPECT_CALL(sdk, gpio_set_function(scl_pin, GPIO_FUNC_I2C));
  EXPECT_CALL(sdk, gpio_set_function(sda_pin, GPIO_FUNC_I2C));
  EXPECT_CALL(sdk, gpio_pull_up(scl_pin));
  EXPECT_CALL(sdk, gpio_pull_up(sda_pin));

  ::pico_driver::I2CMaster i2c(sdk, i2c_inst, freq, scl_pin, sda_pin);

}  // Constructor

// Destructor test
TEST(I2CMaster, Destructor) {
  ::pico_driver::MockSDKWrapper sdk;
  i2c_inst_t i2c_inst;

  uint freq = 100 * 1000;
  uint sda_pin = 17;
  uint scl_pin = 18;

  ::pico_driver::I2CMaster *i2c =
      new ::pico_driver::I2CMaster(sdk, i2c_inst, freq, scl_pin, sda_pin);

  EXPECT_CALL(sdk, i2c_deinit(&i2c_inst));

  delete (i2c);
}  // Destructor

TEST(I2CMaster, i2c_read_blocking) {
  ::pico_driver::MockSDKWrapper sdk;
  i2c_inst_t i2c_inst;

  uint8_t addr = 3;
  uint8_t buf[5];
  bool nostop = true;
  int return_value = 11;

  ::pico_driver::I2CMaster i2c(sdk, i2c_inst, 100 * 1000, 17, 23);

  EXPECT_CALL(sdk, i2c_read_blocking(&i2c_inst, addr, buf, sizeof(buf), nostop))
      .WillOnce(Return(return_value));

  EXPECT_CALL(sdk,
              i2c_read_blocking(&i2c_inst, addr, buf, sizeof(buf), !nostop))
      .WillOnce(Return(return_value));

  EXPECT_EQ(i2c.i2c_read_blocking(addr, buf, sizeof(buf), nostop),
            return_value);
  EXPECT_EQ(i2c.i2c_read_blocking(addr, buf, sizeof(buf), !nostop),
            return_value);
}

TEST(I2CMaster, i2c_write_blocking) {
  ::pico_driver::MockSDKWrapper sdk;
  i2c_inst_t i2c_inst;

  uint8_t addr = 3;
  uint8_t buf[5];
  bool nostop = true;
  int return_value = 11;

  ::pico_driver::I2CMaster i2c(sdk, i2c_inst, 100 * 1000, 17, 23);

  EXPECT_CALL(sdk,
              i2c_write_blocking(&i2c_inst, addr, buf, sizeof(buf), nostop))
      .WillOnce(Return(return_value));
  EXPECT_CALL(sdk,
              i2c_write_blocking(&i2c_inst, addr, buf, sizeof(buf), !nostop))
      .WillOnce(Return(return_value));

  EXPECT_EQ(i2c.i2c_write_blocking(addr, buf, sizeof(buf), nostop),
            return_value);
  EXPECT_EQ(i2c.i2c_write_blocking(addr, buf, sizeof(buf), !nostop),
            return_value);
}

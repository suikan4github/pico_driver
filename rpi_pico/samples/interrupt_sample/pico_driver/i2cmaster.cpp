#include "i2cmaster.hpp"

::pico_driver::I2CMaster::I2CMaster(SDKWrapper& sdk, i2c_inst_t& i2c,
                                    uint clock_freq, uint sda_pin, uint scl_pin)
    : i2c_(i2c), sdk_(sdk) {
  sdk_.i2c_init(&i2c_, clock_freq);  // I2C bitrate

  sdk_.gpio_set_function(sda_pin, GPIO_FUNC_I2C);
  sdk_.gpio_set_function(scl_pin, GPIO_FUNC_I2C);
  sdk_.gpio_pull_up(sda_pin);
  sdk_.gpio_pull_up(scl_pin);
}

::pico_driver::I2CMaster::~I2CMaster() { sdk_.i2c_deinit(&i2c_); }

int ::pico_driver::I2CMaster::i2c_read_blocking(uint8_t addr, uint8_t* dst,
                                                size_t len, bool nostop) {
  return sdk_.i2c_read_blocking(&i2c_, addr, dst, len, nostop);
}

int ::pico_driver::I2CMaster::i2c_write_blocking(uint8_t addr,
                                                 const uint8_t* src, size_t len,
                                                 bool nostop) {
  return sdk_.i2c_write_blocking(&i2c_, addr, src, len, nostop);
}
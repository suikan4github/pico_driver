#ifndef EXPECT_EQ  // If not build for GTest, include followings.

#include "picowrapper.hpp"

#include "hardware/i2c.h"
#include "pico/stdlib.h"

#endif

void PicoWrapper::sleep_ms(uint32_t ms) { ::sleep_ms(ms); }

void PicoWrapper::gpio_init(uint gpio) { ::gpio_init(gpio); }

void PicoWrapper::gpio_set_dir(uint gpio, bool out) {
  ::gpio_set_dir(gpio, out);
}

void PicoWrapper::gpio_put(uint gpio, bool value) { ::gpio_put(gpio, value); }

bool PicoWrapper::gpio_get(uint gpio) { return ::gpio_get(gpio); }

void PicoWrapper::gpio_pull_up(uint gpio) { ::gpio_pull_up(gpio); }

uint PicoWrapper::i2c_init(i2c_inst_t* i2c, uint baudrate) {
  return ::i2c_init(i2c, baudrate);
}

int PicoWrapper::i2c_read_blocking(i2c_inst_t* i2c, uint8_t addr, uint8_t* dst,
                                   size_t len, bool nostop) {
  return ::i2c_read_blocking(i2c, addr, dst, len, nostop);
}

int PicoWrapper::i2c_write_blocking(i2c_inst_t* i2c, uint8_t addr,
                                    const uint8_t* src, size_t len,
                                    bool nostop) {
  return ::i2c_write_blocking(i2c, addr, src, len, nostop);
}

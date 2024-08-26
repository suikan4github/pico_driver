#include "picowrapper.hpp"

void ::pico_driver::PicoWrapper::sleep_ms(uint32_t ms) { ::sleep_ms(ms); }

void ::pico_driver::PicoWrapper::gpio_init(uint gpio) { ::gpio_init(gpio); }

void pico_driver::PicoWrapper::gpio_set_function(uint gpio,
                                                 gpio_function_t fn) {
  ::gpio_set_function(gpio, fn);
}

void ::pico_driver::PicoWrapper::gpio_set_dir(uint gpio, bool out) {
  ::gpio_set_dir(gpio, out);
}

void ::pico_driver::PicoWrapper::gpio_put(uint gpio, bool value) {
  ::gpio_put(gpio, value);
}

bool ::pico_driver::PicoWrapper::gpio_get(uint gpio) {
  return ::gpio_get(gpio);
}

void ::pico_driver::PicoWrapper::gpio_pull_up(uint gpio) {
  ::gpio_pull_up(gpio);
}

uint ::pico_driver::PicoWrapper::i2c_init(i2c_inst_t* i2c, uint baudrate) {
  return ::i2c_init(i2c, baudrate);
}

int ::pico_driver::PicoWrapper::i2c_read_blocking(i2c_inst_t* i2c, uint8_t addr,
                                                  uint8_t* dst, size_t len,
                                                  bool nostop) {
  return ::i2c_read_blocking(i2c, addr, dst, len, nostop);
}

int ::pico_driver::PicoWrapper::i2c_write_blocking(i2c_inst_t* i2c,
                                                   uint8_t addr,
                                                   const uint8_t* src,
                                                   size_t len, bool nostop) {
  return ::i2c_write_blocking(i2c, addr, src, len, nostop);
}

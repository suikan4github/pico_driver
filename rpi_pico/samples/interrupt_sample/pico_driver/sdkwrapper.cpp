#include "sdkwrapper.hpp"

void ::pico_driver::SDKWrapper::sleep_ms(uint32_t ms) { ::sleep_ms(ms); }

uint32_t pico_driver::SDKWrapper::clock_get_hz(clock_handle_t clock) {
  return ::clock_get_hz(clock);
}

bool pico_driver::SDKWrapper::stdio_init_all(void) {
  return ::stdio_init_all();
}

void pico_driver::SDKWrapper::sm_config_set_clkdiv(pio_sm_config* c,
                                                   float div) {
  ::sm_config_set_clkdiv(c, div);
}

void pico_driver::SDKWrapper::sm_config_set_in_shift(pio_sm_config* c,
                                                     bool shift_right,
                                                     bool autopush,
                                                     uint push_threshold) {
  ::sm_config_set_in_shift(c, shift_right, autopush, push_threshold);
}

void pico_driver::SDKWrapper::sm_config_set_out_shift(pio_sm_config* c,
                                                      bool shift_right,
                                                      bool autopull,
                                                      uint push_threshold) {
  ::sm_config_set_out_shift(c, shift_right, autopull, push_threshold);
}

void ::pico_driver::SDKWrapper::gpio_init(uint gpio) { ::gpio_init(gpio); }

void pico_driver::SDKWrapper::gpio_set_function(uint gpio, gpio_function_t fn) {
  ::gpio_set_function(gpio, fn);
}

void ::pico_driver::SDKWrapper::gpio_set_dir(uint gpio, bool out) {
  ::gpio_set_dir(gpio, out);
}

void ::pico_driver::SDKWrapper::gpio_put(uint gpio, bool value) {
  ::gpio_put(gpio, value);
}

bool ::pico_driver::SDKWrapper::gpio_get(uint gpio) { return ::gpio_get(gpio); }

void ::pico_driver::SDKWrapper::gpio_pull_up(uint gpio) {
  ::gpio_pull_up(gpio);
}

uint ::pico_driver::SDKWrapper::i2c_init(i2c_inst_t* i2c, uint baudrate) {
  return ::i2c_init(i2c, baudrate);
}

void ::pico_driver::SDKWrapper::i2c_deinit(i2c_inst_t* i2c) {
  ::i2c_deinit(i2c);
}

int ::pico_driver::SDKWrapper::i2c_read_blocking(i2c_inst_t* i2c, uint8_t addr,
                                                 uint8_t* dst, size_t len,
                                                 bool nostop) {
  return ::i2c_read_blocking(i2c, addr, dst, len, nostop);
}

int ::pico_driver::SDKWrapper::i2c_write_blocking(i2c_inst_t* i2c, uint8_t addr,
                                                  const uint8_t* src,
                                                  size_t len, bool nostop) {
  return ::i2c_write_blocking(i2c, addr, src, len, nostop);
}

int pico_driver::SDKWrapper::pio_sm_set_consecutive_pindirs(PIO pio, uint sm,
                                                            uint pins_base,
                                                            uint pin_count,
                                                            bool is_out) {
  return ::pio_sm_set_consecutive_pindirs(pio, sm, pins_base, pin_count,
                                          is_out);
}

void pico_driver::SDKWrapper::pio_gpio_init(PIO pio, uint pin) {
  ::pio_gpio_init(pio, pin);
}

void pico_driver::SDKWrapper::sm_config_set_out_pins(pio_sm_config* c,
                                                     uint out_base,
                                                     uint out_count) {
  ::sm_config_set_out_pins(c, out_base, out_count);
}

void pico_driver::SDKWrapper::sm_config_set_in_pin_base(pio_sm_config* c,
                                                        uint in_base) {
  ::sm_config_set_in_pin_base(c, in_base);
}

void pico_driver::SDKWrapper::sm_config_set_in_pin_count(pio_sm_config* c,
                                                         uint in_count) {
  ::sm_config_set_in_pin_count(c, in_count);
}

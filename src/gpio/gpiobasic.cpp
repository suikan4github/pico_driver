#include "gpiobasic.hpp"

pico_driver::GpioBasic::GpioBasic(SdkWrapper& sdk, uint pin)
    : sdk_(sdk), pin_(pin) {
  sdk_.gpio_init(pin_);
}

pico_driver::GpioBasic::~GpioBasic() { sdk_.gpio_deinit(pin_); }

void pico_driver::GpioBasic::SetDir(bool out) { sdk_.gpio_set_dir(pin_, out); }

void pico_driver::GpioBasic::SetInputEnabled(bool enabled) {
  sdk_.gpio_set_input_enabled(pin_, enabled);
}

#include "gpiobasic.hpp"

pico_driver::GpioBasic::GpioBasic(SdkWrapper& sdk, uint pin)
    : sdk_(sdk), pin_(pin) {
  sdk_.gpio_init(pin_);
}

pico_driver::GpioBasic::~GpioBasic() { sdk_.gpio_deinit(pin_); }

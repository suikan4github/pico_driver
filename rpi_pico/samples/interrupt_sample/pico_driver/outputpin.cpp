#include "outputpin.hpp"

void initialize_outputpin(const uint gpio) {
  // Initializing the GPIO pin and set it output.
  gpio_init(gpio);
  gpio_set_dir(gpio, GPIO_OUT);
}

void put_outputpin(const uint gpio, bool logic_level) {
  gpio_put(gpio, logic_level);
}
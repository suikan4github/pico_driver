// Include local definition
#include "picowrapper.hpp"

int main() {
  ::pico_driver::SDKWrapper sdk;

  // Use RasPi Pico on-board LED.
  // 1=> Turn on, 0 => Turn pff.
  const uint LED_PIN = PICO_DEFAULT_LED_PIN;

  sdk.gpio_init(LED_PIN);
  sdk.gpio_set_dir(LED_PIN, true);

  while (true) {
    // Turn LED on
    sdk.gpio_put(LED_PIN, true);
    sdk.sleep_ms(200);
    // Turn LED off
    sdk.gpio_put(LED_PIN, false);
    sdk.sleep_ms(800);
  }
}

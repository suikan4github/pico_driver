// Include local definition
#include <stdio.h>

#include "picowrapper.hpp"

int main() {
  ::pico_driver::SDKWrapper sdk;

  // Init USB-Serial port by 9600bps, 1stop bit, 8bit.
  // add following lines to CMakeLists.txt to enable usb-seial and disable
  // serial.
  //     pico_enable_stdio_usb($ { PROJECT_NAME } 1)
  //     pico_enable_stdio_uart($ { PROJECT_NAME } 0)
  sdk.stdio_init_all();
  // Use RasPi Pico on-board LED.
  // 1=> Turn on, 0 => Turn pff.
  const uint LED_PIN = PICO_DEFAULT_LED_PIN;
  sdk.gpio_init(LED_PIN);
  sdk.gpio_set_dir(LED_PIN, true);

  while (true) {
    // Turn LED on
    printf("Hello, ");
    sdk.gpio_put(LED_PIN, true);
    sdk.sleep_ms(1000);
    // Turn LED off
    printf("world!\n");
    sdk.gpio_put(LED_PIN, false);
    sdk.sleep_ms(1000);
  }
}

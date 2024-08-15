// Include local definition
#include "duration.hpp"
#include "outputpin.hpp"

int main() {
  // Use RasPi Pico on-board LED.
  // 1=> Turn on, 0 => Turn pff.
  const uint LED_PIN = PICO_DEFAULT_LED_PIN;

  // Initializing the GPIO pin and set it output.
  initialize_outputpin(LED_PIN);

  while (true) {
    // Turn LED on
    put_outputpin(LED_PIN, 1);
    sleep_ms(duration());
    // Turn LED off
    put_outputpin(LED_PIN, 0);
    sleep_ms(duration());
  }
}

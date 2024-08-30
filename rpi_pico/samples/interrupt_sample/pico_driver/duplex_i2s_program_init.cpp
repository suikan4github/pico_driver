

#include "hardware/clocks.h"
#include "hardware/gpio.h"
extern "C" {
#include "duplex_i2s.pio.h"
}

/**
 * @brief Initialize the duplex I2S controller.
 * @param pio One of pio0, pio1,...
 * @param sm One of 0,1,2,3.
 * @param offset of the PIO program.
 * @param pin_sdout GPIO pin number for I2S BCLK signal.
 * @details
 * The caller must set pio, sm and offset collectly, based on the PIO
 * programming manner.
 *
 * We need four GPIO pin in this function, and assumes the GPIO pins are
 * following order as ascending manner.
 * @li SDOUT as output (DAC)
 * @li SDIN as input (ADC)
 * @li BCLK as input
 * @li WS as input
 *
 * For example, assume the pin_sdout parameter is 5 (GPIO PIN 5). In this case
 * the SDOUT, SDIN, BCLK, and WS must be GPIO PIN 5, 6, 7 and 8, respectively.
 */
void duplex_i2s_program_init(PIO pio, uint sm, uint offset, uint pin_sdout) {
  assert(sm < 4);

  // PIO configuration. Set SDOUT as output. Set SDIN, BCLK and WS as input.
#if 1
  pio_sm_set_consecutive_pindirs(pio, sm,
                                 pin_sdout,  // PIN_SDOUT
                                 1,          // 1 pin for output.
                                 true);      // true for output.
  pio_sm_set_consecutive_pindirs(pio, sm,
                                 pin_sdout + 1,  // PIN_SDIN.
                                 3,              // 3 pins for input.
                                 false);         // false for input.
#endif
  // Use thse four pins by PIO.
  pio_gpio_init(pio, pin_sdout);
  pio_gpio_init(pio, pin_sdout + 1);
  pio_gpio_init(pio, pin_sdout + 2);
  pio_gpio_init(pio, pin_sdout + 3);

  // State machine configuration.
  pio_sm_config config = duplex_i2s_program_get_default_config(offset);

  // Set direction of pins.
  sm_config_set_out_pins(&config,
                         pin_sdout,  // PIN_SDOUT
                         1);         // 1 pin for output.
  sm_config_set_in_pin_base(&config,
                            pin_sdout + 1);  // PIN_SDIN.
  sm_config_set_in_pin_count(&config,
                             3);  // 3 pins for input.

  // Set the PIO clock divider.
  // We need 48MHz clock for the duplex I2S PIO program ( Reed the comment
  // above ). To avoid the jitter, we calculate the division factor in
  // integer.
  float div = (clock_get_hz(clk_sys) / (48'000'000));
  sm_config_set_clkdiv(&config, div);

  // Shift configuration.
  // Input shift register.
  sm_config_set_in_shift(&config,
                         false,  // false to left shift.
                         true,   // true to auto push.
                         32);    // 32bit word.
  // Output shift register.
  sm_config_set_out_shift(&config,
                          false,  // false to left shift.
                          true,   // true to auto pull.
                          32);    // 32bit word.

  // Configure SM.
  pio_sm_init(pio, sm, offset, &config);

  // Placing dummy data in FIFO to avoid the underflow at first TX.
  // This must be done after calling pio_sm_init().
  pio_sm_put(pio, sm, 0);  // Put left word for the first TX.
  pio_sm_put(pio, sm, 0);  // Put right word for the first TX.

  // Start the state machine.
  pio_sm_set_enabled(pio, sm, true);
}

#include "duplexslavei2s.hpp"

#include "sdkwrapper.hpp"

#if __has_include(<hardware/pio.h>)  // Is build in Pico Environment?
extern "C" {
#include "duplex_slave_i2s.pio.h"  // Generated by PIO compiler.
}
#else
static pio_program_t duplex_slave_i2s_program;
#endif  // __has_include(<hardware/pio.h>)

rpp_driver::DuplexSlaveI2s::DuplexSlaveI2s(::rpp_driver::SdkWrapper &sdk,
                                           PIO pio, uint pin_base)
    : sdk_(sdk),
      pio_(pio),
      sm_(sdk_.pio_claim_unused_sm(
          pio_, true)),  // true mean required. assert if no room.
      pin_base_(pin_base) {}

rpp_driver::DuplexSlaveI2s::DuplexSlaveI2s(::rpp_driver::SdkWrapper &sdk,
                                           PIO pio, uint32_t sm, uint pin_base)
    : sdk_(sdk), pio_(pio), sm_(sm), pin_base_(pin_base) {
  sdk_.pio_sm_claim(pio_, sm_);
}

rpp_driver::DuplexSlaveI2s::~DuplexSlaveI2s() {
  sdk_.pio_sm_unclaim(pio_, sm_);
}

uint32_t rpp_driver::DuplexSlaveI2s::GetStateMachine() { return sm_; }

int32_t rpp_driver::DuplexSlaveI2s::GetFifoBlocking() {
  return sdk_.pio_sm_get_blocking(pio_, sm_);
}

void rpp_driver::DuplexSlaveI2s::PutFifoBlocking(int32_t value) {
  sdk_.pio_sm_put_blocking(pio_, sm_, value);
}

void rpp_driver::DuplexSlaveI2s::Start() {
  // Assign these pins for PIO by GPIO mux.
  sdk_.pio_gpio_init(pio_, pin_base_);
  sdk_.pio_gpio_init(pio_, pin_base_ + 1);
  sdk_.pio_gpio_init(pio_, pin_base_ + 2);
  sdk_.pio_gpio_init(pio_, pin_base_ + 3);

  // Configure the physical direction of these pins inside PIO module.
  sdk_.pio_sm_set_consecutive_pindirs(pio_, sm_,
                                      pin_base_,  // BASE GPIO pin number.
                                      1,          // 1 pin for output.
                                      true);      // true for output.
  sdk_.pio_sm_set_consecutive_pindirs(pio_, sm_,
                                      pin_base_ + 1,  // BASE GPIO pin number.
                                      3,              // 3 pins for input.
                                      false);         // false for input.

  // Load the PIO program to the memory.
  uint instruction_offset =
      sdk_.pio_add_program(pio_, &duplex_slave_i2s_program);

  // Create a state machine configuration structure.
  // The duplex_i2s_program_get_default_config() is generated by the
  // PIO compiler. So, there is no wrapper.
  pio_sm_config config =
      duplex_slave_i2s_program_get_default_config(instruction_offset);

  // Assign GPIO pins to IN/OUT/JMP instructions inside SM.
  sdk_.sm_config_set_out_pins(&config,
                              pin_base_,  // PIN_SDOUT
                              1);         // 1 pin for output.
  sdk_.sm_config_set_in_pin_base(&config,
                                 pin_base_ + 1);  // PIN_SDIN.
#if 0  
  // sm_config_set_in_pin_count is buggy in pico sdk v2.0.0
  // See https://github.com/raspberrypi/pico-sdk/issues/1878 for details. 
  sdk_.sm_config_set_in_pin_count(&config,
                                  2);                  // 2 pins for input.
#endif
  sdk_.sm_config_set_jmp_pin(&config, pin_base_ + 3);  // WS

  // Set the PIO clock divider.
  // We need 96kHz stereo 32bit transfer. So the BCLCK is 96'000*2*32Hz.
  // The  clock for the duplex I2S PIO program must be 10 times or grather
  // ( See the comment in the duplex_i2s.pio_ ).
  // To avoid the jitter, we calculate the division factor in
  // integer.
  float div = (sdk_.clock_get_hz(clk_sys) / (96'000 * 2 * 32 * 10));
  sdk_.sm_config_set_clkdiv(&config, div);

  // Input shift register configuration.
  sdk_.sm_config_set_in_shift(&config,
                              false,  // false to left shift.
                              false,  // false to no auto push.
                              32);    // 32bit word.
  // Output shift register confiuration.
  sdk_.sm_config_set_out_shift(&config,
                               false,  // false to left shift.
                               false,  // false to no auto pull.
                               32);    // 32bit word.

  // Configure SM. Flush FIFO, and ready to run the program.
  sdk_.pio_sm_init(pio_, sm_, instruction_offset, &config);

  // Placing dummy data in FIFO to avoid the underflow at first TX.
  // This must be done after calling pio_sm_init() because that routine
  // flushes the FIFO.
  // We need 2 stereo samples.
  // The first stereo sample is for the initial transfer. At this transfer,
  // CPU program is waiting the received signal without the transmit data.
  // So, we need to fill dummy TX sample.
  // After the first data transfer, the main routine starts to process data.
  // And to get the transmit data ( as proessed data ), we need time which is
  // max 1 sample. Then, we need to fill another dummy.
  // That is why we need two stereo sample here inside TX FIFO.
  sdk_.pio_sm_put(pio_, sm_, 0);  // Put left word for the first TX.
  sdk_.pio_sm_put(pio_, sm_, 0);  // Put right word for the first TX.
  sdk_.pio_sm_put(pio_, sm_, 0);  // Put left word for the second TX.
  sdk_.pio_sm_put(pio_, sm_, 0);  // Put right word for the second TX.

  // Start the state machine.
  sdk_.pio_sm_set_enabled(pio_, sm_, true);
}

void rpp_driver::DuplexSlaveI2s::Stop() {
  // Stop state machine.
  sdk_.pio_sm_set_enabled(pio_, sm_, false);
  // Clean up FIFO for the next processing.
  sdk_.pio_sm_clear_fifos(pio_, sm_);
  // We don't unclaim the state machine.
  // The SM will be unclaimed by destructor.
}

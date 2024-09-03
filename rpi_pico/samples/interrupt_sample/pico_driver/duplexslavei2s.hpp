#ifndef _DUPLEXSLAVEI2S_HPP_
#define _DUPLEXSLAVEI2S_HPP_

#include "hardware/pio.h"
#include "sdkwrapper.hpp"

namespace pico_driver {

class DuplexSlaveI2S {
 private:
  ::pico_driver::SDKWrapper &sdk_;
  PIO pio_;
  const uint32_t sm_;  // State machine ( 0..3 )

 public:
  DuplexSlaveI2S(/* args */) = delete;
  DuplexSlaveI2S(::pico_driver::SDKWrapper &sdk, PIO pio)
      : sdk_(sdk), pio_(pio), sm_(sdk_.pio_claim_unused_sm(pio_)) {};
  DuplexSlaveI2S(::pico_driver::SDKWrapper &sdk, PIO pio, uint32_t sm)
      : sdk_(sdk), pio_(pio), sm_(sm) {};

  /**
   * @brief Disable the state machine in use.
   * @details If the State machine in use is disabled, the disable operation is
   * skipped.
   */
  ~DuplexSlaveI2S();

  virtual uint32_t GetStateMachine();
  virtual void Start();
  virtual void Stop();
};

DuplexSlaveI2S::DuplexSlaveI2S(/* args */) {}

DuplexSlaveI2S::~DuplexSlaveI2S() {}

}  // namespace pico_driver

#endif  // _DUPLEXSLAVEI2S_HPP_
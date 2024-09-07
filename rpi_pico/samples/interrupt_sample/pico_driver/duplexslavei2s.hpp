#ifndef _DUPLEXSLAVEI2S_HPP_
#define _DUPLEXSLAVEI2S_HPP_

#if __has_include(<hardware/pio.h>)
#include "hardware/pio.h"
#else
// Alternate definition for unit test.
#define duplex_slave_i2s_program_get_default_config(config) 1
#define clk_sys 51
#endif  //__has_include(<hardware/i2c.h>)

#include "sdkwrapper.hpp"

namespace pico_driver {

class DuplexSlaveI2S {
 private:
  ::pico_driver::SDKWrapper &sdk_;
  PIO pio_;
  const uint32_t sm_;    // State machine ( 0..3 )
  const uint pin_base_;  // first GPIO pin number of the I2S signal.

 public:
  DuplexSlaveI2S(/* args */) = delete;
  DuplexSlaveI2S(::pico_driver::SDKWrapper &sdk, PIO pio, uint pin_base);
  DuplexSlaveI2S(::pico_driver::SDKWrapper &sdk, PIO pio, uint32_t sm,
                 uint pin_base);

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

#if __has_include(<gmock/gmock.h>)
class MockDuplexSlaveI2S : public DuplexSlaveI2S {
 public:
  MOCK_METHOD0(GetStateMachine, uint32_t(void));
  MOCK_METHOD0(Start, void(void));
  MOCK_METHOD0(Stop, void(void));
};
#endif

}  // namespace pico_driver

#endif  // _DUPLEXSLAVEI2S_HPP_
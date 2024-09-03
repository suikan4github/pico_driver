#ifndef _DUPLEXSLAVEI2S_HPP_
#define _DUPLEXSLAVEI2S_HPP_

#include "hardware/pio.h"
#include "sdkwrapper.hpp"

namespace pico_driver {

class DuplexSlaveI2S {
 private:
  ::pico_driver::SDKWrapper &sdk_;
  PIO pio_;
  uint32_t sm;  // State machine ( 0..3 )

 public:
  DuplexSlaveI2S(/* args */) = delete;
  DuplexSlaveI2S(::pico_driver::SDKWrapper &sdk, PIO pio);
  DuplexSlaveI2S(::pico_driver::SDKWrapper &sdk, PIO pio, uint32_t sm);
  ~DuplexSlaveI2S();

    virtual uint32_t GetStateMachine();
};

DuplexSlaveI2S::DuplexSlaveI2S(/* args */) {}

DuplexSlaveI2S::~DuplexSlaveI2S() {}

}  // namespace pico_driver

#endif  // _DUPLEXSLAVEI2S_HPP_
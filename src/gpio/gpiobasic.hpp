/**
 * @file gpiobasic.hpp
 *
 * @brief basic GPIO controller.
 * @date 2024/Sep/20
 * @author Seiichi  Horie
 * @brief Collection of the basic fuction of GPIO .
 * @copyright COPYRIGHT 2024 Seiichi Horie
 */

#ifndef PICO_DRIVER_SRC_GPIO_GPIOBASIC_HPP_
#define PICO_DRIVER_SRC_GPIO_GPIOBASIC_HPP_

#include <stdint.h>

#if __has_include(<hardware/gpio.h>)
#include "hardware/gpio.h"
#else
// Alternate definition for unit test.
#endif  // __has_include(<hardware/i2c.h>)

#include "sdkwrapper.hpp"

namespace pico_driver {
class GpioBasic {
 public:
  /**
   * @brief Initialize the given GPIO pin and setup the pins.
   * @param pin GPIO pin number.
   * @details
   * Receive the GPIO pin.
   * And then, init it as GPIO.
   */
  GpioBasic(SdkWrapper &sdk, uint pin);
  GpioBasic() = delete;
  /**
   * @brief deinit the I2C by sdk.i2c_deinit();
   */
  virtual ~GpioBasic();
  /**
   * @brief Set a single GPIO direction.
   * @param out true for out, false for in.
   */
  virtual void SetDir(bool out);

  /**
   * @brief Enable GPIO input.
   * @param enabled true to enable input on This GPIO.
   */
  virtual void SetInputEnabled(bool enabled);

  /**
   * @brief Drive a single GPIO high/low.
   * @param value If false clear the GPIO, otherwise set it.
   */
  virtual void Put(bool value);

  /**
   * @brief Get state of a single This GPIO.
   * @returns Current state of the GPIO. 0 for low, non-zero for high
   */
  virtual bool Get();
#if 0

  /**
   * @brief Set This GPIO to be pulled up.
   */
  virtual void PullUp();

  /**
   * @brief Set This GPIO to be pulled down.
   */
  virtual void PullDown();

  /**
   * @brief Disable pulls on This GPIO.
   */
  virtual void DisablePulls();
#endif
 private:
  SdkWrapper &sdk_;
  const uint pin_;
};
#if __has_include(<gmock/gmock.h>)

class MockGpioBasic : public SdkWrapper {
 public:
  MOCK_METHOD1(SetDir, void(bool));
  MOCK_METHOD1(SetInputEnabled, void(bool));
  MOCK_METHOD1(Put, void(bool));
  MOCK_METHOD0(Put, bool(void));
};  // MockGpioBasic

#endif  //  __has_include(<gmock/gmock.h>)
};  // namespace pico_driver

#endif /* PICO_DRIVER_SRC_GPIO_GPIOBASIC_HPP_ */
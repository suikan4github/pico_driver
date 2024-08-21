#ifndef __DRIVER_PICOWRAPPER_HPP__
#define __DRIVER_PICOWRAPPER_HPP__

#if __has_include("pico/stdlib.h")
// For Pico
#include "hardware/i2c.h"
#include "pico/stdlib.h"
#else
// Alternative include and definition for Unix/Win32
typedef int i2c_inst_t;
typedef unsigned uint;
#include <stdint.h>
#include <stdlib.h>
#endif

/**
 * @brief Wrapper class for the RasPi Pico SDK functions.
 * @details
 * We need following line in the CMakeLitst.txt
 * @code
 *         target_link_libraries(${PROJECT_NAME} pico_stdlib hardware_i2c)
 * @endcode
 */
class PicoWrapper {
 public:
  virtual ~PicoWrapper() {}
  virtual void gpio_init(uint gpio);

  /**
   * @brief Wait for the given number of milliseconds before returning.
   * @param ms the number of milliseconds to sleep
   */
  virtual void sleep_ms(uint32_t ms);

  /**
   * @brief Set a single GPIO direction.
   * @param gpio GPIO number.
   * @param out true for out, false for in.
   */
  virtual void gpio_set_dir(uint gpio, bool out);

  /**
   * @brief Drive a single GPIO high/low.
   * @param gpio GPIO number.
   * @param bool If false clear the GPIO, otherwise set it.
   */
  virtual void gpio_put(uint gpio, bool value);

  /**
   * @brief Get state of a single specified GPIO.
   * @param gpio GPIO number.
   * @returns Current state of the GPIO. 0 for low, non-zero for high
   */
  virtual bool gpio_get(uint gpio);

  /**
   * @brief Set specified GPIO to be pulled up.
   * @param gpio GPIO number.
   */
  virtual void gpio_pull_up(uint gpio);

  /**
   * @brief Initialise the I2C HW block.
   * @param i2c Either i2c0 or i2c1
   * @param baudrate Baudrate in Hz (e.g. 100kHz is 100000)
   * @returns Actual set baudrate.
   */

  virtual uint i2c_init(i2c_inst_t *i2c, uint baudrate);
  /**
   * @brief Attempt to read specified number of bytes from address, blocking.
   * @param i2c Either i2c0 or i2c1
   * @param addr 7-bit address of device to read from
   * @param dst Pointer to buffer to receive data
   * @param len Length of data in bytes to receive
   * @param nostop If true, master retains control of the bus at the end of
   * the transfer (no Stop is issued), and the next transfer will begin with
   * a Restart rather than a Start.
   * @returns Number of bytes read, or PICO_ERROR_GENERIC if address
   * not acknowledged or no device present.
   */

  virtual int i2c_read_blocking(i2c_inst_t *i2c, uint8_t addr, uint8_t *dst,
                                size_t len, bool nostop);
  /**
   * @brief Attempt to write specified number of bytes to address, blocking.
   * @param i2c Either i2c0 or i2c1
   * @param addr 7-bit address of device to write to
   * @param src Pointer to data to send
   * @param len Length of data in bytes to send
   * @param nostop If true, master retains control of the bus at the end of
   * the transfer (no Stop is issued), and the next transfer will begin with
   * a Restart rather than a Start.
   * @returns Number of bytes written, or PICO_ERROR_GENERIC
   * if address not acknowledged, no device present.
   */
  virtual int i2c_write_blocking(i2c_inst_t *i2c, uint8_t addr,
                                 const uint8_t *src, size_t len, bool nostop);
};

#if __has_include(<gmock/gmock.h>)
class MockPicoWrapper : public PicoWrapper {
 public:
  MOCK_METHOD1(sleep_ms, void(uint32_t ms));
  MOCK_METHOD2(gpio_set_dir, void(uint gpio, bool out));
  MOCK_METHOD2(gpio_put, void(uint gpio, bool value));
  MOCK_METHOD1(gpio_get, bool(uint gpio));
  MOCK_METHOD1(gpio_pull_up, void(uint gpio));
  MOCK_METHOD2(i2c_init, uint(i2c_inst_t *i2c, uint baudrate));
  MOCK_METHOD5(i2c_read_blocking, int(i2c_inst_t *i2c, uint8_t addr,
                                      uint8_t *dst, size_t len, bool nostop));
  MOCK_METHOD5(i2c_write_blocking,
               int(i2c_inst_t *i2c, uint8_t addr, const uint8_t *src,
                   size_t len, bool nostop));
};

#endif  // __has_include(<gmock/gmock.h>)

#endif  // __DRIVER_PICOWRAPPER_HPP__

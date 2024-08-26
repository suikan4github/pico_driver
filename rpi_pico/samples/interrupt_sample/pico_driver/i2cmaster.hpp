/**
 * @file i2cmaster.hpp
 *
 * @date 2024/Aug/16
 * @author: Seiichi  Horie
 * @brief I2C master Implementation.
 */

#ifndef _I2CMASTER_HPP_
#define _I2CMASTER_HPP_

#include <stdint.h>

#if __has_include(<hardware/i2c.h>)
#include "hardware/i2c.h"
#else
typedef int i2c_inst_t;
#define PICO_ERROR_GENERIC -1
#endif  //__has_include(<hardware/i2c.h>)

#include "i2cmasterinterface.hpp"
#include "picowrapper.hpp"

namespace pico_driver {
class I2CMaster : public I2CMasterInterface {
 public:
  I2CMaster(i2c_inst_t &i2c, PicoWrapper &sdk) : i2c_(i2c), sdk_(sdk) {}
  I2CMaster() = delete;
  virtual ~I2CMaster() {}
  /**
   * @brief Attempt to read specified number of bytes from address,
   * blocking.
   * @param addr 7-bit address of device to read from
   * @param dst Pointer to buffer to receive data
   * @param len Length of data in bytes to receive
   * @param nostop If true, master retains control of the bus at the end of
   * the transfer (no Stop is issued), and the next transfer will begin with
   * a Restart rather than a Start.
   * @returns Number of bytes read, or PICO_ERROR_GENERIC if address
   * not acknowledged or no device present.
   */

  int i2c_read_blocking(uint8_t addr, uint8_t *dst, size_t len,
                        bool nostop) override;
  /**
   * @brief Attempt to write specified number of bytes to address, blocking.
   * @param addr 7-bit address of device to write to
   * @param src Pointer to data to send
   * @param len Length of data in bytes to send
   * @param nostop If true, master retains control of the bus at the end of
   * the transfer (no Stop is issued), and the next transfer will begin with
   * a Restart rather than a Start.
   * @returns Number of bytes written, or PICO_ERROR_GENERIC
   * if address not acknowledged, no device present.
   */
  int i2c_write_blocking(uint8_t addr, const uint8_t *src, size_t len,
                         bool nostop) override;

 private:
  i2c_inst_t &i2c_;
  PicoWrapper &sdk_;
};
};  // namespace pico_driver

#endif /* _I2CMASTER_HPP_ */
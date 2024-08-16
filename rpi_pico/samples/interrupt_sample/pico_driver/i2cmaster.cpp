#include "i2cmaster.hpp"

int I2CMaster::i2c_read_blocking(uint8_t addr, uint8_t* dst, size_t len,
                                 bool nostop) {
  return 0;
}

int I2CMaster::i2c_write_blocking(uint8_t addr, const uint8_t* src, size_t len,
                                  bool nostop) {
  return 0;
}
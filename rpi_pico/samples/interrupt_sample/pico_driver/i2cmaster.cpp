#include "i2cmaster.hpp"

int I2CMaster::i2c_read_blocking(uint8_t addr, uint8_t* dst, size_t len,
                                 bool nostop) {
  return sdk_.i2c_read_blocking(&i2c_, addr, dst, len, nostop);
}

int I2CMaster::i2c_write_blocking(uint8_t addr, const uint8_t* src, size_t len,
                                  bool nostop) {
  return sdk_.i2c_write_blocking(&i2c_, addr, src, len, nostop);
}
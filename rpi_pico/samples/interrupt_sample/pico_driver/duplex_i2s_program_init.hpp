

#ifndef _DUPLEX_I2S_PROGRAM_INIT_HPP_
#define _DUPLEX_I2S_PROGRAM_INIT_HPP_

#include "hardware/clocks.h"
#include "hardware/gpio.h"
extern "C" {
#include "duplex_i2s.pio.h"
}

void duplex_i2s_program_init(PIO pio, uint sm, uint offset, uint pin_sdout);

#endif  //_DUPLEX_I2S_PROGRAM_INIT_HPP_
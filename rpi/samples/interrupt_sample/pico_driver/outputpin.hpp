#ifndef __INITIALIZE_OUTPUT_HPP__
#define __INITIALIZE_OUTPUT_HPP__
#include "pico/stdlib.h"

void initialize_outputpin(const uint gpio);
void put_outputpin(const uint gpio, bool logic_level);

#endif  // __INITIALIZE_OUTPUT_HPP__

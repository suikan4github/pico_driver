/*
 * Pico SDK has separated directory and files for the prototype definition.
 * To include all, we gather the include files in this one file.
 *
 * This file is dedicated to be read from the sdkwrapper.hpp.
 *
 * Not intended to be read from the application program.
 */
#if __has_include(<hardware/adc.h>) || __has_include(<gmock/gmock.h>)
#include <hardware/adc.h>
#endif //  __has_include(<hardware/adc.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/divider.h>) || __has_include(<gmock/gmock.h>)
#include <hardware/divider.h>
#endif //  __has_include(<hardware/divider.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/dma.h>) || __has_include(<gmock/gmock.h>)
#include <hardware/dma.h>
#endif //  __has_include(<hardware/dma.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/exception.h>) || __has_include(<gmock/gmock.h>)
#include <hardware/exception.h>
#endif //  __has_include(<hardware/exception.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/flash.h>) || __has_include(<gmock/gmock.h>)
#include <hardware/flash.h>
#endif //  __has_include(<hardware/flash.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/i2c.h>) || __has_include(<gmock/gmock.h>)
#include <hardware/i2c.h>
#endif //  __has_include(<hardware/i2c.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/interp.h>) || __has_include(<gmock/gmock.h>)
#include <hardware/interp.h>
#endif //  __has_include(<hardware/interp.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/pio.h>) || __has_include(<gmock/gmock.h>)
#include <hardware/pio.h>
#endif //  __has_include(<hardware/pio.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/gpio.h>) || __has_include(<gmock/gmock.h>)
#include <hardware/gpio.h>
#endif //  __has_include(<hardware/gpio.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/clocks.h>) || __has_include(<gmock/gmock.h>)
#include <hardware/clocks.h>
#endif //  __has_include(<hardware/clocks.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<pico/time.h>) || __has_include(<gmock/gmock.h>)
#include <pico/time.h>
#endif //  __has_include(<pico/time.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<pico/stdio.h>) || __has_include(<gmock/gmock.h>)
#include <pico/stdio.h>
#endif //  __has_include(<pico/stdio.h>) || __has_include(<gmock/gmock.h>)


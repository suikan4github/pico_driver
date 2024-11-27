/*
 * Definition of the Pico SDK API Stub.
 *
 * Stubs in this file is weakly bounded. So, if the hardware_xxx or
 * the pico_xxx library is not linked in the application, the stub
 * function in this file will be linked.
 *
 * There are two purposes.
 *
 * The first one to allow programmer not to link the unused library.
 * For example, assume a program which doesn't use hardware_i2c lib.
 * While program doesn't use the API inside this library, the
 * rpp_driver::SdkWrapper class needs the API. On the other hand,
 * linking all library of Pico SDK just suppress the error message is
 * nonsense. So, linking stub is the solution for this problem.
 *
 * The second purpose is warning for the unlinked API. Assume a
 * program which doesn't link the hardware_i2c while it is used.
 * In this case, there is no link error because the weakly bounded
 * stub API function is linked. To let the programmer know, the
 * stub function output the error message to the serial port.
 */
#include <stdint.h>
#include <stdlib.h>

// For arn-eabi-gcc and MSVC
#if __has_include("pico/stdlib.h") || defined(_MSC_VER)
typedef unsigned int uint;
#endif

#include <assert.h>
// Alternate API definitions for the Pico stub.
// To avoid the redefinition error, The pico header must not be included.
#include "pico_api_alternate_defs.hpp"

#ifdef _MSC_VER
// Suppress the C4716 error allowing not to return any value in function.
#pragma warning(disable : 4716)
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void adc_fifo_drain(void);
__attribute__((weak)) void adc_fifo_drain(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_adc_fifo_drain(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_adc_fifo_drain=__weak_adc_fifo_drain")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:adc_fifo_drain=_weak_adc_fifo_drain")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint16_t adc_fifo_get(void);
__attribute__((weak)) uint16_t adc_fifo_get(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint16_t _weak_adc_fifo_get(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_adc_fifo_get=__weak_adc_fifo_get")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:adc_fifo_get=_weak_adc_fifo_get")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint16_t adc_fifo_get_blocking(void);
__attribute__((weak)) uint16_t adc_fifo_get_blocking(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint16_t _weak_adc_fifo_get_blocking(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_adc_fifo_get_blocking=__weak_adc_fifo_get_blocking")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:adc_fifo_get_blocking=_weak_adc_fifo_get_blocking")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint8_t adc_fifo_get_level(void);
__attribute__((weak)) uint8_t adc_fifo_get_level(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint8_t _weak_adc_fifo_get_level(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_adc_fifo_get_level=__weak_adc_fifo_get_level")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:adc_fifo_get_level=_weak_adc_fifo_get_level")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool adc_fifo_is_empty(void);
__attribute__((weak)) bool adc_fifo_is_empty(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_adc_fifo_is_empty(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_adc_fifo_is_empty=__weak_adc_fifo_is_empty")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:adc_fifo_is_empty=_weak_adc_fifo_is_empty")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void adc_fifo_setup(bool en, bool dreq_en, uint16_t dreq_thresh,
                               bool err_in_fifo, bool byte_shift);
__attribute__((weak)) void adc_fifo_setup(bool en, bool dreq_en,
                                          uint16_t dreq_thresh,
                                          bool err_in_fifo, bool byte_shift)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_adc_fifo_setup(bool en, bool dreq_en,
                                     uint16_t dreq_thresh, bool err_in_fifo,
                                     bool byte_shift)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_adc_fifo_setup=__weak_adc_fifo_setup")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:adc_fifo_setup=_weak_adc_fifo_setup")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint adc_get_selected_input(void);
__attribute__((weak)) uint adc_get_selected_input(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_adc_get_selected_input(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_adc_get_selected_input=__weak_adc_get_selected_input")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:adc_get_selected_input=_weak_adc_get_selected_input")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void adc_gpio_init(uint gpio);
__attribute__((weak)) void adc_gpio_init(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_adc_gpio_init(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_adc_gpio_init=__weak_adc_gpio_init")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:adc_gpio_init=_weak_adc_gpio_init")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void adc_init(void);
__attribute__((weak)) void adc_init(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_adc_init(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_adc_init=__weak_adc_init")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:adc_init=_weak_adc_init")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void adc_irq_set_enabled(bool enabled);
__attribute__((weak)) void adc_irq_set_enabled(bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_adc_irq_set_enabled(bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_adc_irq_set_enabled=__weak_adc_irq_set_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:adc_irq_set_enabled=_weak_adc_irq_set_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint16_t adc_read(void);
__attribute__((weak)) uint16_t adc_read(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint16_t _weak_adc_read(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_adc_read=__weak_adc_read")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:adc_read=_weak_adc_read")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void adc_run(bool run);
__attribute__((weak)) void adc_run(bool run)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_adc_run(bool run)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_adc_run=__weak_adc_run")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:adc_run=_weak_adc_run")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void adc_select_input(uint input);
__attribute__((weak)) void adc_select_input(uint input)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_adc_select_input(uint input)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_adc_select_input=__weak_adc_select_input")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:adc_select_input=_weak_adc_select_input")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void adc_set_clkdiv(float clkdiv);
__attribute__((weak)) void adc_set_clkdiv(float clkdiv)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_adc_set_clkdiv(float clkdiv)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_adc_set_clkdiv=__weak_adc_set_clkdiv")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:adc_set_clkdiv=_weak_adc_set_clkdiv")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void adc_set_round_robin(uint input_mask);
__attribute__((weak)) void adc_set_round_robin(uint input_mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_adc_set_round_robin(uint input_mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_adc_set_round_robin=__weak_adc_set_round_robin")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:adc_set_round_robin=_weak_adc_set_round_robin")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void adc_set_temp_sensor_enabled(bool enable);
__attribute__((weak)) void adc_set_temp_sensor_enabled(bool enable)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_adc_set_temp_sensor_enabled(bool enable)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_adc library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_adc_set_temp_sensor_enabled=__weak_adc_set_temp_sensor_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:adc_set_temp_sensor_enabled=_weak_adc_set_temp_sensor_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int __sign_of(int32_t v);
__attribute__((weak)) int __sign_of(int32_t v)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak___sign_of(int32_t v)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:___sign_of=__weak___sign_of")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:__sign_of=_weak___sign_of")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" divmod_result_t hw_divider_divmod_s32(int32_t a, int32_t b);
__attribute__((weak)) divmod_result_t hw_divider_divmod_s32(int32_t a,
                                                            int32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" divmod_result_t _weak_hw_divider_divmod_s32(int32_t a, int32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_divmod_s32=__weak_hw_divider_divmod_s32")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_divmod_s32=_weak_hw_divider_divmod_s32")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void hw_divider_divmod_s32_start(int32_t a, int32_t b);
__attribute__((weak)) void hw_divider_divmod_s32_start(int32_t a, int32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_hw_divider_divmod_s32_start(int32_t a, int32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_divmod_s32_start=__weak_hw_divider_divmod_s32_start")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_divmod_s32_start=_weak_hw_divider_divmod_s32_start")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" divmod_result_t hw_divider_divmod_u32(uint32_t a, uint32_t b);
__attribute__((weak)) divmod_result_t hw_divider_divmod_u32(uint32_t a,
                                                            uint32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" divmod_result_t _weak_hw_divider_divmod_u32(uint32_t a, uint32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_divmod_u32=__weak_hw_divider_divmod_u32")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_divmod_u32=_weak_hw_divider_divmod_u32")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void hw_divider_divmod_u32_start(uint32_t a, uint32_t b);
__attribute__((weak)) void hw_divider_divmod_u32_start(uint32_t a, uint32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_hw_divider_divmod_u32_start(uint32_t a, uint32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_divmod_u32_start=__weak_hw_divider_divmod_u32_start")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_divmod_u32_start=_weak_hw_divider_divmod_u32_start")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void hw_divider_pause(void);
__attribute__((weak)) void hw_divider_pause(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_hw_divider_pause(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_hw_divider_pause=__weak_hw_divider_pause")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:hw_divider_pause=_weak_hw_divider_pause")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int32_t hw_divider_quotient_s32(int32_t a, int32_t b);
__attribute__((weak)) int32_t hw_divider_quotient_s32(int32_t a, int32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int32_t _weak_hw_divider_quotient_s32(int32_t a, int32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_quotient_s32=__weak_hw_divider_quotient_s32")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_quotient_s32=_weak_hw_divider_quotient_s32")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int32_t hw_divider_remainder_s32(int32_t a, int32_t b);
__attribute__((weak)) int32_t hw_divider_remainder_s32(int32_t a, int32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int32_t _weak_hw_divider_remainder_s32(int32_t a, int32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_remainder_s32=__weak_hw_divider_remainder_s32")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_remainder_s32=_weak_hw_divider_remainder_s32")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void hw_divider_restore_state(hw_divider_state_t* src);
__attribute__((weak)) void hw_divider_restore_state(hw_divider_state_t* src)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_hw_divider_restore_state(hw_divider_state_t* src)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_restore_state=__weak_hw_divider_restore_state")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_restore_state=_weak_hw_divider_restore_state")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" divmod_result_t hw_divider_result_nowait(void);
__attribute__((weak)) divmod_result_t hw_divider_result_nowait(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" divmod_result_t _weak_hw_divider_result_nowait(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_result_nowait=__weak_hw_divider_result_nowait")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_result_nowait=_weak_hw_divider_result_nowait")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" divmod_result_t hw_divider_result_wait(void);
__attribute__((weak)) divmod_result_t hw_divider_result_wait(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" divmod_result_t _weak_hw_divider_result_wait(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_result_wait=__weak_hw_divider_result_wait")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_result_wait=_weak_hw_divider_result_wait")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int32_t hw_divider_s32_quotient_inlined(int32_t a, int32_t b);
__attribute__((weak)) int32_t hw_divider_s32_quotient_inlined(int32_t a,
                                                              int32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int32_t _weak_hw_divider_s32_quotient_inlined(int32_t a, int32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_s32_quotient_inlined=__weak_hw_divider_s32_quotient_inlined")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_s32_quotient_inlined=_weak_hw_divider_s32_quotient_inlined")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int32_t hw_divider_s32_quotient_wait(void);
__attribute__((weak)) int32_t hw_divider_s32_quotient_wait(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int32_t _weak_hw_divider_s32_quotient_wait(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_s32_quotient_wait=__weak_hw_divider_s32_quotient_wait")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_s32_quotient_wait=_weak_hw_divider_s32_quotient_wait")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int32_t hw_divider_s32_remainder_inlined(int32_t a, int32_t b);
__attribute__((weak)) int32_t hw_divider_s32_remainder_inlined(int32_t a,
                                                               int32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int32_t _weak_hw_divider_s32_remainder_inlined(int32_t a, int32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_s32_remainder_inlined=__weak_hw_divider_s32_remainder_inlined")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_s32_remainder_inlined=_weak_hw_divider_s32_remainder_inlined")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int32_t hw_divider_s32_remainder_wait(void);
__attribute__((weak)) int32_t hw_divider_s32_remainder_wait(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int32_t _weak_hw_divider_s32_remainder_wait(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_s32_remainder_wait=__weak_hw_divider_s32_remainder_wait")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_s32_remainder_wait=_weak_hw_divider_s32_remainder_wait")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void hw_divider_save_state(hw_divider_state_t* dest);
__attribute__((weak)) void hw_divider_save_state(hw_divider_state_t* dest)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_hw_divider_save_state(hw_divider_state_t* dest)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_save_state=__weak_hw_divider_save_state")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_save_state=_weak_hw_divider_save_state")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t hw_divider_u32_quotient(uint32_t a, uint32_t b);
__attribute__((weak)) uint32_t hw_divider_u32_quotient(uint32_t a, uint32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_hw_divider_u32_quotient(uint32_t a, uint32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_u32_quotient=__weak_hw_divider_u32_quotient")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_u32_quotient=_weak_hw_divider_u32_quotient")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t hw_divider_u32_quotient_inlined(uint32_t a, uint32_t b);
__attribute__((weak)) uint32_t hw_divider_u32_quotient_inlined(uint32_t a,
                                                               uint32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_hw_divider_u32_quotient_inlined(uint32_t a,
                                                          uint32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_u32_quotient_inlined=__weak_hw_divider_u32_quotient_inlined")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_u32_quotient_inlined=_weak_hw_divider_u32_quotient_inlined")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t hw_divider_u32_quotient_wait(void);
__attribute__((weak)) uint32_t hw_divider_u32_quotient_wait(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_hw_divider_u32_quotient_wait(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_u32_quotient_wait=__weak_hw_divider_u32_quotient_wait")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_u32_quotient_wait=_weak_hw_divider_u32_quotient_wait")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t hw_divider_u32_remainder(uint32_t a, uint32_t b);
__attribute__((weak)) uint32_t hw_divider_u32_remainder(uint32_t a, uint32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_hw_divider_u32_remainder(uint32_t a, uint32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_u32_remainder=__weak_hw_divider_u32_remainder")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_u32_remainder=_weak_hw_divider_u32_remainder")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t hw_divider_u32_remainder_inlined(uint32_t a, uint32_t b);
__attribute__((weak)) uint32_t hw_divider_u32_remainder_inlined(uint32_t a,
                                                                uint32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_hw_divider_u32_remainder_inlined(uint32_t a,
                                                           uint32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_u32_remainder_inlined=__weak_hw_divider_u32_remainder_inlined")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_u32_remainder_inlined=_weak_hw_divider_u32_remainder_inlined")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t hw_divider_u32_remainder_wait(void);
__attribute__((weak)) uint32_t hw_divider_u32_remainder_wait(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_hw_divider_u32_remainder_wait(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_u32_remainder_wait=__weak_hw_divider_u32_remainder_wait")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_u32_remainder_wait=_weak_hw_divider_u32_remainder_wait")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void hw_divider_wait_ready(void);
__attribute__((weak)) void hw_divider_wait_ready(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_hw_divider_wait_ready(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_hw_divider_wait_ready=__weak_hw_divider_wait_ready")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:hw_divider_wait_ready=_weak_hw_divider_wait_ready")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int32_t to_quotient_s32(divmod_result_t r);
__attribute__((weak)) int32_t to_quotient_s32(divmod_result_t r)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int32_t _weak_to_quotient_s32(divmod_result_t r)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_to_quotient_s32=__weak_to_quotient_s32")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:to_quotient_s32=_weak_to_quotient_s32")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t to_quotient_u32(divmod_result_t r);
__attribute__((weak)) uint32_t to_quotient_u32(divmod_result_t r)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_to_quotient_u32(divmod_result_t r)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_to_quotient_u32=__weak_to_quotient_u32")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:to_quotient_u32=_weak_to_quotient_u32")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int32_t to_remainder_s32(divmod_result_t r);
__attribute__((weak)) int32_t to_remainder_s32(divmod_result_t r)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int32_t _weak_to_remainder_s32(divmod_result_t r)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_to_remainder_s32=__weak_to_remainder_s32")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:to_remainder_s32=_weak_to_remainder_s32")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t to_remainder_u32(divmod_result_t r);
__attribute__((weak)) uint32_t to_remainder_u32(divmod_result_t r)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_to_remainder_u32(divmod_result_t r)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_divider library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_to_remainder_u32=__weak_to_remainder_u32")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:to_remainder_u32=_weak_to_remainder_u32")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t channel_config_get_ctrl_value(
    const dma_channel_config* config);
__attribute__((weak)) uint32_t
channel_config_get_ctrl_value(const dma_channel_config* config)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_channel_config_get_ctrl_value(
    const dma_channel_config* config)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_channel_config_get_ctrl_value=__weak_channel_config_get_ctrl_value")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:channel_config_get_ctrl_value=_weak_channel_config_get_ctrl_value")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void channel_config_set_bswap(dma_channel_config* c, bool bswap);
__attribute__((weak)) void channel_config_set_bswap(dma_channel_config* c,
                                                    bool bswap)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_channel_config_set_bswap(dma_channel_config* c,
                                               bool bswap)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_channel_config_set_bswap=__weak_channel_config_set_bswap")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:channel_config_set_bswap=_weak_channel_config_set_bswap")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void channel_config_set_chain_to(dma_channel_config* c,
                                            uint chain_to);
__attribute__((weak)) void channel_config_set_chain_to(dma_channel_config* c,
                                                       uint chain_to)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_channel_config_set_chain_to(dma_channel_config* c,
                                                  uint chain_to)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_channel_config_set_chain_to=__weak_channel_config_set_chain_to")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:channel_config_set_chain_to=_weak_channel_config_set_chain_to")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void channel_config_set_dreq(dma_channel_config* c, uint dreq);
__attribute__((weak)) void channel_config_set_dreq(dma_channel_config* c,
                                                   uint dreq)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_channel_config_set_dreq(dma_channel_config* c, uint dreq)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_channel_config_set_dreq=__weak_channel_config_set_dreq")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:channel_config_set_dreq=_weak_channel_config_set_dreq")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void channel_config_set_enable(dma_channel_config* c, bool enable);
__attribute__((weak)) void channel_config_set_enable(dma_channel_config* c,
                                                     bool enable)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_channel_config_set_enable(dma_channel_config* c,
                                                bool enable)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_channel_config_set_enable=__weak_channel_config_set_enable")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:channel_config_set_enable=_weak_channel_config_set_enable")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void channel_config_set_high_priority(dma_channel_config* c,
                                                 bool high_priority);
__attribute__((weak)) void channel_config_set_high_priority(
    dma_channel_config* c, bool high_priority)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_channel_config_set_high_priority(dma_channel_config* c,
                                                       bool high_priority)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_channel_config_set_high_priority=__weak_channel_config_set_high_priority")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:channel_config_set_high_priority=_weak_channel_config_set_high_priority")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void channel_config_set_irq_quiet(dma_channel_config* c,
                                             bool irq_quiet);
__attribute__((weak)) void channel_config_set_irq_quiet(dma_channel_config* c,
                                                        bool irq_quiet)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_channel_config_set_irq_quiet(dma_channel_config* c,
                                                   bool irq_quiet)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_channel_config_set_irq_quiet=__weak_channel_config_set_irq_quiet")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:channel_config_set_irq_quiet=_weak_channel_config_set_irq_quiet")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void channel_config_set_read_increment(dma_channel_config* c,
                                                  bool incr);
__attribute__((weak)) void channel_config_set_read_increment(
    dma_channel_config* c, bool incr)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_channel_config_set_read_increment(dma_channel_config* c,
                                                        bool incr)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_channel_config_set_read_increment=__weak_channel_config_set_read_increment")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:channel_config_set_read_increment=_weak_channel_config_set_read_increment")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void channel_config_set_ring(dma_channel_config* c, bool write,
                                        uint size_bits);
__attribute__((weak)) void channel_config_set_ring(dma_channel_config* c,
                                                   bool write, uint size_bits)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_channel_config_set_ring(dma_channel_config* c, bool write,
                                              uint size_bits)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_channel_config_set_ring=__weak_channel_config_set_ring")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:channel_config_set_ring=_weak_channel_config_set_ring")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void channel_config_set_sniff_enable(dma_channel_config* c,
                                                bool sniff_enable);
__attribute__((weak)) void channel_config_set_sniff_enable(
    dma_channel_config* c, bool sniff_enable)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_channel_config_set_sniff_enable(dma_channel_config* c,
                                                      bool sniff_enable)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_channel_config_set_sniff_enable=__weak_channel_config_set_sniff_enable")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:channel_config_set_sniff_enable=_weak_channel_config_set_sniff_enable")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void channel_config_set_transfer_data_size(
    dma_channel_config* c, enum dma_channel_transfer_size size);
__attribute__((weak)) void channel_config_set_transfer_data_size(
    dma_channel_config* c, enum dma_channel_transfer_size size)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_channel_config_set_transfer_data_size(
    dma_channel_config* c, enum dma_channel_transfer_size size)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_channel_config_set_transfer_data_size=__weak_channel_config_set_transfer_data_size")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:channel_config_set_transfer_data_size=_weak_channel_config_set_transfer_data_size")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void channel_config_set_write_increment(dma_channel_config* c,
                                                   bool incr);
__attribute__((weak)) void channel_config_set_write_increment(
    dma_channel_config* c, bool incr)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_channel_config_set_write_increment(dma_channel_config* c,
                                                         bool incr)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_channel_config_set_write_increment=__weak_channel_config_set_write_increment")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:channel_config_set_write_increment=_weak_channel_config_set_write_increment")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_abort(uint channel);
__attribute__((weak)) void dma_channel_abort(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_abort(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_dma_channel_abort=__weak_dma_channel_abort")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:dma_channel_abort=_weak_dma_channel_abort")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_acknowledge_irq0(uint channel);
__attribute__((weak)) void dma_channel_acknowledge_irq0(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_acknowledge_irq0(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_acknowledge_irq0=__weak_dma_channel_acknowledge_irq0")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_acknowledge_irq0=_weak_dma_channel_acknowledge_irq0")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_acknowledge_irq1(uint channel);
__attribute__((weak)) void dma_channel_acknowledge_irq1(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_acknowledge_irq1(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_acknowledge_irq1=__weak_dma_channel_acknowledge_irq1")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_acknowledge_irq1=_weak_dma_channel_acknowledge_irq1")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_claim(uint channel);
__attribute__((weak)) void dma_channel_claim(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_claim(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_dma_channel_claim=__weak_dma_channel_claim")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:dma_channel_claim=_weak_dma_channel_claim")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_cleanup(uint channel);
__attribute__((weak)) void dma_channel_cleanup(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_cleanup(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_dma_channel_cleanup=__weak_dma_channel_cleanup")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:dma_channel_cleanup=_weak_dma_channel_cleanup")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_configure(uint channel,
                                      const dma_channel_config* config,
                                      volatile void* write_addr,
                                      const volatile void* read_addr,
                                      uint transfer_count, bool trigger);
__attribute__((weak)) void dma_channel_configure(
    uint channel, const dma_channel_config* config, volatile void* write_addr,
    const volatile void* read_addr, uint transfer_count, bool trigger)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_configure(uint channel,
                                            const dma_channel_config* config,
                                            volatile void* write_addr,
                                            const volatile void* read_addr,
                                            uint transfer_count, bool trigger)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_configure=__weak_dma_channel_configure")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_configure=_weak_dma_channel_configure")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" dma_channel_config dma_channel_get_default_config(uint channel);
__attribute__((weak)) dma_channel_config
dma_channel_get_default_config(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" dma_channel_config _weak_dma_channel_get_default_config(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_get_default_config=__weak_dma_channel_get_default_config")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_get_default_config=_weak_dma_channel_get_default_config")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool dma_channel_get_irq0_status(uint channel);
__attribute__((weak)) bool dma_channel_get_irq0_status(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_dma_channel_get_irq0_status(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_get_irq0_status=__weak_dma_channel_get_irq0_status")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_get_irq0_status=_weak_dma_channel_get_irq0_status")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool dma_channel_get_irq1_status(uint channel);
__attribute__((weak)) bool dma_channel_get_irq1_status(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_dma_channel_get_irq1_status(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_get_irq1_status=__weak_dma_channel_get_irq1_status")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_get_irq1_status=_weak_dma_channel_get_irq1_status")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" dma_channel_hw_t* dma_channel_hw_addr(uint channel);
__attribute__((weak)) dma_channel_hw_t* dma_channel_hw_addr(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" dma_channel_hw_t* _weak_dma_channel_hw_addr(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_dma_channel_hw_addr=__weak_dma_channel_hw_addr")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:dma_channel_hw_addr=_weak_dma_channel_hw_addr")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool dma_channel_is_busy(uint channel);
__attribute__((weak)) bool dma_channel_is_busy(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_dma_channel_is_busy(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_dma_channel_is_busy=__weak_dma_channel_is_busy")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:dma_channel_is_busy=_weak_dma_channel_is_busy")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool dma_channel_is_claimed(uint channel);
__attribute__((weak)) bool dma_channel_is_claimed(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_dma_channel_is_claimed(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_is_claimed=__weak_dma_channel_is_claimed")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_is_claimed=_weak_dma_channel_is_claimed")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_set_config(uint channel,
                                       const dma_channel_config* config,
                                       bool trigger);
__attribute__((weak)) void dma_channel_set_config(
    uint channel, const dma_channel_config* config, bool trigger)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_set_config(uint channel,
                                             const dma_channel_config* config,
                                             bool trigger)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_set_config=__weak_dma_channel_set_config")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_set_config=_weak_dma_channel_set_config")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_set_irq0_enabled(uint channel, bool enabled);
__attribute__((weak)) void dma_channel_set_irq0_enabled(uint channel,
                                                        bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_set_irq0_enabled(uint channel, bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_set_irq0_enabled=__weak_dma_channel_set_irq0_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_set_irq0_enabled=_weak_dma_channel_set_irq0_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_set_irq1_enabled(uint channel, bool enabled);
__attribute__((weak)) void dma_channel_set_irq1_enabled(uint channel,
                                                        bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_set_irq1_enabled(uint channel, bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_set_irq1_enabled=__weak_dma_channel_set_irq1_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_set_irq1_enabled=_weak_dma_channel_set_irq1_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_set_read_addr(uint channel,
                                          const volatile void* read_addr,
                                          bool trigger);
__attribute__((weak)) void dma_channel_set_read_addr(
    uint channel, const volatile void* read_addr, bool trigger)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_set_read_addr(uint channel,
                                                const volatile void* read_addr,
                                                bool trigger)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_set_read_addr=__weak_dma_channel_set_read_addr")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_set_read_addr=_weak_dma_channel_set_read_addr")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_set_trans_count(uint channel, uint32_t trans_count,
                                            bool trigger);
__attribute__((weak)) void dma_channel_set_trans_count(uint channel,
                                                       uint32_t trans_count,
                                                       bool trigger)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_set_trans_count(uint channel,
                                                  uint32_t trans_count,
                                                  bool trigger)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_set_trans_count=__weak_dma_channel_set_trans_count")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_set_trans_count=_weak_dma_channel_set_trans_count")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_set_write_addr(uint channel,
                                           volatile void* write_addr,
                                           bool trigger);
__attribute__((weak)) void dma_channel_set_write_addr(uint channel,
                                                      volatile void* write_addr,
                                                      bool trigger)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_set_write_addr(uint channel,
                                                 volatile void* write_addr,
                                                 bool trigger)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_set_write_addr=__weak_dma_channel_set_write_addr")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_set_write_addr=_weak_dma_channel_set_write_addr")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_start(uint channel);
__attribute__((weak)) void dma_channel_start(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_start(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_dma_channel_start=__weak_dma_channel_start")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:dma_channel_start=_weak_dma_channel_start")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_transfer_from_buffer_now(
    uint channel, const volatile void* read_addr, uint32_t transfer_count);
__attribute__((weak)) void dma_channel_transfer_from_buffer_now(
    uint channel, const volatile void* read_addr, uint32_t transfer_count)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_transfer_from_buffer_now(
    uint channel, const volatile void* read_addr, uint32_t transfer_count)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_transfer_from_buffer_now=__weak_dma_channel_transfer_from_buffer_now")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_transfer_from_buffer_now=_weak_dma_channel_transfer_from_buffer_now")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_transfer_to_buffer_now(uint channel,
                                                   volatile void* write_addr,
                                                   uint32_t transfer_count);
__attribute__((weak)) void dma_channel_transfer_to_buffer_now(
    uint channel, volatile void* write_addr, uint32_t transfer_count)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_transfer_to_buffer_now(
    uint channel, volatile void* write_addr, uint32_t transfer_count)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_transfer_to_buffer_now=__weak_dma_channel_transfer_to_buffer_now")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_transfer_to_buffer_now=_weak_dma_channel_transfer_to_buffer_now")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_unclaim(uint channel);
__attribute__((weak)) void dma_channel_unclaim(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_unclaim(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_dma_channel_unclaim=__weak_dma_channel_unclaim")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:dma_channel_unclaim=_weak_dma_channel_unclaim")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_channel_wait_for_finish_blocking(uint channel);
__attribute__((weak)) void dma_channel_wait_for_finish_blocking(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_channel_wait_for_finish_blocking(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_channel_wait_for_finish_blocking=__weak_dma_channel_wait_for_finish_blocking")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_channel_wait_for_finish_blocking=_weak_dma_channel_wait_for_finish_blocking")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_claim_mask(uint32_t channel_mask);
__attribute__((weak)) void dma_claim_mask(uint32_t channel_mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_claim_mask(uint32_t channel_mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_dma_claim_mask=__weak_dma_claim_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:dma_claim_mask=_weak_dma_claim_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int dma_claim_unused_channel(bool required);
__attribute__((weak)) int dma_claim_unused_channel(bool required)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_dma_claim_unused_channel(bool required)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_claim_unused_channel=__weak_dma_claim_unused_channel")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_claim_unused_channel=_weak_dma_claim_unused_channel")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int dma_claim_unused_timer(bool required);
__attribute__((weak)) int dma_claim_unused_timer(bool required)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_dma_claim_unused_timer(bool required)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_claim_unused_timer=__weak_dma_claim_unused_timer")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_claim_unused_timer=_weak_dma_claim_unused_timer")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" dma_channel_config dma_get_channel_config(uint channel);
__attribute__((weak)) dma_channel_config dma_get_channel_config(uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" dma_channel_config _weak_dma_get_channel_config(uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_get_channel_config=__weak_dma_get_channel_config")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_get_channel_config=_weak_dma_get_channel_config")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int dma_get_irq_num(uint irq_index);
__attribute__((weak)) int dma_get_irq_num(uint irq_index)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_dma_get_irq_num(uint irq_index)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_dma_get_irq_num=__weak_dma_get_irq_num")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:dma_get_irq_num=_weak_dma_get_irq_num")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint dma_get_timer_dreq(uint timer_num);
__attribute__((weak)) uint dma_get_timer_dreq(uint timer_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_dma_get_timer_dreq(uint timer_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_dma_get_timer_dreq=__weak_dma_get_timer_dreq")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:dma_get_timer_dreq=_weak_dma_get_timer_dreq")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_irqn_acknowledge_channel(uint irq_index, uint channel);
__attribute__((weak)) void dma_irqn_acknowledge_channel(uint irq_index,
                                                        uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_irqn_acknowledge_channel(uint irq_index, uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_irqn_acknowledge_channel=__weak_dma_irqn_acknowledge_channel")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_irqn_acknowledge_channel=_weak_dma_irqn_acknowledge_channel")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool dma_irqn_get_channel_status(uint irq_index, uint channel);
__attribute__((weak)) bool dma_irqn_get_channel_status(uint irq_index,
                                                       uint channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_dma_irqn_get_channel_status(uint irq_index, uint channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_irqn_get_channel_status=__weak_dma_irqn_get_channel_status")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_irqn_get_channel_status=_weak_dma_irqn_get_channel_status")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_irqn_set_channel_enabled(uint irq_index, uint channel,
                                             bool enabled);
__attribute__((weak)) void dma_irqn_set_channel_enabled(uint irq_index,
                                                        uint channel,
                                                        bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_irqn_set_channel_enabled(uint irq_index, uint channel,
                                                   bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_irqn_set_channel_enabled=__weak_dma_irqn_set_channel_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_irqn_set_channel_enabled=_weak_dma_irqn_set_channel_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_irqn_set_channel_mask_enabled(uint irq_index,
                                                  uint32_t channel_mask,
                                                  bool enabled);
__attribute__((weak)) void dma_irqn_set_channel_mask_enabled(
    uint irq_index, uint32_t channel_mask, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_irqn_set_channel_mask_enabled(uint irq_index,
                                                        uint32_t channel_mask,
                                                        bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_irqn_set_channel_mask_enabled=__weak_dma_irqn_set_channel_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_irqn_set_channel_mask_enabled=_weak_dma_irqn_set_channel_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_set_irq0_channel_mask_enabled(uint32_t channel_mask,
                                                  bool enabled);
__attribute__((weak)) void dma_set_irq0_channel_mask_enabled(
    uint32_t channel_mask, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_set_irq0_channel_mask_enabled(uint32_t channel_mask,
                                                        bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_set_irq0_channel_mask_enabled=__weak_dma_set_irq0_channel_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_set_irq0_channel_mask_enabled=_weak_dma_set_irq0_channel_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_set_irq1_channel_mask_enabled(uint32_t channel_mask,
                                                  bool enabled);
__attribute__((weak)) void dma_set_irq1_channel_mask_enabled(
    uint32_t channel_mask, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_set_irq1_channel_mask_enabled(uint32_t channel_mask,
                                                        bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_set_irq1_channel_mask_enabled=__weak_dma_set_irq1_channel_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_set_irq1_channel_mask_enabled=_weak_dma_set_irq1_channel_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_sniffer_disable(void);
__attribute__((weak)) void dma_sniffer_disable(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_sniffer_disable(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_dma_sniffer_disable=__weak_dma_sniffer_disable")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:dma_sniffer_disable=_weak_dma_sniffer_disable")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_sniffer_enable(uint channel, uint mode,
                                   bool force_channel_enable);
__attribute__((weak)) void dma_sniffer_enable(uint channel, uint mode,
                                              bool force_channel_enable)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_sniffer_enable(uint channel, uint mode,
                                         bool force_channel_enable)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_dma_sniffer_enable=__weak_dma_sniffer_enable")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:dma_sniffer_enable=_weak_dma_sniffer_enable")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t dma_sniffer_get_data_accumulator(void);
__attribute__((weak)) uint32_t dma_sniffer_get_data_accumulator(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_dma_sniffer_get_data_accumulator(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_sniffer_get_data_accumulator=__weak_dma_sniffer_get_data_accumulator")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_sniffer_get_data_accumulator=_weak_dma_sniffer_get_data_accumulator")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_sniffer_set_byte_swap_enabled(bool swap);
__attribute__((weak)) void dma_sniffer_set_byte_swap_enabled(bool swap)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_sniffer_set_byte_swap_enabled(bool swap)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_sniffer_set_byte_swap_enabled=__weak_dma_sniffer_set_byte_swap_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_sniffer_set_byte_swap_enabled=_weak_dma_sniffer_set_byte_swap_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_sniffer_set_data_accumulator(uint32_t seed_value);
__attribute__((weak)) void dma_sniffer_set_data_accumulator(uint32_t seed_value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_sniffer_set_data_accumulator(uint32_t seed_value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_sniffer_set_data_accumulator=__weak_dma_sniffer_set_data_accumulator")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_sniffer_set_data_accumulator=_weak_dma_sniffer_set_data_accumulator")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_sniffer_set_output_invert_enabled(bool invert);
__attribute__((weak)) void dma_sniffer_set_output_invert_enabled(bool invert)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_sniffer_set_output_invert_enabled(bool invert)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_sniffer_set_output_invert_enabled=__weak_dma_sniffer_set_output_invert_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_sniffer_set_output_invert_enabled=_weak_dma_sniffer_set_output_invert_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_sniffer_set_output_reverse_enabled(bool reverse);
__attribute__((weak)) void dma_sniffer_set_output_reverse_enabled(bool reverse)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_sniffer_set_output_reverse_enabled(bool reverse)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_sniffer_set_output_reverse_enabled=__weak_dma_sniffer_set_output_reverse_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_sniffer_set_output_reverse_enabled=_weak_dma_sniffer_set_output_reverse_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_start_channel_mask(uint32_t chan_mask);
__attribute__((weak)) void dma_start_channel_mask(uint32_t chan_mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_start_channel_mask(uint32_t chan_mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_start_channel_mask=__weak_dma_start_channel_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_start_channel_mask=_weak_dma_start_channel_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_timer_claim(uint timer);
__attribute__((weak)) void dma_timer_claim(uint timer)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_timer_claim(uint timer)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_dma_timer_claim=__weak_dma_timer_claim")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:dma_timer_claim=_weak_dma_timer_claim")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool dma_timer_is_claimed(uint timer);
__attribute__((weak)) bool dma_timer_is_claimed(uint timer)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_dma_timer_is_claimed(uint timer)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_timer_is_claimed=__weak_dma_timer_is_claimed")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:dma_timer_is_claimed=_weak_dma_timer_is_claimed")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_timer_set_fraction(uint timer, uint16_t numerator,
                                       uint16_t denominator);
__attribute__((weak)) void dma_timer_set_fraction(uint timer,
                                                  uint16_t numerator,
                                                  uint16_t denominator)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_timer_set_fraction(uint timer, uint16_t numerator,
                                             uint16_t denominator)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_dma_timer_set_fraction=__weak_dma_timer_set_fraction")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:dma_timer_set_fraction=_weak_dma_timer_set_fraction")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_timer_unclaim(uint timer);
__attribute__((weak)) void dma_timer_unclaim(uint timer)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_timer_unclaim(uint timer)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_dma_timer_unclaim=__weak_dma_timer_unclaim")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:dma_timer_unclaim=_weak_dma_timer_unclaim")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void dma_unclaim_mask(uint32_t channel_mask);
__attribute__((weak)) void dma_unclaim_mask(uint32_t channel_mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_dma_unclaim_mask(uint32_t channel_mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_dma_unclaim_mask=__weak_dma_unclaim_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:dma_unclaim_mask=_weak_dma_unclaim_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void print_dma_ctrl(dma_channel_hw_t* channel);
__attribute__((weak)) void print_dma_ctrl(dma_channel_hw_t* channel)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_print_dma_ctrl(dma_channel_hw_t* channel)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_dma library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_print_dma_ctrl=__weak_print_dma_ctrl")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:print_dma_ctrl=_weak_print_dma_ctrl")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint exception_get_priority(uint num);
__attribute__((weak)) uint exception_get_priority(uint num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_exception_get_priority(uint num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(
      false &&
      "Error : The hardware_exception library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_exception_get_priority=__weak_exception_get_priority")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:exception_get_priority=_weak_exception_get_priority")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" exception_handler_t exception_get_vtable_handler(
    enum exception_number num);
__attribute__((weak)) exception_handler_t
exception_get_vtable_handler(enum exception_number num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" exception_handler_t _weak_exception_get_vtable_handler(
    enum exception_number num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(
      false &&
      "Error : The hardware_exception library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_exception_get_vtable_handler=__weak_exception_get_vtable_handler")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:exception_get_vtable_handler=_weak_exception_get_vtable_handler")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void exception_restore_handler(enum exception_number num,
                                          exception_handler_t original_handler);
__attribute__((weak)) void exception_restore_handler(
    enum exception_number num, exception_handler_t original_handler)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_exception_restore_handler(
    enum exception_number num, exception_handler_t original_handler)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(
      false &&
      "Error : The hardware_exception library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_exception_restore_handler=__weak_exception_restore_handler")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:exception_restore_handler=_weak_exception_restore_handler")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" exception_handler_t exception_set_exclusive_handler(
    enum exception_number num, exception_handler_t handler);
__attribute__((weak)) exception_handler_t exception_set_exclusive_handler(
    enum exception_number num, exception_handler_t handler)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" exception_handler_t _weak_exception_set_exclusive_handler(
    enum exception_number num, exception_handler_t handler)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(
      false &&
      "Error : The hardware_exception library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_exception_set_exclusive_handler=__weak_exception_set_exclusive_handler")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:exception_set_exclusive_handler=_weak_exception_set_exclusive_handler")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool exception_set_priority(uint num, uint8_t hardware_priority);
__attribute__((weak)) bool exception_set_priority(uint num,
                                                  uint8_t hardware_priority)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_exception_set_priority(uint num,
                                             uint8_t hardware_priority)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(
      false &&
      "Error : The hardware_exception library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_exception_set_priority=__weak_exception_set_priority")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:exception_set_priority=_weak_exception_set_priority")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void flash_do_cmd(const uint8_t* txbuf, uint8_t* rxbuf,
                             size_t count);
__attribute__((weak)) void flash_do_cmd(const uint8_t* txbuf, uint8_t* rxbuf,
                                        size_t count)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_flash_do_cmd(const uint8_t* txbuf, uint8_t* rxbuf,
                                   size_t count)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_flash library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_flash_do_cmd=__weak_flash_do_cmd")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:flash_do_cmd=_weak_flash_do_cmd")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void flash_flush_cache(void);
__attribute__((weak)) void flash_flush_cache(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_flash_flush_cache(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_flash library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_flash_flush_cache=__weak_flash_flush_cache")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:flash_flush_cache=_weak_flash_flush_cache")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void flash_get_unique_id(uint8_t* id_out);
__attribute__((weak)) void flash_get_unique_id(uint8_t* id_out)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_flash_get_unique_id(uint8_t* id_out)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_flash library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_flash_get_unique_id=__weak_flash_get_unique_id")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:flash_get_unique_id=_weak_flash_get_unique_id")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void flash_range_erase(uint32_t flash_offs, size_t count);
__attribute__((weak)) void flash_range_erase(uint32_t flash_offs, size_t count)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_flash_range_erase(uint32_t flash_offs, size_t count)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_flash library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_flash_range_erase=__weak_flash_range_erase")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:flash_range_erase=_weak_flash_range_erase")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void flash_range_program(uint32_t flash_offs, const uint8_t* data,
                                    size_t count);
__attribute__((weak)) void flash_range_program(uint32_t flash_offs,
                                               const uint8_t* data,
                                               size_t count)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_flash_range_program(uint32_t flash_offs,
                                          const uint8_t* data, size_t count)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_flash library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_flash_range_program=__weak_flash_range_program")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:flash_range_program=_weak_flash_range_program")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void i2c_deinit(i2c_inst_t* i2c);
__attribute__((weak)) void i2c_deinit(i2c_inst_t* i2c)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_i2c_deinit(i2c_inst_t* i2c)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_i2c_deinit=__weak_i2c_deinit")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:i2c_deinit=_weak_i2c_deinit")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint i2c_get_dreq(i2c_inst_t* i2c, bool is_tx);
__attribute__((weak)) uint i2c_get_dreq(i2c_inst_t* i2c, bool is_tx)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_i2c_get_dreq(i2c_inst_t* i2c, bool is_tx)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_i2c_get_dreq=__weak_i2c_get_dreq")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:i2c_get_dreq=_weak_i2c_get_dreq")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" i2c_hw_t* i2c_get_hw(i2c_inst_t* i2c);
__attribute__((weak)) i2c_hw_t* i2c_get_hw(i2c_inst_t* i2c)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" i2c_hw_t* _weak_i2c_get_hw(i2c_inst_t* i2c)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_i2c_get_hw=__weak_i2c_get_hw")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:i2c_get_hw=_weak_i2c_get_hw")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint i2c_get_index(i2c_inst_t* i2c);
__attribute__((weak)) uint i2c_get_index(i2c_inst_t* i2c)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_i2c_get_index(i2c_inst_t* i2c)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_i2c_get_index=__weak_i2c_get_index")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:i2c_get_index=_weak_i2c_get_index")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" i2c_inst_t* i2c_get_instance(uint num);
__attribute__((weak)) i2c_inst_t* i2c_get_instance(uint num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" i2c_inst_t* _weak_i2c_get_instance(uint num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_i2c_get_instance=__weak_i2c_get_instance")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:i2c_get_instance=_weak_i2c_get_instance")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" size_t i2c_get_read_available(i2c_inst_t* i2c);
__attribute__((weak)) size_t i2c_get_read_available(i2c_inst_t* i2c)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" size_t _weak_i2c_get_read_available(i2c_inst_t* i2c)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_i2c_get_read_available=__weak_i2c_get_read_available")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:i2c_get_read_available=_weak_i2c_get_read_available")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" size_t i2c_get_write_available(i2c_inst_t* i2c);
__attribute__((weak)) size_t i2c_get_write_available(i2c_inst_t* i2c)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" size_t _weak_i2c_get_write_available(i2c_inst_t* i2c)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_i2c_get_write_available=__weak_i2c_get_write_available")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:i2c_get_write_available=_weak_i2c_get_write_available")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint i2c_init(i2c_inst_t* i2c, uint baudrate);
__attribute__((weak)) uint i2c_init(i2c_inst_t* i2c, uint baudrate)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_i2c_init(i2c_inst_t* i2c, uint baudrate)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_i2c_init=__weak_i2c_init")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:i2c_init=_weak_i2c_init")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int i2c_read_blocking(i2c_inst_t* i2c, uint8_t addr, uint8_t* dst,
                                 size_t len, bool nostop);
__attribute__((weak)) int i2c_read_blocking(i2c_inst_t* i2c, uint8_t addr,
                                            uint8_t* dst, size_t len,
                                            bool nostop)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_i2c_read_blocking(i2c_inst_t* i2c, uint8_t addr,
                                       uint8_t* dst, size_t len, bool nostop)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_i2c_read_blocking=__weak_i2c_read_blocking")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:i2c_read_blocking=_weak_i2c_read_blocking")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int i2c_read_blocking_until(i2c_inst_t* i2c, uint8_t addr,
                                       uint8_t* dst, size_t len, bool nostop,
                                       absolute_time_t until);
__attribute__((weak)) int i2c_read_blocking_until(i2c_inst_t* i2c, uint8_t addr,
                                                  uint8_t* dst, size_t len,
                                                  bool nostop,
                                                  absolute_time_t until)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_i2c_read_blocking_until(i2c_inst_t* i2c, uint8_t addr,
                                             uint8_t* dst, size_t len,
                                             bool nostop, absolute_time_t until)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_i2c_read_blocking_until=__weak_i2c_read_blocking_until")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:i2c_read_blocking_until=_weak_i2c_read_blocking_until")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint8_t i2c_read_byte_raw(i2c_inst_t* i2c);
__attribute__((weak)) uint8_t i2c_read_byte_raw(i2c_inst_t* i2c)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint8_t _weak_i2c_read_byte_raw(i2c_inst_t* i2c)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_i2c_read_byte_raw=__weak_i2c_read_byte_raw")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:i2c_read_byte_raw=_weak_i2c_read_byte_raw")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void i2c_read_raw_blocking(i2c_inst_t* i2c, uint8_t* dst,
                                      size_t len);
__attribute__((weak)) void i2c_read_raw_blocking(i2c_inst_t* i2c, uint8_t* dst,
                                                 size_t len)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_i2c_read_raw_blocking(i2c_inst_t* i2c, uint8_t* dst,
                                            size_t len)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_i2c_read_raw_blocking=__weak_i2c_read_raw_blocking")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:i2c_read_raw_blocking=_weak_i2c_read_raw_blocking")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int i2c_read_timeout_per_char_us(i2c_inst_t* i2c, uint8_t addr,
                                            uint8_t* dst, size_t len,
                                            bool nostop,
                                            uint timeout_per_char_us);
__attribute__((weak)) int i2c_read_timeout_per_char_us(i2c_inst_t* i2c,
                                                       uint8_t addr,
                                                       uint8_t* dst, size_t len,
                                                       bool nostop,
                                                       uint timeout_per_char_us)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_i2c_read_timeout_per_char_us(i2c_inst_t* i2c, uint8_t addr,
                                                  uint8_t* dst, size_t len,
                                                  bool nostop,
                                                  uint timeout_per_char_us)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_i2c_read_timeout_per_char_us=__weak_i2c_read_timeout_per_char_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:i2c_read_timeout_per_char_us=_weak_i2c_read_timeout_per_char_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int i2c_read_timeout_us(i2c_inst_t* i2c, uint8_t addr, uint8_t* dst,
                                   size_t len, bool nostop, uint timeout_us);
__attribute__((weak)) int i2c_read_timeout_us(i2c_inst_t* i2c, uint8_t addr,
                                              uint8_t* dst, size_t len,
                                              bool nostop, uint timeout_us)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_i2c_read_timeout_us(i2c_inst_t* i2c, uint8_t addr,
                                         uint8_t* dst, size_t len, bool nostop,
                                         uint timeout_us)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_i2c_read_timeout_us=__weak_i2c_read_timeout_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:i2c_read_timeout_us=_weak_i2c_read_timeout_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint i2c_set_baudrate(i2c_inst_t* i2c, uint baudrate);
__attribute__((weak)) uint i2c_set_baudrate(i2c_inst_t* i2c, uint baudrate)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_i2c_set_baudrate(i2c_inst_t* i2c, uint baudrate)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_i2c_set_baudrate=__weak_i2c_set_baudrate")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:i2c_set_baudrate=_weak_i2c_set_baudrate")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void i2c_set_slave_mode(i2c_inst_t* i2c, bool slave, uint8_t addr);
__attribute__((weak)) void i2c_set_slave_mode(i2c_inst_t* i2c, bool slave,
                                              uint8_t addr)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_i2c_set_slave_mode(i2c_inst_t* i2c, bool slave,
                                         uint8_t addr)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_i2c_set_slave_mode=__weak_i2c_set_slave_mode")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:i2c_set_slave_mode=_weak_i2c_set_slave_mode")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int i2c_write_blocking(i2c_inst_t* i2c, uint8_t addr,
                                  const uint8_t* src, size_t len, bool nostop);
__attribute__((weak)) int i2c_write_blocking(i2c_inst_t* i2c, uint8_t addr,
                                             const uint8_t* src, size_t len,
                                             bool nostop)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_i2c_write_blocking(i2c_inst_t* i2c, uint8_t addr,
                                        const uint8_t* src, size_t len,
                                        bool nostop)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_i2c_write_blocking=__weak_i2c_write_blocking")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:i2c_write_blocking=_weak_i2c_write_blocking")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int i2c_write_blocking_until(i2c_inst_t* i2c, uint8_t addr,
                                        const uint8_t* src, size_t len,
                                        bool nostop, absolute_time_t until);
__attribute__((weak)) int i2c_write_blocking_until(i2c_inst_t* i2c,
                                                   uint8_t addr,
                                                   const uint8_t* src,
                                                   size_t len, bool nostop,
                                                   absolute_time_t until)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_i2c_write_blocking_until(i2c_inst_t* i2c, uint8_t addr,
                                              const uint8_t* src, size_t len,
                                              bool nostop,
                                              absolute_time_t until)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_i2c_write_blocking_until=__weak_i2c_write_blocking_until")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:i2c_write_blocking_until=_weak_i2c_write_blocking_until")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void i2c_write_byte_raw(i2c_inst_t* i2c, uint8_t value);
__attribute__((weak)) void i2c_write_byte_raw(i2c_inst_t* i2c, uint8_t value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_i2c_write_byte_raw(i2c_inst_t* i2c, uint8_t value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_i2c_write_byte_raw=__weak_i2c_write_byte_raw")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:i2c_write_byte_raw=_weak_i2c_write_byte_raw")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void i2c_write_raw_blocking(i2c_inst_t* i2c, const uint8_t* src,
                                       size_t len);
__attribute__((weak)) void i2c_write_raw_blocking(i2c_inst_t* i2c,
                                                  const uint8_t* src,
                                                  size_t len)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_i2c_write_raw_blocking(i2c_inst_t* i2c,
                                             const uint8_t* src, size_t len)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_i2c_write_raw_blocking=__weak_i2c_write_raw_blocking")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:i2c_write_raw_blocking=_weak_i2c_write_raw_blocking")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int i2c_write_timeout_per_char_us(i2c_inst_t* i2c, uint8_t addr,
                                             const uint8_t* src, size_t len,
                                             bool nostop,
                                             uint timeout_per_char_us);
__attribute__((weak)) int i2c_write_timeout_per_char_us(
    i2c_inst_t* i2c, uint8_t addr, const uint8_t* src, size_t len, bool nostop,
    uint timeout_per_char_us)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_i2c_write_timeout_per_char_us(i2c_inst_t* i2c,
                                                   uint8_t addr,
                                                   const uint8_t* src,
                                                   size_t len, bool nostop,
                                                   uint timeout_per_char_us)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_i2c_write_timeout_per_char_us=__weak_i2c_write_timeout_per_char_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:i2c_write_timeout_per_char_us=_weak_i2c_write_timeout_per_char_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int i2c_write_timeout_us(i2c_inst_t* i2c, uint8_t addr,
                                    const uint8_t* src, size_t len, bool nostop,
                                    uint timeout_us);
__attribute__((weak)) int i2c_write_timeout_us(i2c_inst_t* i2c, uint8_t addr,
                                               const uint8_t* src, size_t len,
                                               bool nostop, uint timeout_us)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_i2c_write_timeout_us(i2c_inst_t* i2c, uint8_t addr,
                                          const uint8_t* src, size_t len,
                                          bool nostop, uint timeout_us)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_i2c library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_i2c_write_timeout_us=__weak_i2c_write_timeout_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:i2c_write_timeout_us=_weak_i2c_write_timeout_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_add_accumulater(interp_hw_t* interp, uint lane,
                                       uint32_t val);
__attribute__((weak)) void interp_add_accumulater(interp_hw_t* interp,
                                                  uint lane, uint32_t val)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_add_accumulater(interp_hw_t* interp, uint lane,
                                             uint32_t val)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_add_accumulater=__weak_interp_add_accumulater")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_add_accumulater=_weak_interp_add_accumulater")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_claim_lane(interp_hw_t* interp, uint lane);
__attribute__((weak)) void interp_claim_lane(interp_hw_t* interp, uint lane)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_claim_lane(interp_hw_t* interp, uint lane)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_interp_claim_lane=__weak_interp_claim_lane")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:interp_claim_lane=_weak_interp_claim_lane")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_claim_lane_mask(interp_hw_t* interp, uint lane_mask);
__attribute__((weak)) void interp_claim_lane_mask(interp_hw_t* interp,
                                                  uint lane_mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_claim_lane_mask(interp_hw_t* interp,
                                             uint lane_mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_claim_lane_mask=__weak_interp_claim_lane_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_claim_lane_mask=_weak_interp_claim_lane_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_config_set_add_raw(interp_config* c, bool add_raw);
__attribute__((weak)) void interp_config_set_add_raw(interp_config* c,
                                                     bool add_raw)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_config_set_add_raw(interp_config* c, bool add_raw)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_config_set_add_raw=__weak_interp_config_set_add_raw")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_config_set_add_raw=_weak_interp_config_set_add_raw")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_config_set_blend(interp_config* c, bool blend);
__attribute__((weak)) void interp_config_set_blend(interp_config* c, bool blend)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_config_set_blend(interp_config* c, bool blend)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_config_set_blend=__weak_interp_config_set_blend")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_config_set_blend=_weak_interp_config_set_blend")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_config_set_clamp(interp_config* c, bool clamp);
__attribute__((weak)) void interp_config_set_clamp(interp_config* c, bool clamp)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_config_set_clamp(interp_config* c, bool clamp)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_config_set_clamp=__weak_interp_config_set_clamp")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_config_set_clamp=_weak_interp_config_set_clamp")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_config_set_cross_input(interp_config* c,
                                              bool cross_input);
__attribute__((weak)) void interp_config_set_cross_input(interp_config* c,
                                                         bool cross_input)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_config_set_cross_input(interp_config* c,
                                                    bool cross_input)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_config_set_cross_input=__weak_interp_config_set_cross_input")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_config_set_cross_input=_weak_interp_config_set_cross_input")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_config_set_cross_result(interp_config* c,
                                               bool cross_result);
__attribute__((weak)) void interp_config_set_cross_result(interp_config* c,
                                                          bool cross_result)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_config_set_cross_result(interp_config* c,
                                                     bool cross_result)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_config_set_cross_result=__weak_interp_config_set_cross_result")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_config_set_cross_result=_weak_interp_config_set_cross_result")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_config_set_force_bits(interp_config* c, uint bits);
__attribute__((weak)) void interp_config_set_force_bits(interp_config* c,
                                                        uint bits)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_config_set_force_bits(interp_config* c, uint bits)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_config_set_force_bits=__weak_interp_config_set_force_bits")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_config_set_force_bits=_weak_interp_config_set_force_bits")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_config_set_mask(interp_config* c, uint mask_lsb,
                                       uint mask_msb);
__attribute__((weak)) void interp_config_set_mask(interp_config* c,
                                                  uint mask_lsb, uint mask_msb)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_config_set_mask(interp_config* c, uint mask_lsb,
                                             uint mask_msb)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_config_set_mask=__weak_interp_config_set_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_config_set_mask=_weak_interp_config_set_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_config_set_shift(interp_config* c, uint shift);
__attribute__((weak)) void interp_config_set_shift(interp_config* c, uint shift)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_config_set_shift(interp_config* c, uint shift)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_config_set_shift=__weak_interp_config_set_shift")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_config_set_shift=_weak_interp_config_set_shift")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_config_set_signed(interp_config* c, bool _signed);
__attribute__((weak)) void interp_config_set_signed(interp_config* c,
                                                    bool _signed)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_config_set_signed(interp_config* c, bool _signed)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_config_set_signed=__weak_interp_config_set_signed")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_config_set_signed=_weak_interp_config_set_signed")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" interp_config interp_default_config(void);
__attribute__((weak)) interp_config interp_default_config(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" interp_config _weak_interp_default_config(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_default_config=__weak_interp_default_config")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_default_config=_weak_interp_default_config")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t interp_get_accumulator(interp_hw_t* interp, uint lane);
__attribute__((weak)) uint32_t interp_get_accumulator(interp_hw_t* interp,
                                                      uint lane)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_interp_get_accumulator(interp_hw_t* interp, uint lane)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_get_accumulator=__weak_interp_get_accumulator")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_get_accumulator=_weak_interp_get_accumulator")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t interp_get_base(interp_hw_t* interp, uint lane);
__attribute__((weak)) uint32_t interp_get_base(interp_hw_t* interp, uint lane)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_interp_get_base(interp_hw_t* interp, uint lane)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_interp_get_base=__weak_interp_get_base")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:interp_get_base=_weak_interp_get_base")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t interp_get_raw(interp_hw_t* interp, uint lane);
__attribute__((weak)) uint32_t interp_get_raw(interp_hw_t* interp, uint lane)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_interp_get_raw(interp_hw_t* interp, uint lane)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_interp_get_raw=__weak_interp_get_raw")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:interp_get_raw=_weak_interp_get_raw")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint interp_index(interp_hw_t* interp);
__attribute__((weak)) uint interp_index(interp_hw_t* interp)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_interp_index(interp_hw_t* interp)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_interp_index=__weak_interp_index")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:interp_index=_weak_interp_index")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool interp_lane_is_claimed(interp_hw_t* interp, uint lane);
__attribute__((weak)) bool interp_lane_is_claimed(interp_hw_t* interp,
                                                  uint lane)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_interp_lane_is_claimed(interp_hw_t* interp, uint lane)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_lane_is_claimed=__weak_interp_lane_is_claimed")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_lane_is_claimed=_weak_interp_lane_is_claimed")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t interp_peek_full_result(interp_hw_t* interp);
__attribute__((weak)) uint32_t interp_peek_full_result(interp_hw_t* interp)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_interp_peek_full_result(interp_hw_t* interp)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_peek_full_result=__weak_interp_peek_full_result")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_peek_full_result=_weak_interp_peek_full_result")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t interp_peek_lane_result(interp_hw_t* interp, uint lane);
__attribute__((weak)) uint32_t interp_peek_lane_result(interp_hw_t* interp,
                                                       uint lane)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_interp_peek_lane_result(interp_hw_t* interp,
                                                  uint lane)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_peek_lane_result=__weak_interp_peek_lane_result")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_peek_lane_result=_weak_interp_peek_lane_result")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t interp_pop_full_result(interp_hw_t* interp);
__attribute__((weak)) uint32_t interp_pop_full_result(interp_hw_t* interp)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_interp_pop_full_result(interp_hw_t* interp)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_pop_full_result=__weak_interp_pop_full_result")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_pop_full_result=_weak_interp_pop_full_result")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t interp_pop_lane_result(interp_hw_t* interp, uint lane);
__attribute__((weak)) uint32_t interp_pop_lane_result(interp_hw_t* interp,
                                                      uint lane)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_interp_pop_lane_result(interp_hw_t* interp, uint lane)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_pop_lane_result=__weak_interp_pop_lane_result")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_pop_lane_result=_weak_interp_pop_lane_result")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_restore(interp_hw_t* interp, interp_hw_save_t* saver);
__attribute__((weak)) void interp_restore(interp_hw_t* interp,
                                          interp_hw_save_t* saver)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_restore(interp_hw_t* interp,
                                     interp_hw_save_t* saver)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_interp_restore=__weak_interp_restore")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:interp_restore=_weak_interp_restore")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_save(interp_hw_t* interp, interp_hw_save_t* saver);
__attribute__((weak)) void interp_save(interp_hw_t* interp,
                                       interp_hw_save_t* saver)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_save(interp_hw_t* interp, interp_hw_save_t* saver)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_interp_save=__weak_interp_save")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:interp_save=_weak_interp_save")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_set_accumulator(interp_hw_t* interp, uint lane,
                                       uint32_t val);
__attribute__((weak)) void interp_set_accumulator(interp_hw_t* interp,
                                                  uint lane, uint32_t val)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_set_accumulator(interp_hw_t* interp, uint lane,
                                             uint32_t val)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_set_accumulator=__weak_interp_set_accumulator")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_set_accumulator=_weak_interp_set_accumulator")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_set_base(interp_hw_t* interp, uint lane, uint32_t val);
__attribute__((weak)) void interp_set_base(interp_hw_t* interp, uint lane,
                                           uint32_t val)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_set_base(interp_hw_t* interp, uint lane,
                                      uint32_t val)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_interp_set_base=__weak_interp_set_base")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:interp_set_base=_weak_interp_set_base")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_set_base_both(interp_hw_t* interp, uint32_t val);
__attribute__((weak)) void interp_set_base_both(interp_hw_t* interp,
                                                uint32_t val)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_set_base_both(interp_hw_t* interp, uint32_t val)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_set_base_both=__weak_interp_set_base_both")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:interp_set_base_both=_weak_interp_set_base_both")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_set_config(interp_hw_t* interp, uint lane,
                                  interp_config* config);
__attribute__((weak)) void interp_set_config(interp_hw_t* interp, uint lane,
                                             interp_config* config)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_set_config(interp_hw_t* interp, uint lane,
                                        interp_config* config)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_interp_set_config=__weak_interp_set_config")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:interp_set_config=_weak_interp_set_config")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_set_force_bits(interp_hw_t* interp, uint lane,
                                      uint bits);
__attribute__((weak)) void interp_set_force_bits(interp_hw_t* interp, uint lane,
                                                 uint bits)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_set_force_bits(interp_hw_t* interp, uint lane,
                                            uint bits)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_set_force_bits=__weak_interp_set_force_bits")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_set_force_bits=_weak_interp_set_force_bits")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_unclaim_lane(interp_hw_t* interp, uint lane);
__attribute__((weak)) void interp_unclaim_lane(interp_hw_t* interp, uint lane)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_unclaim_lane(interp_hw_t* interp, uint lane)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_interp_unclaim_lane=__weak_interp_unclaim_lane")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:interp_unclaim_lane=_weak_interp_unclaim_lane")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void interp_unclaim_lane_mask(interp_hw_t* interp, uint lane_mask);
__attribute__((weak)) void interp_unclaim_lane_mask(interp_hw_t* interp,
                                                    uint lane_mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_interp_unclaim_lane_mask(interp_hw_t* interp,
                                               uint lane_mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_interp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_interp_unclaim_lane_mask=__weak_interp_unclaim_lane_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:interp_unclaim_lane_mask=_weak_interp_unclaim_lane_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void __unhandled_user_irq(void);
__attribute__((weak)) void __unhandled_user_irq(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak___unhandled_user_irq(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:___unhandled_user_irq=__weak___unhandled_user_irq")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:__unhandled_user_irq=_weak___unhandled_user_irq")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void irq_add_shared_handler(uint num, irq_handler_t handler,
                                       uint8_t order_priority);
__attribute__((weak)) void irq_add_shared_handler(uint num,
                                                  irq_handler_t handler,
                                                  uint8_t order_priority)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_irq_add_shared_handler(uint num, irq_handler_t handler,
                                             uint8_t order_priority)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_irq_add_shared_handler=__weak_irq_add_shared_handler")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:irq_add_shared_handler=_weak_irq_add_shared_handler")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void irq_assign_to_ns(uint irq_num, bool ns);
__attribute__((weak)) void irq_assign_to_ns(uint irq_num, bool ns)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_irq_assign_to_ns(uint irq_num, bool ns)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_irq_assign_to_ns=__weak_irq_assign_to_ns")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:irq_assign_to_ns=_weak_irq_assign_to_ns")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void irq_clear(uint int_num);
__attribute__((weak)) void irq_clear(uint int_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_irq_clear(uint int_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_irq_clear=__weak_irq_clear")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:irq_clear=_weak_irq_clear")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" irq_handler_t irq_get_exclusive_handler(uint num);
__attribute__((weak)) irq_handler_t irq_get_exclusive_handler(uint num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" irq_handler_t _weak_irq_get_exclusive_handler(uint num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_irq_get_exclusive_handler=__weak_irq_get_exclusive_handler")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:irq_get_exclusive_handler=_weak_irq_get_exclusive_handler")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint irq_get_priority(uint num);
__attribute__((weak)) uint irq_get_priority(uint num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_irq_get_priority(uint num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_irq_get_priority=__weak_irq_get_priority")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:irq_get_priority=_weak_irq_get_priority")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" irq_handler_t irq_get_vtable_handler(uint num);
__attribute__((weak)) irq_handler_t irq_get_vtable_handler(uint num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" irq_handler_t _weak_irq_get_vtable_handler(uint num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_irq_get_vtable_handler=__weak_irq_get_vtable_handler")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:irq_get_vtable_handler=_weak_irq_get_vtable_handler")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool irq_has_shared_handler(uint num);
__attribute__((weak)) bool irq_has_shared_handler(uint num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_irq_has_shared_handler(uint num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_irq_has_shared_handler=__weak_irq_has_shared_handler")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:irq_has_shared_handler=_weak_irq_has_shared_handler")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void irq_init_priorities(void);
__attribute__((weak)) void irq_init_priorities(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_irq_init_priorities(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_irq_init_priorities=__weak_irq_init_priorities")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:irq_init_priorities=_weak_irq_init_priorities")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool irq_is_enabled(uint num);
__attribute__((weak)) bool irq_is_enabled(uint num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_irq_is_enabled(uint num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_irq_is_enabled=__weak_irq_is_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:irq_is_enabled=_weak_irq_is_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void irq_remove_handler(uint num, irq_handler_t handler);
__attribute__((weak)) void irq_remove_handler(uint num, irq_handler_t handler)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_irq_remove_handler(uint num, irq_handler_t handler)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_irq_remove_handler=__weak_irq_remove_handler")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:irq_remove_handler=_weak_irq_remove_handler")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void irq_set_enabled(uint num, bool enabled);
__attribute__((weak)) void irq_set_enabled(uint num, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_irq_set_enabled(uint num, bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_irq_set_enabled=__weak_irq_set_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:irq_set_enabled=_weak_irq_set_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void irq_set_exclusive_handler(uint num, irq_handler_t handler);
__attribute__((weak)) void irq_set_exclusive_handler(uint num,
                                                     irq_handler_t handler)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_irq_set_exclusive_handler(uint num, irq_handler_t handler)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_irq_set_exclusive_handler=__weak_irq_set_exclusive_handler")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:irq_set_exclusive_handler=_weak_irq_set_exclusive_handler")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void irq_set_mask_enabled(uint32_t mask, bool enabled);
__attribute__((weak)) void irq_set_mask_enabled(uint32_t mask, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_irq_set_mask_enabled(uint32_t mask, bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_irq_set_mask_enabled=__weak_irq_set_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:irq_set_mask_enabled=_weak_irq_set_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void irq_set_mask_n_enabled(uint n, uint32_t mask, bool enabled);
__attribute__((weak)) void irq_set_mask_n_enabled(uint n, uint32_t mask,
                                                  bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_irq_set_mask_n_enabled(uint n, uint32_t mask,
                                             bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_irq_set_mask_n_enabled=__weak_irq_set_mask_n_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:irq_set_mask_n_enabled=_weak_irq_set_mask_n_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void irq_set_pending(uint num);
__attribute__((weak)) void irq_set_pending(uint num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_irq_set_pending(uint num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_irq_set_pending=__weak_irq_set_pending")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:irq_set_pending=_weak_irq_set_pending")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void irq_set_priority(uint num, uint8_t hardware_priority);
__attribute__((weak)) void irq_set_priority(uint num, uint8_t hardware_priority)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_irq_set_priority(uint num, uint8_t hardware_priority)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_irq_set_priority=__weak_irq_set_priority")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:irq_set_priority=_weak_irq_set_priority")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" irq_handler_t irq_set_riscv_vector_handler(
    enum riscv_vector_num index, irq_handler_t handler);
__attribute__((weak)) irq_handler_t
irq_set_riscv_vector_handler(enum riscv_vector_num index, irq_handler_t handler)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" irq_handler_t _weak_irq_set_riscv_vector_handler(
    enum riscv_vector_num index, irq_handler_t handler)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_irq_set_riscv_vector_handler=__weak_irq_set_riscv_vector_handler")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:irq_set_riscv_vector_handler=_weak_irq_set_riscv_vector_handler")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void runtime_init_per_core_irq_priorities(void);
__attribute__((weak)) void runtime_init_per_core_irq_priorities(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_runtime_init_per_core_irq_priorities(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_runtime_init_per_core_irq_priorities=__weak_runtime_init_per_core_irq_priorities")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:runtime_init_per_core_irq_priorities=_weak_runtime_init_per_core_irq_priorities")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void user_irq_claim(uint irq_num);
__attribute__((weak)) void user_irq_claim(uint irq_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_user_irq_claim(uint irq_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_user_irq_claim=__weak_user_irq_claim")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:user_irq_claim=_weak_user_irq_claim")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int user_irq_claim_unused(bool required);
__attribute__((weak)) int user_irq_claim_unused(bool required)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_user_irq_claim_unused(bool required)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_user_irq_claim_unused=__weak_user_irq_claim_unused")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:user_irq_claim_unused=_weak_user_irq_claim_unused")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool user_irq_is_claimed(uint irq_num);
__attribute__((weak)) bool user_irq_is_claimed(uint irq_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_user_irq_is_claimed(uint irq_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_user_irq_is_claimed=__weak_user_irq_is_claimed")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:user_irq_is_claimed=_weak_user_irq_is_claimed")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void user_irq_unclaim(uint irq_num);
__attribute__((weak)) void user_irq_unclaim(uint irq_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_user_irq_unclaim(uint irq_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_irq library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_user_irq_unclaim=__weak_user_irq_unclaim")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:user_irq_unclaim=_weak_user_irq_unclaim")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pll_deinit(PLL pll);
__attribute__((weak)) void pll_deinit(PLL pll)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pll_deinit(PLL pll)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pll library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pll_deinit=__weak_pll_deinit")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pll_deinit=_weak_pll_deinit")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pll_init(PLL pll, uint ref_div, uint vco_freq, uint post_div1,
                         uint post_div2);
__attribute__((weak)) void pll_init(PLL pll, uint ref_div, uint vco_freq,
                                    uint post_div1, uint post_div2)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pll_init(PLL pll, uint ref_div, uint vco_freq,
                               uint post_div1, uint post_div2)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pll library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pll_init=__weak_pll_init")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pll_init=_weak_pll_init")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int pio_add_program(PIO pio, const pio_program_t* program);
__attribute__((weak)) int pio_add_program(PIO pio, const pio_program_t* program)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_pio_add_program(PIO pio, const pio_program_t* program)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_add_program=__weak_pio_add_program")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_add_program=_weak_pio_add_program")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int pio_add_program_at_offset(PIO pio, const pio_program_t* program,
                                         uint offset);
__attribute__((weak)) int pio_add_program_at_offset(
    PIO pio, const pio_program_t* program, uint offset)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_pio_add_program_at_offset(PIO pio,
                                               const pio_program_t* program,
                                               uint offset)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_add_program_at_offset=__weak_pio_add_program_at_offset")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_add_program_at_offset=_weak_pio_add_program_at_offset")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_calculate_clkdiv_from_float(float div, uint16_t* div_int,
                                                uint8_t* div_frac);
__attribute__((weak)) void pio_calculate_clkdiv_from_float(float div,
                                                           uint16_t* div_int,
                                                           uint8_t* div_frac)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_calculate_clkdiv_from_float(float div,
                                                      uint16_t* div_int,
                                                      uint8_t* div_frac)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_calculate_clkdiv_from_float=__weak_pio_calculate_clkdiv_from_float")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_calculate_clkdiv_from_float=_weak_pio_calculate_clkdiv_from_float")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool pio_can_add_program(PIO pio, const pio_program_t* program);
__attribute__((weak)) bool pio_can_add_program(PIO pio,
                                               const pio_program_t* program)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_pio_can_add_program(PIO pio, const pio_program_t* program)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_can_add_program=__weak_pio_can_add_program")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pio_can_add_program=_weak_pio_can_add_program")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool pio_can_add_program_at_offset(PIO pio,
                                              const pio_program_t* program,
                                              uint offset);
__attribute__((weak)) bool pio_can_add_program_at_offset(
    PIO pio, const pio_program_t* program, uint offset)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_pio_can_add_program_at_offset(
    PIO pio, const pio_program_t* program, uint offset)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_can_add_program_at_offset=__weak_pio_can_add_program_at_offset")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_can_add_program_at_offset=_weak_pio_can_add_program_at_offset")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool pio_claim_free_sm_and_add_program(const pio_program_t* program,
                                                  PIO* pio, uint* sm,
                                                  uint* offset);
__attribute__((weak)) bool pio_claim_free_sm_and_add_program(
    const pio_program_t* program, PIO* pio, uint* sm, uint* offset)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_pio_claim_free_sm_and_add_program(
    const pio_program_t* program, PIO* pio, uint* sm, uint* offset)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_claim_free_sm_and_add_program=__weak_pio_claim_free_sm_and_add_program")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_claim_free_sm_and_add_program=_weak_pio_claim_free_sm_and_add_program")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool pio_claim_free_sm_and_add_program_for_gpio_range(
    const pio_program_t* program, PIO* pio, uint* sm, uint* offset,
    uint gpio_base, uint gpio_count, bool set_gpio_base);
__attribute__((weak)) bool pio_claim_free_sm_and_add_program_for_gpio_range(
    const pio_program_t* program, PIO* pio, uint* sm, uint* offset,
    uint gpio_base, uint gpio_count, bool set_gpio_base)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_pio_claim_free_sm_and_add_program_for_gpio_range(
    const pio_program_t* program, PIO* pio, uint* sm, uint* offset,
    uint gpio_base, uint gpio_count, bool set_gpio_base)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_claim_free_sm_and_add_program_for_gpio_range=__weak_pio_claim_free_sm_and_add_program_for_gpio_range")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_claim_free_sm_and_add_program_for_gpio_range=_weak_pio_claim_free_sm_and_add_program_for_gpio_range")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_claim_sm_mask(PIO pio, uint sm_mask);
__attribute__((weak)) void pio_claim_sm_mask(PIO pio, uint sm_mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_claim_sm_mask(PIO pio, uint sm_mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_claim_sm_mask=__weak_pio_claim_sm_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_claim_sm_mask=_weak_pio_claim_sm_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int pio_claim_unused_sm(PIO pio, bool required);
__attribute__((weak)) int pio_claim_unused_sm(PIO pio, bool required)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_pio_claim_unused_sm(PIO pio, bool required)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_claim_unused_sm=__weak_pio_claim_unused_sm")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pio_claim_unused_sm=_weak_pio_claim_unused_sm")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_clear_instruction_memory(PIO pio);
__attribute__((weak)) void pio_clear_instruction_memory(PIO pio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_clear_instruction_memory(PIO pio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_clear_instruction_memory=__weak_pio_clear_instruction_memory")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_clear_instruction_memory=_weak_pio_clear_instruction_memory")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_clkdiv_restart_sm_mask(PIO pio, uint32_t mask);
__attribute__((weak)) void pio_clkdiv_restart_sm_mask(PIO pio, uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_clkdiv_restart_sm_mask(PIO pio, uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_clkdiv_restart_sm_mask=__weak_pio_clkdiv_restart_sm_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_clkdiv_restart_sm_mask=_weak_pio_clkdiv_restart_sm_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_clkdiv_restart_sm_multi_mask(PIO pio, uint32_t mask_prev,
                                                 uint32_t mask,
                                                 uint32_t mask_next);
__attribute__((weak)) void pio_clkdiv_restart_sm_multi_mask(PIO pio,
                                                            uint32_t mask_prev,
                                                            uint32_t mask,
                                                            uint32_t mask_next)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_clkdiv_restart_sm_multi_mask(PIO pio,
                                                       uint32_t mask_prev,
                                                       uint32_t mask,
                                                       uint32_t mask_next)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_clkdiv_restart_sm_multi_mask=__weak_pio_clkdiv_restart_sm_multi_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_clkdiv_restart_sm_multi_mask=_weak_pio_clkdiv_restart_sm_multi_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_enable_sm_mask_in_sync(PIO pio, uint32_t mask);
__attribute__((weak)) void pio_enable_sm_mask_in_sync(PIO pio, uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_enable_sm_mask_in_sync(PIO pio, uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_enable_sm_mask_in_sync=__weak_pio_enable_sm_mask_in_sync")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_enable_sm_mask_in_sync=_weak_pio_enable_sm_mask_in_sync")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_enable_sm_multi_mask_in_sync(PIO pio, uint32_t mask_prev,
                                                 uint32_t mask,
                                                 uint32_t mask_next);
__attribute__((weak)) void pio_enable_sm_multi_mask_in_sync(PIO pio,
                                                            uint32_t mask_prev,
                                                            uint32_t mask,
                                                            uint32_t mask_next)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_enable_sm_multi_mask_in_sync(PIO pio,
                                                       uint32_t mask_prev,
                                                       uint32_t mask,
                                                       uint32_t mask_next)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_enable_sm_multi_mask_in_sync=__weak_pio_enable_sm_multi_mask_in_sync")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_enable_sm_multi_mask_in_sync=_weak_pio_enable_sm_multi_mask_in_sync")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" pio_sm_config pio_get_default_sm_config(void);
__attribute__((weak)) pio_sm_config pio_get_default_sm_config(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" pio_sm_config _weak_pio_get_default_sm_config(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_get_default_sm_config=__weak_pio_get_default_sm_config")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_get_default_sm_config=_weak_pio_get_default_sm_config")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint pio_get_dreq(PIO pio, uint sm, bool is_tx);
__attribute__((weak)) uint pio_get_dreq(PIO pio, uint sm, bool is_tx)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_pio_get_dreq(PIO pio, uint sm, bool is_tx)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pio_get_dreq=__weak_pio_get_dreq")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_get_dreq=_weak_pio_get_dreq")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint pio_get_funcsel(PIO pio);
__attribute__((weak)) uint pio_get_funcsel(PIO pio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_pio_get_funcsel(PIO pio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_get_funcsel=__weak_pio_get_funcsel")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_get_funcsel=_weak_pio_get_funcsel")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint pio_get_gpio_base(PIO pio);
__attribute__((weak)) uint pio_get_gpio_base(PIO pio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_pio_get_gpio_base(PIO pio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_get_gpio_base=__weak_pio_get_gpio_base")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_get_gpio_base=_weak_pio_get_gpio_base")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint pio_get_index(PIO pio);
__attribute__((weak)) uint pio_get_index(PIO pio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_pio_get_index(PIO pio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pio_get_index=__weak_pio_get_index")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_get_index=_weak_pio_get_index")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" PIO pio_get_instance(uint instance);
__attribute__((weak)) PIO pio_get_instance(uint instance)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" PIO _weak_pio_get_instance(uint instance)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_get_instance=__weak_pio_get_instance")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_get_instance=_weak_pio_get_instance")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int pio_get_irq_num(PIO pio, uint irqn);
__attribute__((weak)) int pio_get_irq_num(PIO pio, uint irqn)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_pio_get_irq_num(PIO pio, uint irqn)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_get_irq_num=__weak_pio_get_irq_num")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_get_irq_num=_weak_pio_get_irq_num")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" pio_interrupt_source_t pio_get_rx_fifo_not_empty_interrupt_source(
    uint sm);
__attribute__((weak)) pio_interrupt_source_t
pio_get_rx_fifo_not_empty_interrupt_source(uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" pio_interrupt_source_t
_weak_pio_get_rx_fifo_not_empty_interrupt_source(uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_get_rx_fifo_not_empty_interrupt_source=__weak_pio_get_rx_fifo_not_empty_interrupt_source")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_get_rx_fifo_not_empty_interrupt_source=_weak_pio_get_rx_fifo_not_empty_interrupt_source")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" pio_interrupt_source_t pio_get_tx_fifo_not_full_interrupt_source(
    uint sm);
__attribute__((weak)) pio_interrupt_source_t
pio_get_tx_fifo_not_full_interrupt_source(uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" pio_interrupt_source_t
_weak_pio_get_tx_fifo_not_full_interrupt_source(uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_get_tx_fifo_not_full_interrupt_source=__weak_pio_get_tx_fifo_not_full_interrupt_source")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_get_tx_fifo_not_full_interrupt_source=_weak_pio_get_tx_fifo_not_full_interrupt_source")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_gpio_init(PIO pio, uint pin);
__attribute__((weak)) void pio_gpio_init(PIO pio, uint pin)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_gpio_init(PIO pio, uint pin)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pio_gpio_init=__weak_pio_gpio_init")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_gpio_init=_weak_pio_gpio_init")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_interrupt_clear(PIO pio, uint pio_interrupt_num);
__attribute__((weak)) void pio_interrupt_clear(PIO pio, uint pio_interrupt_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_interrupt_clear(PIO pio, uint pio_interrupt_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_interrupt_clear=__weak_pio_interrupt_clear")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pio_interrupt_clear=_weak_pio_interrupt_clear")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool pio_interrupt_get(PIO pio, uint pio_interrupt_num);
__attribute__((weak)) bool pio_interrupt_get(PIO pio, uint pio_interrupt_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_pio_interrupt_get(PIO pio, uint pio_interrupt_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_interrupt_get=__weak_pio_interrupt_get")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_interrupt_get=_weak_pio_interrupt_get")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_remove_program(PIO pio, const pio_program_t* program,
                                   uint loaded_offset);
__attribute__((weak)) void pio_remove_program(PIO pio,
                                              const pio_program_t* program,
                                              uint loaded_offset)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_remove_program(PIO pio, const pio_program_t* program,
                                         uint loaded_offset)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_remove_program=__weak_pio_remove_program")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_remove_program=_weak_pio_remove_program")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_remove_program_and_unclaim_sm(const pio_program_t* program,
                                                  PIO pio, uint sm,
                                                  uint offset);
__attribute__((weak)) void pio_remove_program_and_unclaim_sm(
    const pio_program_t* program, PIO pio, uint sm, uint offset)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_remove_program_and_unclaim_sm(
    const pio_program_t* program, PIO pio, uint sm, uint offset)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_remove_program_and_unclaim_sm=__weak_pio_remove_program_and_unclaim_sm")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_remove_program_and_unclaim_sm=_weak_pio_remove_program_and_unclaim_sm")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_restart_sm_mask(PIO pio, uint32_t mask);
__attribute__((weak)) void pio_restart_sm_mask(PIO pio, uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_restart_sm_mask(PIO pio, uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_restart_sm_mask=__weak_pio_restart_sm_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pio_restart_sm_mask=_weak_pio_restart_sm_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int pio_set_gpio_base(PIO pio, uint gpio_base);
__attribute__((weak)) int pio_set_gpio_base(PIO pio, uint gpio_base)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_pio_set_gpio_base(PIO pio, uint gpio_base)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_set_gpio_base=__weak_pio_set_gpio_base")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_set_gpio_base=_weak_pio_set_gpio_base")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_set_irq0_source_enabled(PIO pio,
                                            pio_interrupt_source_t source,
                                            bool enabled);
__attribute__((weak)) void pio_set_irq0_source_enabled(
    PIO pio, pio_interrupt_source_t source, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_set_irq0_source_enabled(PIO pio,
                                                  pio_interrupt_source_t source,
                                                  bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_set_irq0_source_enabled=__weak_pio_set_irq0_source_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_set_irq0_source_enabled=_weak_pio_set_irq0_source_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_set_irq0_source_mask_enabled(PIO pio, uint32_t source_mask,
                                                 bool enabled);
__attribute__((weak)) void pio_set_irq0_source_mask_enabled(
    PIO pio, uint32_t source_mask, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_set_irq0_source_mask_enabled(PIO pio,
                                                       uint32_t source_mask,
                                                       bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_set_irq0_source_mask_enabled=__weak_pio_set_irq0_source_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_set_irq0_source_mask_enabled=_weak_pio_set_irq0_source_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_set_irq1_source_enabled(PIO pio,
                                            pio_interrupt_source_t source,
                                            bool enabled);
__attribute__((weak)) void pio_set_irq1_source_enabled(
    PIO pio, pio_interrupt_source_t source, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_set_irq1_source_enabled(PIO pio,
                                                  pio_interrupt_source_t source,
                                                  bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_set_irq1_source_enabled=__weak_pio_set_irq1_source_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_set_irq1_source_enabled=_weak_pio_set_irq1_source_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_set_irq1_source_mask_enabled(PIO pio, uint32_t source_mask,
                                                 bool enabled);
__attribute__((weak)) void pio_set_irq1_source_mask_enabled(
    PIO pio, uint32_t source_mask, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_set_irq1_source_mask_enabled(PIO pio,
                                                       uint32_t source_mask,
                                                       bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_set_irq1_source_mask_enabled=__weak_pio_set_irq1_source_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_set_irq1_source_mask_enabled=_weak_pio_set_irq1_source_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_set_irqn_source_enabled(PIO pio, uint irq_index,
                                            pio_interrupt_source_t source,
                                            bool enabled);
__attribute__((weak)) void pio_set_irqn_source_enabled(
    PIO pio, uint irq_index, pio_interrupt_source_t source, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_set_irqn_source_enabled(PIO pio, uint irq_index,
                                                  pio_interrupt_source_t source,
                                                  bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_set_irqn_source_enabled=__weak_pio_set_irqn_source_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_set_irqn_source_enabled=_weak_pio_set_irqn_source_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_set_irqn_source_mask_enabled(PIO pio, uint irq_index,
                                                 uint32_t source_mask,
                                                 bool enabled);
__attribute__((weak)) void pio_set_irqn_source_mask_enabled(
    PIO pio, uint irq_index, uint32_t source_mask, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_set_irqn_source_mask_enabled(PIO pio, uint irq_index,
                                                       uint32_t source_mask,
                                                       bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_set_irqn_source_mask_enabled=__weak_pio_set_irqn_source_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_set_irqn_source_mask_enabled=_weak_pio_set_irqn_source_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_set_sm_mask_enabled(PIO pio, uint32_t mask, bool enabled);
__attribute__((weak)) void pio_set_sm_mask_enabled(PIO pio, uint32_t mask,
                                                   bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_set_sm_mask_enabled(PIO pio, uint32_t mask,
                                              bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_set_sm_mask_enabled=__weak_pio_set_sm_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_set_sm_mask_enabled=_weak_pio_set_sm_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_set_sm_multi_mask_enabled(PIO pio, uint32_t mask_prev,
                                              uint32_t mask, uint32_t mask_next,
                                              bool enabled);
__attribute__((weak)) void pio_set_sm_multi_mask_enabled(PIO pio,
                                                         uint32_t mask_prev,
                                                         uint32_t mask,
                                                         uint32_t mask_next,
                                                         bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_set_sm_multi_mask_enabled(PIO pio, uint32_t mask_prev,
                                                    uint32_t mask,
                                                    uint32_t mask_next,
                                                    bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_set_sm_multi_mask_enabled=__weak_pio_set_sm_multi_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_set_sm_multi_mask_enabled=_weak_pio_set_sm_multi_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_claim(PIO pio, uint sm);
__attribute__((weak)) void pio_sm_claim(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_claim(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pio_sm_claim=__weak_pio_sm_claim")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_sm_claim=_weak_pio_sm_claim")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_clear_fifos(PIO pio, uint sm);
__attribute__((weak)) void pio_sm_clear_fifos(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_clear_fifos(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_sm_clear_fifos=__weak_pio_sm_clear_fifos")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_sm_clear_fifos=_weak_pio_sm_clear_fifos")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_clkdiv_restart(PIO pio, uint sm);
__attribute__((weak)) void pio_sm_clkdiv_restart(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_clkdiv_restart(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_clkdiv_restart=__weak_pio_sm_clkdiv_restart")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_clkdiv_restart=_weak_pio_sm_clkdiv_restart")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_drain_tx_fifo(PIO pio, uint sm);
__attribute__((weak)) void pio_sm_drain_tx_fifo(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_drain_tx_fifo(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_drain_tx_fifo=__weak_pio_sm_drain_tx_fifo")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pio_sm_drain_tx_fifo=_weak_pio_sm_drain_tx_fifo")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_exec(PIO pio, uint sm, uint instr);
__attribute__((weak)) void pio_sm_exec(PIO pio, uint sm, uint instr)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_exec(PIO pio, uint sm, uint instr)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pio_sm_exec=__weak_pio_sm_exec")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_sm_exec=_weak_pio_sm_exec")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_exec_wait_blocking(PIO pio, uint sm, uint instr);
__attribute__((weak)) void pio_sm_exec_wait_blocking(PIO pio, uint sm,
                                                     uint instr)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_exec_wait_blocking(PIO pio, uint sm, uint instr)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_exec_wait_blocking=__weak_pio_sm_exec_wait_blocking")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_exec_wait_blocking=_weak_pio_sm_exec_wait_blocking")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t pio_sm_get(PIO pio, uint sm);
__attribute__((weak)) uint32_t pio_sm_get(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_pio_sm_get(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pio_sm_get=__weak_pio_sm_get")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_sm_get=_weak_pio_sm_get")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t pio_sm_get_blocking(PIO pio, uint sm);
__attribute__((weak)) uint32_t pio_sm_get_blocking(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_pio_sm_get_blocking(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_sm_get_blocking=__weak_pio_sm_get_blocking")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pio_sm_get_blocking=_weak_pio_sm_get_blocking")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint8_t pio_sm_get_pc(PIO pio, uint sm);
__attribute__((weak)) uint8_t pio_sm_get_pc(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint8_t _weak_pio_sm_get_pc(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pio_sm_get_pc=__weak_pio_sm_get_pc")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_sm_get_pc=_weak_pio_sm_get_pc")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint pio_sm_get_rx_fifo_level(PIO pio, uint sm);
__attribute__((weak)) uint pio_sm_get_rx_fifo_level(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_pio_sm_get_rx_fifo_level(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_get_rx_fifo_level=__weak_pio_sm_get_rx_fifo_level")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_get_rx_fifo_level=_weak_pio_sm_get_rx_fifo_level")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint pio_sm_get_tx_fifo_level(PIO pio, uint sm);
__attribute__((weak)) uint pio_sm_get_tx_fifo_level(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_pio_sm_get_tx_fifo_level(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_get_tx_fifo_level=__weak_pio_sm_get_tx_fifo_level")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_get_tx_fifo_level=_weak_pio_sm_get_tx_fifo_level")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int pio_sm_init(PIO pio, uint sm, uint initial_pc,
                           const pio_sm_config* config);
__attribute__((weak)) int pio_sm_init(PIO pio, uint sm, uint initial_pc,
                                      const pio_sm_config* config)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_pio_sm_init(PIO pio, uint sm, uint initial_pc,
                                 const pio_sm_config* config)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pio_sm_init=__weak_pio_sm_init")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_sm_init=_weak_pio_sm_init")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool pio_sm_is_claimed(PIO pio, uint sm);
__attribute__((weak)) bool pio_sm_is_claimed(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_pio_sm_is_claimed(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_sm_is_claimed=__weak_pio_sm_is_claimed")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_sm_is_claimed=_weak_pio_sm_is_claimed")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool pio_sm_is_exec_stalled(PIO pio, uint sm);
__attribute__((weak)) bool pio_sm_is_exec_stalled(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_pio_sm_is_exec_stalled(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_is_exec_stalled=__weak_pio_sm_is_exec_stalled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_is_exec_stalled=_weak_pio_sm_is_exec_stalled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool pio_sm_is_rx_fifo_empty(PIO pio, uint sm);
__attribute__((weak)) bool pio_sm_is_rx_fifo_empty(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_pio_sm_is_rx_fifo_empty(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_is_rx_fifo_empty=__weak_pio_sm_is_rx_fifo_empty")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_is_rx_fifo_empty=_weak_pio_sm_is_rx_fifo_empty")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool pio_sm_is_rx_fifo_full(PIO pio, uint sm);
__attribute__((weak)) bool pio_sm_is_rx_fifo_full(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_pio_sm_is_rx_fifo_full(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_is_rx_fifo_full=__weak_pio_sm_is_rx_fifo_full")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_is_rx_fifo_full=_weak_pio_sm_is_rx_fifo_full")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool pio_sm_is_tx_fifo_empty(PIO pio, uint sm);
__attribute__((weak)) bool pio_sm_is_tx_fifo_empty(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_pio_sm_is_tx_fifo_empty(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_is_tx_fifo_empty=__weak_pio_sm_is_tx_fifo_empty")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_is_tx_fifo_empty=_weak_pio_sm_is_tx_fifo_empty")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool pio_sm_is_tx_fifo_full(PIO pio, uint sm);
__attribute__((weak)) bool pio_sm_is_tx_fifo_full(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_pio_sm_is_tx_fifo_full(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_is_tx_fifo_full=__weak_pio_sm_is_tx_fifo_full")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_is_tx_fifo_full=_weak_pio_sm_is_tx_fifo_full")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_put(PIO pio, uint sm, uint32_t data);
__attribute__((weak)) void pio_sm_put(PIO pio, uint sm, uint32_t data)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_put(PIO pio, uint sm, uint32_t data)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pio_sm_put=__weak_pio_sm_put")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_sm_put=_weak_pio_sm_put")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_put_blocking(PIO pio, uint sm, uint32_t data);
__attribute__((weak)) void pio_sm_put_blocking(PIO pio, uint sm, uint32_t data)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_put_blocking(PIO pio, uint sm, uint32_t data)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_sm_put_blocking=__weak_pio_sm_put_blocking")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pio_sm_put_blocking=_weak_pio_sm_put_blocking")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_restart(PIO pio, uint sm);
__attribute__((weak)) void pio_sm_restart(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_restart(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pio_sm_restart=__weak_pio_sm_restart")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_sm_restart=_weak_pio_sm_restart")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_set_clkdiv(PIO pio, uint sm, float div);
__attribute__((weak)) void pio_sm_set_clkdiv(PIO pio, uint sm, float div)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_set_clkdiv(PIO pio, uint sm, float div)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_sm_set_clkdiv=__weak_pio_sm_set_clkdiv")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_sm_set_clkdiv=_weak_pio_sm_set_clkdiv")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_set_clkdiv_int_frac(PIO pio, uint sm, uint16_t div_int,
                                           uint8_t div_frac);
__attribute__((weak)) void pio_sm_set_clkdiv_int_frac(PIO pio, uint sm,
                                                      uint16_t div_int,
                                                      uint8_t div_frac)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_set_clkdiv_int_frac(PIO pio, uint sm,
                                                 uint16_t div_int,
                                                 uint8_t div_frac)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_set_clkdiv_int_frac=__weak_pio_sm_set_clkdiv_int_frac")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_set_clkdiv_int_frac=_weak_pio_sm_set_clkdiv_int_frac")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int pio_sm_set_config(PIO pio, uint sm, const pio_sm_config* config);
__attribute__((weak)) int pio_sm_set_config(PIO pio, uint sm,
                                            const pio_sm_config* config)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_pio_sm_set_config(PIO pio, uint sm,
                                       const pio_sm_config* config)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_sm_set_config=__weak_pio_sm_set_config")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_sm_set_config=_weak_pio_sm_set_config")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int pio_sm_set_consecutive_pindirs(PIO pio, uint sm, uint pins_base,
                                              uint pin_count, bool is_out);
__attribute__((weak)) int pio_sm_set_consecutive_pindirs(PIO pio, uint sm,
                                                         uint pins_base,
                                                         uint pin_count,
                                                         bool is_out)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_pio_sm_set_consecutive_pindirs(PIO pio, uint sm,
                                                    uint pins_base,
                                                    uint pin_count, bool is_out)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_set_consecutive_pindirs=__weak_pio_sm_set_consecutive_pindirs")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_set_consecutive_pindirs=_weak_pio_sm_set_consecutive_pindirs")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_set_enabled(PIO pio, uint sm, bool enabled);
__attribute__((weak)) void pio_sm_set_enabled(PIO pio, uint sm, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_set_enabled(PIO pio, uint sm, bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_sm_set_enabled=__weak_pio_sm_set_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_sm_set_enabled=_weak_pio_sm_set_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_set_in_pins(PIO pio, uint sm, uint in_base);
__attribute__((weak)) void pio_sm_set_in_pins(PIO pio, uint sm, uint in_base)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_set_in_pins(PIO pio, uint sm, uint in_base)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_sm_set_in_pins=__weak_pio_sm_set_in_pins")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_sm_set_in_pins=_weak_pio_sm_set_in_pins")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_set_jmp_pin(PIO pio, uint sm, uint pin);
__attribute__((weak)) void pio_sm_set_jmp_pin(PIO pio, uint sm, uint pin)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_set_jmp_pin(PIO pio, uint sm, uint pin)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_sm_set_jmp_pin=__weak_pio_sm_set_jmp_pin")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pio_sm_set_jmp_pin=_weak_pio_sm_set_jmp_pin")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_set_out_pins(PIO pio, uint sm, uint out_base,
                                    uint out_count);
__attribute__((weak)) void pio_sm_set_out_pins(PIO pio, uint sm, uint out_base,
                                               uint out_count)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_set_out_pins(PIO pio, uint sm, uint out_base,
                                          uint out_count)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_sm_set_out_pins=__weak_pio_sm_set_out_pins")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pio_sm_set_out_pins=_weak_pio_sm_set_out_pins")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_set_pindirs_with_mask(PIO pio, uint sm,
                                             uint32_t pin_dirs,
                                             uint32_t pin_mask);
__attribute__((weak)) void pio_sm_set_pindirs_with_mask(PIO pio, uint sm,
                                                        uint32_t pin_dirs,
                                                        uint32_t pin_mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_set_pindirs_with_mask(PIO pio, uint sm,
                                                   uint32_t pin_dirs,
                                                   uint32_t pin_mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_set_pindirs_with_mask=__weak_pio_sm_set_pindirs_with_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_set_pindirs_with_mask=_weak_pio_sm_set_pindirs_with_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_set_pins(PIO pio, uint sm, uint32_t pin_values);
__attribute__((weak)) void pio_sm_set_pins(PIO pio, uint sm,
                                           uint32_t pin_values)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_set_pins(PIO pio, uint sm, uint32_t pin_values)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_sm_set_pins=__weak_pio_sm_set_pins")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_sm_set_pins=_weak_pio_sm_set_pins")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_set_pins_with_mask(PIO pio, uint sm, uint32_t pin_values,
                                          uint32_t pin_mask);
__attribute__((weak)) void pio_sm_set_pins_with_mask(PIO pio, uint sm,
                                                     uint32_t pin_values,
                                                     uint32_t pin_mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_set_pins_with_mask(PIO pio, uint sm,
                                                uint32_t pin_values,
                                                uint32_t pin_mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_set_pins_with_mask=__weak_pio_sm_set_pins_with_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_set_pins_with_mask=_weak_pio_sm_set_pins_with_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_set_set_pins(PIO pio, uint sm, uint set_base,
                                    uint set_count);
__attribute__((weak)) void pio_sm_set_set_pins(PIO pio, uint sm, uint set_base,
                                               uint set_count)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_set_set_pins(PIO pio, uint sm, uint set_base,
                                          uint set_count)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pio_sm_set_set_pins=__weak_pio_sm_set_set_pins")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pio_sm_set_set_pins=_weak_pio_sm_set_set_pins")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_set_sideset_pins(PIO pio, uint sm, uint sideset_base);
__attribute__((weak)) void pio_sm_set_sideset_pins(PIO pio, uint sm,
                                                   uint sideset_base)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_set_sideset_pins(PIO pio, uint sm,
                                              uint sideset_base)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pio_sm_set_sideset_pins=__weak_pio_sm_set_sideset_pins")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pio_sm_set_sideset_pins=_weak_pio_sm_set_sideset_pins")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_set_wrap(PIO pio, uint sm, uint wrap_target, uint wrap);
__attribute__((weak)) void pio_sm_set_wrap(PIO pio, uint sm, uint wrap_target,
                                           uint wrap)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_set_wrap(PIO pio, uint sm, uint wrap_target,
                                      uint wrap)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pio_sm_set_wrap=__weak_pio_sm_set_wrap")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_sm_set_wrap=_weak_pio_sm_set_wrap")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pio_sm_unclaim(PIO pio, uint sm);
__attribute__((weak)) void pio_sm_unclaim(PIO pio, uint sm)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pio_sm_unclaim(PIO pio, uint sm)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pio_sm_unclaim=__weak_pio_sm_unclaim")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pio_sm_unclaim=_weak_pio_sm_unclaim")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_clkdiv(pio_sm_config* c, float div);
__attribute__((weak)) void sm_config_set_clkdiv(pio_sm_config* c, float div)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_clkdiv(pio_sm_config* c, float div)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_clkdiv=__weak_sm_config_set_clkdiv")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:sm_config_set_clkdiv=_weak_sm_config_set_clkdiv")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_clkdiv_int_frac(pio_sm_config* c,
                                              uint16_t div_int,
                                              uint8_t div_frac);
__attribute__((weak)) void sm_config_set_clkdiv_int_frac(pio_sm_config* c,
                                                         uint16_t div_int,
                                                         uint8_t div_frac)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_clkdiv_int_frac(pio_sm_config* c,
                                                    uint16_t div_int,
                                                    uint8_t div_frac)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_clkdiv_int_frac=__weak_sm_config_set_clkdiv_int_frac")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_clkdiv_int_frac=_weak_sm_config_set_clkdiv_int_frac")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_fifo_join(pio_sm_config* c,
                                        enum pio_fifo_join join);
__attribute__((weak)) void sm_config_set_fifo_join(pio_sm_config* c,
                                                   enum pio_fifo_join join)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_fifo_join(pio_sm_config* c,
                                              enum pio_fifo_join join)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_fifo_join=__weak_sm_config_set_fifo_join")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_fifo_join=_weak_sm_config_set_fifo_join")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_in_pin_base(pio_sm_config* c, uint in_base);
__attribute__((weak)) void sm_config_set_in_pin_base(pio_sm_config* c,
                                                     uint in_base)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_in_pin_base(pio_sm_config* c, uint in_base)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_in_pin_base=__weak_sm_config_set_in_pin_base")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_in_pin_base=_weak_sm_config_set_in_pin_base")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_in_pin_count(pio_sm_config* c, uint in_count);
__attribute__((weak)) void sm_config_set_in_pin_count(pio_sm_config* c,
                                                      uint in_count)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_in_pin_count(pio_sm_config* c,
                                                 uint in_count)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_in_pin_count=__weak_sm_config_set_in_pin_count")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_in_pin_count=_weak_sm_config_set_in_pin_count")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_in_pins(pio_sm_config* c, uint in_base);
__attribute__((weak)) void sm_config_set_in_pins(pio_sm_config* c, uint in_base)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_in_pins(pio_sm_config* c, uint in_base)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_in_pins=__weak_sm_config_set_in_pins")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_in_pins=_weak_sm_config_set_in_pins")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_in_shift(pio_sm_config* c, bool shift_right,
                                       bool autopush, uint push_threshold);
__attribute__((weak)) void sm_config_set_in_shift(pio_sm_config* c,
                                                  bool shift_right,
                                                  bool autopush,
                                                  uint push_threshold)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_in_shift(pio_sm_config* c, bool shift_right,
                                             bool autopush, uint push_threshold)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_in_shift=__weak_sm_config_set_in_shift")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_in_shift=_weak_sm_config_set_in_shift")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_jmp_pin(pio_sm_config* c, uint pin);
__attribute__((weak)) void sm_config_set_jmp_pin(pio_sm_config* c, uint pin)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_jmp_pin(pio_sm_config* c, uint pin)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_jmp_pin=__weak_sm_config_set_jmp_pin")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_jmp_pin=_weak_sm_config_set_jmp_pin")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_mov_status(pio_sm_config* c,
                                         enum pio_mov_status_type status_sel,
                                         uint status_n);
__attribute__((weak)) void sm_config_set_mov_status(
    pio_sm_config* c, enum pio_mov_status_type status_sel, uint status_n)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_mov_status(
    pio_sm_config* c, enum pio_mov_status_type status_sel, uint status_n)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_mov_status=__weak_sm_config_set_mov_status")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_mov_status=_weak_sm_config_set_mov_status")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_out_pin_base(pio_sm_config* c, uint out_base);
__attribute__((weak)) void sm_config_set_out_pin_base(pio_sm_config* c,
                                                      uint out_base)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_out_pin_base(pio_sm_config* c,
                                                 uint out_base)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_out_pin_base=__weak_sm_config_set_out_pin_base")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_out_pin_base=_weak_sm_config_set_out_pin_base")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_out_pin_count(pio_sm_config* c, uint out_count);
__attribute__((weak)) void sm_config_set_out_pin_count(pio_sm_config* c,
                                                       uint out_count)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_out_pin_count(pio_sm_config* c,
                                                  uint out_count)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_out_pin_count=__weak_sm_config_set_out_pin_count")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_out_pin_count=_weak_sm_config_set_out_pin_count")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_out_pins(pio_sm_config* c, uint out_base,
                                       uint out_count);
__attribute__((weak)) void sm_config_set_out_pins(pio_sm_config* c,
                                                  uint out_base, uint out_count)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_out_pins(pio_sm_config* c, uint out_base,
                                             uint out_count)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_out_pins=__weak_sm_config_set_out_pins")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_out_pins=_weak_sm_config_set_out_pins")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_out_shift(pio_sm_config* c, bool shift_right,
                                        bool autopull, uint pull_threshold);
__attribute__((weak)) void sm_config_set_out_shift(pio_sm_config* c,
                                                   bool shift_right,
                                                   bool autopull,
                                                   uint pull_threshold)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_out_shift(pio_sm_config* c,
                                              bool shift_right, bool autopull,
                                              uint pull_threshold)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_out_shift=__weak_sm_config_set_out_shift")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_out_shift=_weak_sm_config_set_out_shift")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_out_special(pio_sm_config* c, bool sticky,
                                          bool has_enable_pin,
                                          uint enable_pin_index);
__attribute__((weak)) void sm_config_set_out_special(pio_sm_config* c,
                                                     bool sticky,
                                                     bool has_enable_pin,
                                                     uint enable_pin_index)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_out_special(pio_sm_config* c, bool sticky,
                                                bool has_enable_pin,
                                                uint enable_pin_index)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_out_special=__weak_sm_config_set_out_special")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_out_special=_weak_sm_config_set_out_special")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_set_pin_base(pio_sm_config* c, uint set_base);
__attribute__((weak)) void sm_config_set_set_pin_base(pio_sm_config* c,
                                                      uint set_base)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_set_pin_base(pio_sm_config* c,
                                                 uint set_base)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_set_pin_base=__weak_sm_config_set_set_pin_base")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_set_pin_base=_weak_sm_config_set_set_pin_base")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_set_pin_count(pio_sm_config* c, uint set_count);
__attribute__((weak)) void sm_config_set_set_pin_count(pio_sm_config* c,
                                                       uint set_count)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_set_pin_count(pio_sm_config* c,
                                                  uint set_count)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_set_pin_count=__weak_sm_config_set_set_pin_count")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_set_pin_count=_weak_sm_config_set_set_pin_count")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_set_pins(pio_sm_config* c, uint set_base,
                                       uint set_count);
__attribute__((weak)) void sm_config_set_set_pins(pio_sm_config* c,
                                                  uint set_base, uint set_count)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_set_pins(pio_sm_config* c, uint set_base,
                                             uint set_count)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_set_pins=__weak_sm_config_set_set_pins")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_set_pins=_weak_sm_config_set_set_pins")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_sideset(pio_sm_config* c, uint bit_count,
                                      bool optional, bool pindirs);
__attribute__((weak)) void sm_config_set_sideset(pio_sm_config* c,
                                                 uint bit_count, bool optional,
                                                 bool pindirs)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_sideset(pio_sm_config* c, uint bit_count,
                                            bool optional, bool pindirs)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_sideset=__weak_sm_config_set_sideset")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_sideset=_weak_sm_config_set_sideset")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_sideset_pin_base(pio_sm_config* c,
                                               uint sideset_base);
__attribute__((weak)) void sm_config_set_sideset_pin_base(pio_sm_config* c,
                                                          uint sideset_base)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_sideset_pin_base(pio_sm_config* c,
                                                     uint sideset_base)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_sideset_pin_base=__weak_sm_config_set_sideset_pin_base")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_sideset_pin_base=_weak_sm_config_set_sideset_pin_base")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_sideset_pins(pio_sm_config* c, uint sideset_base);
__attribute__((weak)) void sm_config_set_sideset_pins(pio_sm_config* c,
                                                      uint sideset_base)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_sideset_pins(pio_sm_config* c,
                                                 uint sideset_base)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_sm_config_set_sideset_pins=__weak_sm_config_set_sideset_pins")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:sm_config_set_sideset_pins=_weak_sm_config_set_sideset_pins")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sm_config_set_wrap(pio_sm_config* c, uint wrap_target,
                                   uint wrap);
__attribute__((weak)) void sm_config_set_wrap(pio_sm_config* c,
                                              uint wrap_target, uint wrap)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sm_config_set_wrap(pio_sm_config* c, uint wrap_target,
                                         uint wrap)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_sm_config_set_wrap=__weak_sm_config_set_wrap")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:sm_config_set_wrap=_weak_sm_config_set_wrap")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_clear_alarm(void);
__attribute__((weak)) void powman_clear_alarm(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_clear_alarm(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_powman_clear_alarm=__weak_powman_clear_alarm")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:powman_clear_alarm=_weak_powman_clear_alarm")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_clear_bits(volatile uint32_t* reg, uint32_t bits);
__attribute__((weak)) void powman_clear_bits(volatile uint32_t* reg,
                                             uint32_t bits)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_clear_bits(volatile uint32_t* reg, uint32_t bits)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_powman_clear_bits=__weak_powman_clear_bits")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:powman_clear_bits=_weak_powman_clear_bits")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool powman_configure_wakeup_state(powman_power_state sleep_state,
                                              powman_power_state wakeup_state);
__attribute__((weak)) bool powman_configure_wakeup_state(
    powman_power_state sleep_state, powman_power_state wakeup_state)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_powman_configure_wakeup_state(
    powman_power_state sleep_state, powman_power_state wakeup_state)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_configure_wakeup_state=__weak_powman_configure_wakeup_state")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_configure_wakeup_state=_weak_powman_configure_wakeup_state")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_disable_alarm_wakeup(void);
__attribute__((weak)) void powman_disable_alarm_wakeup(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_disable_alarm_wakeup(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_disable_alarm_wakeup=__weak_powman_disable_alarm_wakeup")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_disable_alarm_wakeup=_weak_powman_disable_alarm_wakeup")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_disable_all_wakeups(void);
__attribute__((weak)) void powman_disable_all_wakeups(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_disable_all_wakeups(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_disable_all_wakeups=__weak_powman_disable_all_wakeups")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_disable_all_wakeups=_weak_powman_disable_all_wakeups")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_disable_gpio_wakeup(uint gpio_wakeup_num);
__attribute__((weak)) void powman_disable_gpio_wakeup(uint gpio_wakeup_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_disable_gpio_wakeup(uint gpio_wakeup_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_disable_gpio_wakeup=__weak_powman_disable_gpio_wakeup")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_disable_gpio_wakeup=_weak_powman_disable_gpio_wakeup")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_enable_alarm_wakeup_at_ms(uint64_t alarm_time_ms);
__attribute__((weak)) void powman_enable_alarm_wakeup_at_ms(
    uint64_t alarm_time_ms)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_enable_alarm_wakeup_at_ms(uint64_t alarm_time_ms)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_enable_alarm_wakeup_at_ms=__weak_powman_enable_alarm_wakeup_at_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_enable_alarm_wakeup_at_ms=_weak_powman_enable_alarm_wakeup_at_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_enable_gpio_wakeup(uint gpio_wakeup_num, uint32_t gpio,
                                          bool edge, bool high);
__attribute__((weak)) void powman_enable_gpio_wakeup(uint gpio_wakeup_num,
                                                     uint32_t gpio, bool edge,
                                                     bool high)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_enable_gpio_wakeup(uint gpio_wakeup_num,
                                                uint32_t gpio, bool edge,
                                                bool high)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_enable_gpio_wakeup=__weak_powman_enable_gpio_wakeup")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_enable_gpio_wakeup=_weak_powman_enable_gpio_wakeup")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" powman_power_state powman_get_power_state(void);
__attribute__((weak)) powman_power_state powman_get_power_state(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" powman_power_state _weak_powman_get_power_state(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_get_power_state=__weak_powman_get_power_state")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_get_power_state=_weak_powman_get_power_state")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool powman_power_state_is_domain_on(
    powman_power_state state, enum powman_power_domains domain);
__attribute__((weak)) bool powman_power_state_is_domain_on(
    powman_power_state state, enum powman_power_domains domain)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_powman_power_state_is_domain_on(
    powman_power_state state, enum powman_power_domains domain)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_power_state_is_domain_on=__weak_powman_power_state_is_domain_on")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_power_state_is_domain_on=_weak_powman_power_state_is_domain_on")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" powman_power_state powman_power_state_with_domain_off(
    powman_power_state orig, enum powman_power_domains domain);
__attribute__((weak)) powman_power_state powman_power_state_with_domain_off(
    powman_power_state orig, enum powman_power_domains domain)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" powman_power_state _weak_powman_power_state_with_domain_off(
    powman_power_state orig, enum powman_power_domains domain)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_power_state_with_domain_off=__weak_powman_power_state_with_domain_off")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_power_state_with_domain_off=_weak_powman_power_state_with_domain_off")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" powman_power_state powman_power_state_with_domain_on(
    powman_power_state orig, enum powman_power_domains domain);
__attribute__((weak)) powman_power_state powman_power_state_with_domain_on(
    powman_power_state orig, enum powman_power_domains domain)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" powman_power_state _weak_powman_power_state_with_domain_on(
    powman_power_state orig, enum powman_power_domains domain)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_power_state_with_domain_on=__weak_powman_power_state_with_domain_on")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_power_state_with_domain_on=_weak_powman_power_state_with_domain_on")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_set_bits(volatile uint32_t* reg, uint32_t bits);
__attribute__((weak)) void powman_set_bits(volatile uint32_t* reg,
                                           uint32_t bits)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_set_bits(volatile uint32_t* reg, uint32_t bits)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_powman_set_bits=__weak_powman_set_bits")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:powman_set_bits=_weak_powman_set_bits")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_set_debug_power_request_ignored(bool ignored);
__attribute__((weak)) void powman_set_debug_power_request_ignored(bool ignored)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_set_debug_power_request_ignored(bool ignored)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_set_debug_power_request_ignored=__weak_powman_set_debug_power_request_ignored")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_set_debug_power_request_ignored=_weak_powman_set_debug_power_request_ignored")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int powman_set_power_state(powman_power_state state);
__attribute__((weak)) int powman_set_power_state(powman_power_state state)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_powman_set_power_state(powman_power_state state)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_set_power_state=__weak_powman_set_power_state")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_set_power_state=_weak_powman_set_power_state")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_timer_disable_alarm(void);
__attribute__((weak)) void powman_timer_disable_alarm(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_timer_disable_alarm(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_timer_disable_alarm=__weak_powman_timer_disable_alarm")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_timer_disable_alarm=_weak_powman_timer_disable_alarm")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_timer_disable_gpio_1hz_sync(void);
__attribute__((weak)) void powman_timer_disable_gpio_1hz_sync(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_timer_disable_gpio_1hz_sync(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_timer_disable_gpio_1hz_sync=__weak_powman_timer_disable_gpio_1hz_sync")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_timer_disable_gpio_1hz_sync=_weak_powman_timer_disable_gpio_1hz_sync")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_timer_enable_alarm_at_ms(uint64_t alarm_time_ms);
__attribute__((weak)) void powman_timer_enable_alarm_at_ms(
    uint64_t alarm_time_ms)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_timer_enable_alarm_at_ms(uint64_t alarm_time_ms)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_timer_enable_alarm_at_ms=__weak_powman_timer_enable_alarm_at_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_timer_enable_alarm_at_ms=_weak_powman_timer_enable_alarm_at_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_timer_enable_gpio_1hz_sync(uint32_t gpio);
__attribute__((weak)) void powman_timer_enable_gpio_1hz_sync(uint32_t gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_timer_enable_gpio_1hz_sync(uint32_t gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_timer_enable_gpio_1hz_sync=__weak_powman_timer_enable_gpio_1hz_sync")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_timer_enable_gpio_1hz_sync=_weak_powman_timer_enable_gpio_1hz_sync")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint64_t powman_timer_get_ms(void);
__attribute__((weak)) uint64_t powman_timer_get_ms(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint64_t _weak_powman_timer_get_ms(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_powman_timer_get_ms=__weak_powman_timer_get_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:powman_timer_get_ms=_weak_powman_timer_get_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool powman_timer_is_running(void);
__attribute__((weak)) bool powman_timer_is_running(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_powman_timer_is_running(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_timer_is_running=__weak_powman_timer_is_running")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_timer_is_running=_weak_powman_timer_is_running")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_timer_set_1khz_tick_source_gpio(uint32_t gpio);
__attribute__((weak)) void powman_timer_set_1khz_tick_source_gpio(uint32_t gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_timer_set_1khz_tick_source_gpio(uint32_t gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_timer_set_1khz_tick_source_gpio=__weak_powman_timer_set_1khz_tick_source_gpio")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_timer_set_1khz_tick_source_gpio=_weak_powman_timer_set_1khz_tick_source_gpio")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_timer_set_1khz_tick_source_lposc(void);
__attribute__((weak)) void powman_timer_set_1khz_tick_source_lposc(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_timer_set_1khz_tick_source_lposc(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_timer_set_1khz_tick_source_lposc=__weak_powman_timer_set_1khz_tick_source_lposc")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_timer_set_1khz_tick_source_lposc=_weak_powman_timer_set_1khz_tick_source_lposc")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_timer_set_1khz_tick_source_lposc_with_hz(
    uint32_t lposc_freq_hz);
__attribute__((weak)) void powman_timer_set_1khz_tick_source_lposc_with_hz(
    uint32_t lposc_freq_hz)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_timer_set_1khz_tick_source_lposc_with_hz(
    uint32_t lposc_freq_hz)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_timer_set_1khz_tick_source_lposc_with_hz=__weak_powman_timer_set_1khz_tick_source_lposc_with_hz")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_timer_set_1khz_tick_source_lposc_with_hz=_weak_powman_timer_set_1khz_tick_source_lposc_with_hz")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_timer_set_1khz_tick_source_xosc(void);
__attribute__((weak)) void powman_timer_set_1khz_tick_source_xosc(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_timer_set_1khz_tick_source_xosc(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_timer_set_1khz_tick_source_xosc=__weak_powman_timer_set_1khz_tick_source_xosc")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_timer_set_1khz_tick_source_xosc=_weak_powman_timer_set_1khz_tick_source_xosc")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_timer_set_1khz_tick_source_xosc_with_hz(
    uint32_t xosc_freq_hz);
__attribute__((weak)) void powman_timer_set_1khz_tick_source_xosc_with_hz(
    uint32_t xosc_freq_hz)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_timer_set_1khz_tick_source_xosc_with_hz(
    uint32_t xosc_freq_hz)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_powman_timer_set_1khz_tick_source_xosc_with_hz=__weak_powman_timer_set_1khz_tick_source_xosc_with_hz")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:powman_timer_set_1khz_tick_source_xosc_with_hz=_weak_powman_timer_set_1khz_tick_source_xosc_with_hz")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_timer_set_ms(uint64_t time_ms);
__attribute__((weak)) void powman_timer_set_ms(uint64_t time_ms)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_timer_set_ms(uint64_t time_ms)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_powman_timer_set_ms=__weak_powman_timer_set_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:powman_timer_set_ms=_weak_powman_timer_set_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_timer_start(void);
__attribute__((weak)) void powman_timer_start(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_timer_start(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_powman_timer_start=__weak_powman_timer_start")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:powman_timer_start=_weak_powman_timer_start")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void powman_timer_stop(void);
__attribute__((weak)) void powman_timer_stop(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_powman_timer_stop(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_powman library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_powman_timer_stop=__weak_powman_timer_stop")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:powman_timer_stop=_weak_powman_timer_stop")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_advance_count(uint slice_num);
__attribute__((weak)) void pwm_advance_count(uint slice_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_advance_count(uint slice_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pwm_advance_count=__weak_pwm_advance_count")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pwm_advance_count=_weak_pwm_advance_count")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_clear_irq(uint slice_num);
__attribute__((weak)) void pwm_clear_irq(uint slice_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_clear_irq(uint slice_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pwm_clear_irq=__weak_pwm_clear_irq")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pwm_clear_irq=_weak_pwm_clear_irq")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_config_set_clkdiv(pwm_config* c, float div);
__attribute__((weak)) void pwm_config_set_clkdiv(pwm_config* c, float div)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_config_set_clkdiv(pwm_config* c, float div)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_config_set_clkdiv=__weak_pwm_config_set_clkdiv")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_config_set_clkdiv=_weak_pwm_config_set_clkdiv")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_config_set_clkdiv_int(pwm_config* c, uint div);
__attribute__((weak)) void pwm_config_set_clkdiv_int(pwm_config* c, uint div)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_config_set_clkdiv_int(pwm_config* c, uint div)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_config_set_clkdiv_int=__weak_pwm_config_set_clkdiv_int")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_config_set_clkdiv_int=_weak_pwm_config_set_clkdiv_int")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_config_set_clkdiv_int_frac(pwm_config* c, uint8_t integer,
                                               uint8_t fract);
__attribute__((weak)) void pwm_config_set_clkdiv_int_frac(pwm_config* c,
                                                          uint8_t integer,
                                                          uint8_t fract)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_config_set_clkdiv_int_frac(pwm_config* c,
                                                     uint8_t integer,
                                                     uint8_t fract)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_config_set_clkdiv_int_frac=__weak_pwm_config_set_clkdiv_int_frac")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_config_set_clkdiv_int_frac=_weak_pwm_config_set_clkdiv_int_frac")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_config_set_clkdiv_mode(pwm_config* c,
                                           enum pwm_clkdiv_mode mode);
__attribute__((weak)) void pwm_config_set_clkdiv_mode(pwm_config* c,
                                                      enum pwm_clkdiv_mode mode)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_config_set_clkdiv_mode(pwm_config* c,
                                                 enum pwm_clkdiv_mode mode)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_config_set_clkdiv_mode=__weak_pwm_config_set_clkdiv_mode")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_config_set_clkdiv_mode=_weak_pwm_config_set_clkdiv_mode")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_config_set_output_polarity(pwm_config* c, bool a, bool b);
__attribute__((weak)) void pwm_config_set_output_polarity(pwm_config* c, bool a,
                                                          bool b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_config_set_output_polarity(pwm_config* c, bool a,
                                                     bool b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_config_set_output_polarity=__weak_pwm_config_set_output_polarity")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_config_set_output_polarity=_weak_pwm_config_set_output_polarity")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_config_set_phase_correct(pwm_config* c, bool phase_correct);
__attribute__((weak)) void pwm_config_set_phase_correct(pwm_config* c,
                                                        bool phase_correct)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_config_set_phase_correct(pwm_config* c,
                                                   bool phase_correct)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_config_set_phase_correct=__weak_pwm_config_set_phase_correct")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_config_set_phase_correct=_weak_pwm_config_set_phase_correct")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_config_set_wrap(pwm_config* c, uint16_t wrap);
__attribute__((weak)) void pwm_config_set_wrap(pwm_config* c, uint16_t wrap)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_config_set_wrap(pwm_config* c, uint16_t wrap)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pwm_config_set_wrap=__weak_pwm_config_set_wrap")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pwm_config_set_wrap=_weak_pwm_config_set_wrap")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_force_irq(uint slice_num);
__attribute__((weak)) void pwm_force_irq(uint slice_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_force_irq(uint slice_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pwm_force_irq=__weak_pwm_force_irq")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pwm_force_irq=_weak_pwm_force_irq")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_force_irq0(uint slice_num);
__attribute__((weak)) void pwm_force_irq0(uint slice_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_force_irq0(uint slice_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pwm_force_irq0=__weak_pwm_force_irq0")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pwm_force_irq0=_weak_pwm_force_irq0")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_force_irq1(uint slice_num);
__attribute__((weak)) void pwm_force_irq1(uint slice_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_force_irq1(uint slice_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pwm_force_irq1=__weak_pwm_force_irq1")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pwm_force_irq1=_weak_pwm_force_irq1")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint16_t pwm_get_counter(uint slice_num);
__attribute__((weak)) uint16_t pwm_get_counter(uint slice_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint16_t _weak_pwm_get_counter(uint slice_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pwm_get_counter=__weak_pwm_get_counter")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pwm_get_counter=_weak_pwm_get_counter")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" pwm_config pwm_get_default_config(void);
__attribute__((weak)) pwm_config pwm_get_default_config(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" pwm_config _weak_pwm_get_default_config(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_get_default_config=__weak_pwm_get_default_config")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_get_default_config=_weak_pwm_get_default_config")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint pwm_get_dreq(uint slice_num);
__attribute__((weak)) uint pwm_get_dreq(uint slice_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_pwm_get_dreq(uint slice_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pwm_get_dreq=__weak_pwm_get_dreq")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pwm_get_dreq=_weak_pwm_get_dreq")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t pwm_get_irq0_status_mask(void);
__attribute__((weak)) uint32_t pwm_get_irq0_status_mask(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_pwm_get_irq0_status_mask(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_get_irq0_status_mask=__weak_pwm_get_irq0_status_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_get_irq0_status_mask=_weak_pwm_get_irq0_status_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t pwm_get_irq1_status_mask(void);
__attribute__((weak)) uint32_t pwm_get_irq1_status_mask(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_pwm_get_irq1_status_mask(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_get_irq1_status_mask=__weak_pwm_get_irq1_status_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_get_irq1_status_mask=_weak_pwm_get_irq1_status_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t pwm_get_irq_status_mask(void);
__attribute__((weak)) uint32_t pwm_get_irq_status_mask(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_pwm_get_irq_status_mask(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_get_irq_status_mask=__weak_pwm_get_irq_status_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_get_irq_status_mask=_weak_pwm_get_irq_status_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint pwm_gpio_to_channel(uint gpio);
__attribute__((weak)) uint pwm_gpio_to_channel(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_pwm_gpio_to_channel(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pwm_gpio_to_channel=__weak_pwm_gpio_to_channel")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pwm_gpio_to_channel=_weak_pwm_gpio_to_channel")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint pwm_gpio_to_slice_num(uint gpio);
__attribute__((weak)) uint pwm_gpio_to_slice_num(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_pwm_gpio_to_slice_num(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_gpio_to_slice_num=__weak_pwm_gpio_to_slice_num")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_gpio_to_slice_num=_weak_pwm_gpio_to_slice_num")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_init(uint slice_num, pwm_config* c, bool start);
__attribute__((weak)) void pwm_init(uint slice_num, pwm_config* c, bool start)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_init(uint slice_num, pwm_config* c, bool start)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pwm_init=__weak_pwm_init")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pwm_init=_weak_pwm_init")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_irqn_force(uint irq_index, uint slice_num);
__attribute__((weak)) void pwm_irqn_force(uint irq_index, uint slice_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_irqn_force(uint irq_index, uint slice_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pwm_irqn_force=__weak_pwm_irqn_force")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pwm_irqn_force=_weak_pwm_irqn_force")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t pwm_irqn_get_status_mask(uint irq_index);
__attribute__((weak)) uint32_t pwm_irqn_get_status_mask(uint irq_index)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_pwm_irqn_get_status_mask(uint irq_index)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_irqn_get_status_mask=__weak_pwm_irqn_get_status_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_irqn_get_status_mask=_weak_pwm_irqn_get_status_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_irqn_set_slice_enabled(uint irq_index, uint slice_num,
                                           bool enabled);
__attribute__((weak)) void pwm_irqn_set_slice_enabled(uint irq_index,
                                                      uint slice_num,
                                                      bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_irqn_set_slice_enabled(uint irq_index, uint slice_num,
                                                 bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_irqn_set_slice_enabled=__weak_pwm_irqn_set_slice_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_irqn_set_slice_enabled=_weak_pwm_irqn_set_slice_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_irqn_set_slice_mask_enabled(uint irq_index, uint slice_mask,
                                                bool enabled);
__attribute__((weak)) void pwm_irqn_set_slice_mask_enabled(uint irq_index,
                                                           uint slice_mask,
                                                           bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_irqn_set_slice_mask_enabled(uint irq_index,
                                                      uint slice_mask,
                                                      bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_irqn_set_slice_mask_enabled=__weak_pwm_irqn_set_slice_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_irqn_set_slice_mask_enabled=_weak_pwm_irqn_set_slice_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_retard_count(uint slice_num);
__attribute__((weak)) void pwm_retard_count(uint slice_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_retard_count(uint slice_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pwm_retard_count=__weak_pwm_retard_count")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pwm_retard_count=_weak_pwm_retard_count")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_both_levels(uint slice_num, uint16_t level_a,
                                    uint16_t level_b);
__attribute__((weak)) void pwm_set_both_levels(uint slice_num, uint16_t level_a,
                                               uint16_t level_b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_both_levels(uint slice_num, uint16_t level_a,
                                          uint16_t level_b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pwm_set_both_levels=__weak_pwm_set_both_levels")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pwm_set_both_levels=_weak_pwm_set_both_levels")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_chan_level(uint slice_num, uint chan, uint16_t level);
__attribute__((weak)) void pwm_set_chan_level(uint slice_num, uint chan,
                                              uint16_t level)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_chan_level(uint slice_num, uint chan,
                                         uint16_t level)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pwm_set_chan_level=__weak_pwm_set_chan_level")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pwm_set_chan_level=_weak_pwm_set_chan_level")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_clkdiv(uint slice_num, float divider);
__attribute__((weak)) void pwm_set_clkdiv(uint slice_num, float divider)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_clkdiv(uint slice_num, float divider)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pwm_set_clkdiv=__weak_pwm_set_clkdiv")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pwm_set_clkdiv=_weak_pwm_set_clkdiv")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_clkdiv_int_frac(uint slice_num, uint8_t integer,
                                        uint8_t fract);
__attribute__((weak)) void pwm_set_clkdiv_int_frac(uint slice_num,
                                                   uint8_t integer,
                                                   uint8_t fract)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_clkdiv_int_frac(uint slice_num, uint8_t integer,
                                              uint8_t fract)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_set_clkdiv_int_frac=__weak_pwm_set_clkdiv_int_frac")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_set_clkdiv_int_frac=_weak_pwm_set_clkdiv_int_frac")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_clkdiv_mode(uint slice_num, enum pwm_clkdiv_mode mode);
__attribute__((weak)) void pwm_set_clkdiv_mode(uint slice_num,
                                               enum pwm_clkdiv_mode mode)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_clkdiv_mode(uint slice_num,
                                          enum pwm_clkdiv_mode mode)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pwm_set_clkdiv_mode=__weak_pwm_set_clkdiv_mode")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pwm_set_clkdiv_mode=_weak_pwm_set_clkdiv_mode")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_counter(uint slice_num, uint16_t c);
__attribute__((weak)) void pwm_set_counter(uint slice_num, uint16_t c)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_counter(uint slice_num, uint16_t c)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pwm_set_counter=__weak_pwm_set_counter")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pwm_set_counter=_weak_pwm_set_counter")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_enabled(uint slice_num, bool enabled);
__attribute__((weak)) void pwm_set_enabled(uint slice_num, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_enabled(uint slice_num, bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_pwm_set_enabled=__weak_pwm_set_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pwm_set_enabled=_weak_pwm_set_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_gpio_level(uint gpio, uint16_t level);
__attribute__((weak)) void pwm_set_gpio_level(uint gpio, uint16_t level)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_gpio_level(uint gpio, uint16_t level)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pwm_set_gpio_level=__weak_pwm_set_gpio_level")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:pwm_set_gpio_level=_weak_pwm_set_gpio_level")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_irq0_enabled(uint slice_num, bool enabled);
__attribute__((weak)) void pwm_set_irq0_enabled(uint slice_num, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_irq0_enabled(uint slice_num, bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_set_irq0_enabled=__weak_pwm_set_irq0_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pwm_set_irq0_enabled=_weak_pwm_set_irq0_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_irq0_mask_enabled(uint32_t slice_mask, bool enabled);
__attribute__((weak)) void pwm_set_irq0_mask_enabled(uint32_t slice_mask,
                                                     bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_irq0_mask_enabled(uint32_t slice_mask,
                                                bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_set_irq0_mask_enabled=__weak_pwm_set_irq0_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_set_irq0_mask_enabled=_weak_pwm_set_irq0_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_irq1_enabled(uint slice_num, bool enabled);
__attribute__((weak)) void pwm_set_irq1_enabled(uint slice_num, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_irq1_enabled(uint slice_num, bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_set_irq1_enabled=__weak_pwm_set_irq1_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pwm_set_irq1_enabled=_weak_pwm_set_irq1_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_irq1_mask_enabled(uint32_t slice_mask, bool enabled);
__attribute__((weak)) void pwm_set_irq1_mask_enabled(uint32_t slice_mask,
                                                     bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_irq1_mask_enabled(uint32_t slice_mask,
                                                bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_set_irq1_mask_enabled=__weak_pwm_set_irq1_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_set_irq1_mask_enabled=_weak_pwm_set_irq1_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_irq_enabled(uint slice_num, bool enabled);
__attribute__((weak)) void pwm_set_irq_enabled(uint slice_num, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_irq_enabled(uint slice_num, bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_pwm_set_irq_enabled=__weak_pwm_set_irq_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pwm_set_irq_enabled=_weak_pwm_set_irq_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_irq_mask_enabled(uint32_t slice_mask, bool enabled);
__attribute__((weak)) void pwm_set_irq_mask_enabled(uint32_t slice_mask,
                                                    bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_irq_mask_enabled(uint32_t slice_mask,
                                               bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_set_irq_mask_enabled=__weak_pwm_set_irq_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_set_irq_mask_enabled=_weak_pwm_set_irq_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_mask_enabled(uint32_t mask);
__attribute__((weak)) void pwm_set_mask_enabled(uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_mask_enabled(uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_set_mask_enabled=__weak_pwm_set_mask_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:pwm_set_mask_enabled=_weak_pwm_set_mask_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_output_polarity(uint slice_num, bool a, bool b);
__attribute__((weak)) void pwm_set_output_polarity(uint slice_num, bool a,
                                                   bool b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_output_polarity(uint slice_num, bool a, bool b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_set_output_polarity=__weak_pwm_set_output_polarity")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_set_output_polarity=_weak_pwm_set_output_polarity")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_phase_correct(uint slice_num, bool phase_correct);
__attribute__((weak)) void pwm_set_phase_correct(uint slice_num,
                                                 bool phase_correct)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_phase_correct(uint slice_num, bool phase_correct)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_pwm_set_phase_correct=__weak_pwm_set_phase_correct")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:pwm_set_phase_correct=_weak_pwm_set_phase_correct")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void pwm_set_wrap(uint slice_num, uint16_t wrap);
__attribute__((weak)) void pwm_set_wrap(uint slice_num, uint16_t wrap)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_pwm_set_wrap(uint slice_num, uint16_t wrap)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_pwm library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_pwm_set_wrap=__weak_pwm_set_wrap")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:pwm_set_wrap=_weak_pwm_set_wrap")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_b2and(uint32_t b0, uint32_t b1);
__attribute__((weak)) void rcp_b2and(uint32_t b0, uint32_t b1)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_b2and(uint32_t b0, uint32_t b1)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_b2and=__weak_rcp_b2and")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_b2and=_weak_rcp_b2and")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_b2and_nodelay(uint32_t b0, uint32_t b1);
__attribute__((weak)) void rcp_b2and_nodelay(uint32_t b0, uint32_t b1)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_b2and_nodelay(uint32_t b0, uint32_t b1)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_rcp_b2and_nodelay=__weak_rcp_b2and_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:rcp_b2and_nodelay=_weak_rcp_b2and_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_b2or(uint32_t b0, uint32_t b1);
__attribute__((weak)) void rcp_b2or(uint32_t b0, uint32_t b1)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_b2or(uint32_t b0, uint32_t b1)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_b2or=__weak_rcp_b2or")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_b2or=_weak_rcp_b2or")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_b2or_nodelay(uint32_t b0, uint32_t b1);
__attribute__((weak)) void rcp_b2or_nodelay(uint32_t b0, uint32_t b1)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_b2or_nodelay(uint32_t b0, uint32_t b1)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_rcp_b2or_nodelay=__weak_rcp_b2or_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:rcp_b2or_nodelay=_weak_rcp_b2or_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_b2valid(uint32_t b0, uint32_t b1);
__attribute__((weak)) void rcp_b2valid(uint32_t b0, uint32_t b1)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_b2valid(uint32_t b0, uint32_t b1)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_b2valid=__weak_rcp_b2valid")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_b2valid=_weak_rcp_b2valid")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_b2valid_nodelay(uint32_t b0, uint32_t b1);
__attribute__((weak)) void rcp_b2valid_nodelay(uint32_t b0, uint32_t b1)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_b2valid_nodelay(uint32_t b0, uint32_t b1)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_rcp_b2valid_nodelay=__weak_rcp_b2valid_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:rcp_b2valid_nodelay=_weak_rcp_b2valid_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_bfalse(uint32_t b);
__attribute__((weak)) void rcp_bfalse(uint32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_bfalse(uint32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_bfalse=__weak_rcp_bfalse")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_bfalse=_weak_rcp_bfalse")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_bfalse_nodelay(uint32_t b);
__attribute__((weak)) void rcp_bfalse_nodelay(uint32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_bfalse_nodelay(uint32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_rcp_bfalse_nodelay=__weak_rcp_bfalse_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:rcp_bfalse_nodelay=_weak_rcp_bfalse_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_btrue(uint32_t b);
__attribute__((weak)) void rcp_btrue(uint32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_btrue(uint32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_btrue=__weak_rcp_btrue")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_btrue=_weak_rcp_btrue")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_btrue_nodelay(uint32_t b);
__attribute__((weak)) void rcp_btrue_nodelay(uint32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_btrue_nodelay(uint32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_rcp_btrue_nodelay=__weak_rcp_btrue_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:rcp_btrue_nodelay=_weak_rcp_btrue_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_bvalid(uint32_t b);
__attribute__((weak)) void rcp_bvalid(uint32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_bvalid(uint32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_bvalid=__weak_rcp_bvalid")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_bvalid=_weak_rcp_bvalid")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_bvalid_nodelay(uint32_t b);
__attribute__((weak)) void rcp_bvalid_nodelay(uint32_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_bvalid_nodelay(uint32_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_rcp_bvalid_nodelay=__weak_rcp_bvalid_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:rcp_bvalid_nodelay=_weak_rcp_bvalid_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_bxorfalse(uint32_t b, uint32_t mask);
__attribute__((weak)) void rcp_bxorfalse(uint32_t b, uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_bxorfalse(uint32_t b, uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_bxorfalse=__weak_rcp_bxorfalse")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_bxorfalse=_weak_rcp_bxorfalse")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_bxorfalse_nodelay(uint32_t b, uint32_t mask);
__attribute__((weak)) void rcp_bxorfalse_nodelay(uint32_t b, uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_bxorfalse_nodelay(uint32_t b, uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_rcp_bxorfalse_nodelay=__weak_rcp_bxorfalse_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:rcp_bxorfalse_nodelay=_weak_rcp_bxorfalse_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_bxortrue(uint32_t b, uint32_t mask);
__attribute__((weak)) void rcp_bxortrue(uint32_t b, uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_bxortrue(uint32_t b, uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_bxortrue=__weak_rcp_bxortrue")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_bxortrue=_weak_rcp_bxortrue")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_bxortrue_nodelay(uint32_t b, uint32_t mask);
__attribute__((weak)) void rcp_bxortrue_nodelay(uint32_t b, uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_bxortrue_nodelay(uint32_t b, uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_rcp_bxortrue_nodelay=__weak_rcp_bxortrue_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:rcp_bxortrue_nodelay=_weak_rcp_bxortrue_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_bxorvalid(uint32_t b, uint32_t mask);
__attribute__((weak)) void rcp_bxorvalid(uint32_t b, uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_bxorvalid(uint32_t b, uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_bxorvalid=__weak_rcp_bxorvalid")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_bxorvalid=_weak_rcp_bxorvalid")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_bxorvalid_nodelay(uint32_t b, uint32_t mask);
__attribute__((weak)) void rcp_bxorvalid_nodelay(uint32_t b, uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_bxorvalid_nodelay(uint32_t b, uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_rcp_bxorvalid_nodelay=__weak_rcp_bxorvalid_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:rcp_bxorvalid_nodelay=_weak_rcp_bxorvalid_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t rcp_canary_status(void);
__attribute__((weak)) uint32_t rcp_canary_status(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_rcp_canary_status(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_rcp_canary_status=__weak_rcp_canary_status")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:rcp_canary_status=_weak_rcp_canary_status")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t rcp_canary_status_nodelay(void);
__attribute__((weak)) uint32_t rcp_canary_status_nodelay(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_rcp_canary_status_nodelay(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_rcp_canary_status_nodelay=__weak_rcp_canary_status_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:rcp_canary_status_nodelay=_weak_rcp_canary_status_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_iequal(uint32_t x, uint32_t y);
__attribute__((weak)) void rcp_iequal(uint32_t x, uint32_t y)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_iequal(uint32_t x, uint32_t y)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_iequal=__weak_rcp_iequal")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_iequal=_weak_rcp_iequal")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_iequal_nodelay(uint32_t x, uint32_t y);
__attribute__((weak)) void rcp_iequal_nodelay(uint32_t x, uint32_t y)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_iequal_nodelay(uint32_t x, uint32_t y)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_rcp_iequal_nodelay=__weak_rcp_iequal_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:rcp_iequal_nodelay=_weak_rcp_iequal_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_ivalid(uint32_t x, uint32_t parity);
__attribute__((weak)) void rcp_ivalid(uint32_t x, uint32_t parity)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_ivalid(uint32_t x, uint32_t parity)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_ivalid=__weak_rcp_ivalid")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_ivalid=_weak_rcp_ivalid")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_ivalid_nodelay(uint32_t x, uint32_t parity);
__attribute__((weak)) void rcp_ivalid_nodelay(uint32_t x, uint32_t parity)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_ivalid_nodelay(uint32_t x, uint32_t parity)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_rcp_ivalid_nodelay=__weak_rcp_ivalid_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:rcp_ivalid_nodelay=_weak_rcp_ivalid_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_panic(void);
__attribute__((weak)) void rcp_panic(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_panic(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_panic=__weak_rcp_panic")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_panic=_weak_rcp_panic")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint8_t rcp_random_byte(void);
__attribute__((weak)) uint8_t rcp_random_byte(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint8_t _weak_rcp_random_byte(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_rcp_random_byte=__weak_rcp_random_byte")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_random_byte=_weak_rcp_random_byte")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint8_t rcp_random_byte_nodelay(void);
__attribute__((weak)) uint8_t rcp_random_byte_nodelay(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint8_t _weak_rcp_random_byte_nodelay(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_rcp_random_byte_nodelay=__weak_rcp_random_byte_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:rcp_random_byte_nodelay=_weak_rcp_random_byte_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_salt_core0(uint64_t salt);
__attribute__((weak)) void rcp_salt_core0(uint64_t salt)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_salt_core0(uint64_t salt)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_salt_core0=__weak_rcp_salt_core0")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_salt_core0=_weak_rcp_salt_core0")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_salt_core0_nodelay(uint64_t salt);
__attribute__((weak)) void rcp_salt_core0_nodelay(uint64_t salt)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_salt_core0_nodelay(uint64_t salt)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_rcp_salt_core0_nodelay=__weak_rcp_salt_core0_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:rcp_salt_core0_nodelay=_weak_rcp_salt_core0_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_salt_core1(uint64_t salt);
__attribute__((weak)) void rcp_salt_core1(uint64_t salt)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_salt_core1(uint64_t salt)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_rcp_salt_core1=__weak_rcp_salt_core1")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:rcp_salt_core1=_weak_rcp_salt_core1")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void rcp_salt_core1_nodelay(uint64_t salt);
__attribute__((weak)) void rcp_salt_core1_nodelay(uint64_t salt)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_rcp_salt_core1_nodelay(uint64_t salt)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_rcp library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_rcp_salt_core1_nodelay=__weak_rcp_salt_core1_nodelay")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:rcp_salt_core1_nodelay=_weak_rcp_salt_core1_nodelay")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_acknowledge_irq(uint gpio, uint32_t event_mask);
__attribute__((weak)) void gpio_acknowledge_irq(uint gpio, uint32_t event_mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_acknowledge_irq(uint gpio, uint32_t event_mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_acknowledge_irq=__weak_gpio_acknowledge_irq")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:gpio_acknowledge_irq=_weak_gpio_acknowledge_irq")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_add_raw_irq_handler(uint gpio, irq_handler_t handler);
__attribute__((weak)) void gpio_add_raw_irq_handler(uint gpio,
                                                    irq_handler_t handler)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_add_raw_irq_handler(uint gpio, irq_handler_t handler)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_add_raw_irq_handler=__weak_gpio_add_raw_irq_handler")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_add_raw_irq_handler=_weak_gpio_add_raw_irq_handler")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_add_raw_irq_handler_masked(uint32_t gpio_mask,
                                                irq_handler_t handler);
__attribute__((weak)) void gpio_add_raw_irq_handler_masked(
    uint32_t gpio_mask, irq_handler_t handler)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_add_raw_irq_handler_masked(uint32_t gpio_mask,
                                                      irq_handler_t handler)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_add_raw_irq_handler_masked=__weak_gpio_add_raw_irq_handler_masked")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_add_raw_irq_handler_masked=_weak_gpio_add_raw_irq_handler_masked")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_add_raw_irq_handler_masked64(uint64_t gpio_mask,
                                                  irq_handler_t handler);
__attribute__((weak)) void gpio_add_raw_irq_handler_masked64(
    uint64_t gpio_mask, irq_handler_t handler)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_add_raw_irq_handler_masked64(uint64_t gpio_mask,
                                                        irq_handler_t handler)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_add_raw_irq_handler_masked64=__weak_gpio_add_raw_irq_handler_masked64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_add_raw_irq_handler_masked64=_weak_gpio_add_raw_irq_handler_masked64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_add_raw_irq_handler_with_order_priority(
    uint gpio, irq_handler_t handler, uint8_t order_priority);
__attribute__((weak)) void gpio_add_raw_irq_handler_with_order_priority(
    uint gpio, irq_handler_t handler, uint8_t order_priority)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_add_raw_irq_handler_with_order_priority(
    uint gpio, irq_handler_t handler, uint8_t order_priority)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_add_raw_irq_handler_with_order_priority=__weak_gpio_add_raw_irq_handler_with_order_priority")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_add_raw_irq_handler_with_order_priority=_weak_gpio_add_raw_irq_handler_with_order_priority")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_add_raw_irq_handler_with_order_priority_masked(
    uint32_t gpio_mask, irq_handler_t handler, uint8_t order_priority);
__attribute__((weak)) void gpio_add_raw_irq_handler_with_order_priority_masked(
    uint32_t gpio_mask, irq_handler_t handler, uint8_t order_priority)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_add_raw_irq_handler_with_order_priority_masked(
    uint32_t gpio_mask, irq_handler_t handler, uint8_t order_priority)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_add_raw_irq_handler_with_order_priority_masked=__weak_gpio_add_raw_irq_handler_with_order_priority_masked")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_add_raw_irq_handler_with_order_priority_masked=_weak_gpio_add_raw_irq_handler_with_order_priority_masked")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_add_raw_irq_handler_with_order_priority_masked64(
    uint64_t gpio_mask, irq_handler_t handler, uint8_t order_priority);
__attribute__((weak)) void
gpio_add_raw_irq_handler_with_order_priority_masked64(uint64_t gpio_mask,
                                                      irq_handler_t handler,
                                                      uint8_t order_priority)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_add_raw_irq_handler_with_order_priority_masked64(
    uint64_t gpio_mask, irq_handler_t handler, uint8_t order_priority)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_add_raw_irq_handler_with_order_priority_masked64=__weak_gpio_add_raw_irq_handler_with_order_priority_masked64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_add_raw_irq_handler_with_order_priority_masked64=_weak_gpio_add_raw_irq_handler_with_order_priority_masked64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_assign_to_ns(uint gpio, bool ns);
__attribute__((weak)) void gpio_assign_to_ns(uint gpio, bool ns)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_assign_to_ns(uint gpio, bool ns)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_assign_to_ns=__weak_gpio_assign_to_ns")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:gpio_assign_to_ns=_weak_gpio_assign_to_ns")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_clr_mask(uint32_t mask);
__attribute__((weak)) void gpio_clr_mask(uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_clr_mask(uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_clr_mask=__weak_gpio_clr_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_clr_mask=_weak_gpio_clr_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_clr_mask64(uint64_t mask);
__attribute__((weak)) void gpio_clr_mask64(uint64_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_clr_mask64(uint64_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_clr_mask64=__weak_gpio_clr_mask64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_clr_mask64=_weak_gpio_clr_mask64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_clr_mask_n(uint n, uint32_t mask);
__attribute__((weak)) void gpio_clr_mask_n(uint n, uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_clr_mask_n(uint n, uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_clr_mask_n=__weak_gpio_clr_mask_n")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_clr_mask_n=_weak_gpio_clr_mask_n")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_debug_pins_init(void);
__attribute__((weak)) void gpio_debug_pins_init(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_debug_pins_init(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_debug_pins_init=__weak_gpio_debug_pins_init")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:gpio_debug_pins_init=_weak_gpio_debug_pins_init")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_deinit(uint gpio);
__attribute__((weak)) void gpio_deinit(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_deinit(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_deinit=__weak_gpio_deinit")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_deinit=_weak_gpio_deinit")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_disable_pulls(uint gpio);
__attribute__((weak)) void gpio_disable_pulls(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_disable_pulls(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_gpio_disable_pulls=__weak_gpio_disable_pulls")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:gpio_disable_pulls=_weak_gpio_disable_pulls")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool gpio_get(uint gpio);
__attribute__((weak)) bool gpio_get(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_gpio_get(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_get=__weak_gpio_get")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_get=_weak_gpio_get")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t gpio_get_all(void);
__attribute__((weak)) uint32_t gpio_get_all(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_gpio_get_all(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_get_all=__weak_gpio_get_all")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_get_all=_weak_gpio_get_all")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint64_t gpio_get_all64(void);
__attribute__((weak)) uint64_t gpio_get_all64(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint64_t _weak_gpio_get_all64(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_get_all64=__weak_gpio_get_all64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_get_all64=_weak_gpio_get_all64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint gpio_get_dir(uint gpio);
__attribute__((weak)) uint gpio_get_dir(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_gpio_get_dir(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_get_dir=__weak_gpio_get_dir")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_get_dir=_weak_gpio_get_dir")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" enum gpio_drive_strength gpio_get_drive_strength(uint gpio);
__attribute__((weak)) enum gpio_drive_strength gpio_get_drive_strength(
    uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" enum gpio_drive_strength _weak_gpio_get_drive_strength(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_get_drive_strength=__weak_gpio_get_drive_strength")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_get_drive_strength=_weak_gpio_get_drive_strength")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" gpio_function_t gpio_get_function(uint gpio);
__attribute__((weak)) gpio_function_t gpio_get_function(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" gpio_function_t _weak_gpio_get_function(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_get_function=__weak_gpio_get_function")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:gpio_get_function=_weak_gpio_get_function")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t gpio_get_irq_event_mask(uint gpio);
__attribute__((weak)) uint32_t gpio_get_irq_event_mask(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_gpio_get_irq_event_mask(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_get_irq_event_mask=__weak_gpio_get_irq_event_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_get_irq_event_mask=_weak_gpio_get_irq_event_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool gpio_get_out_level(uint gpio);
__attribute__((weak)) bool gpio_get_out_level(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_gpio_get_out_level(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_gpio_get_out_level=__weak_gpio_get_out_level")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:gpio_get_out_level=_weak_gpio_get_out_level")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" enum gpio_slew_rate gpio_get_slew_rate(uint gpio);
__attribute__((weak)) enum gpio_slew_rate gpio_get_slew_rate(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" enum gpio_slew_rate _weak_gpio_get_slew_rate(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_gpio_get_slew_rate=__weak_gpio_get_slew_rate")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:gpio_get_slew_rate=_weak_gpio_get_slew_rate")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_init(uint gpio);
__attribute__((weak)) void gpio_init(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_init(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_init=__weak_gpio_init")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_init=_weak_gpio_init")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_init_mask(uint gpio_mask);
__attribute__((weak)) void gpio_init_mask(uint gpio_mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_init_mask(uint gpio_mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_init_mask=__weak_gpio_init_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_init_mask=_weak_gpio_init_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool gpio_is_dir_out(uint gpio);
__attribute__((weak)) bool gpio_is_dir_out(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_gpio_is_dir_out(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_is_dir_out=__weak_gpio_is_dir_out")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_is_dir_out=_weak_gpio_is_dir_out")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool gpio_is_input_hysteresis_enabled(uint gpio);
__attribute__((weak)) bool gpio_is_input_hysteresis_enabled(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_gpio_is_input_hysteresis_enabled(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_is_input_hysteresis_enabled=__weak_gpio_is_input_hysteresis_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_is_input_hysteresis_enabled=_weak_gpio_is_input_hysteresis_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool gpio_is_pulled_down(uint gpio);
__attribute__((weak)) bool gpio_is_pulled_down(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_gpio_is_pulled_down(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_gpio_is_pulled_down=__weak_gpio_is_pulled_down")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:gpio_is_pulled_down=_weak_gpio_is_pulled_down")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool gpio_is_pulled_up(uint gpio);
__attribute__((weak)) bool gpio_is_pulled_up(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_gpio_is_pulled_up(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_is_pulled_up=__weak_gpio_is_pulled_up")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:gpio_is_pulled_up=_weak_gpio_is_pulled_up")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_pull_down(uint gpio);
__attribute__((weak)) void gpio_pull_down(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_pull_down(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_pull_down=__weak_gpio_pull_down")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_pull_down=_weak_gpio_pull_down")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_pull_up(uint gpio);
__attribute__((weak)) void gpio_pull_up(uint gpio)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_pull_up(uint gpio)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_pull_up=__weak_gpio_pull_up")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_pull_up=_weak_gpio_pull_up")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_put(uint gpio, bool value);
__attribute__((weak)) void gpio_put(uint gpio, bool value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_put(uint gpio, bool value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_put=__weak_gpio_put")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_put=_weak_gpio_put")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_put_all(uint32_t value);
__attribute__((weak)) void gpio_put_all(uint32_t value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_put_all(uint32_t value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_put_all=__weak_gpio_put_all")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_put_all=_weak_gpio_put_all")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_put_all64(uint64_t value);
__attribute__((weak)) void gpio_put_all64(uint64_t value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_put_all64(uint64_t value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_put_all64=__weak_gpio_put_all64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_put_all64=_weak_gpio_put_all64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_put_masked(uint32_t mask, uint32_t value);
__attribute__((weak)) void gpio_put_masked(uint32_t mask, uint32_t value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_put_masked(uint32_t mask, uint32_t value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_put_masked=__weak_gpio_put_masked")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_put_masked=_weak_gpio_put_masked")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_put_masked64(uint64_t mask, uint64_t value);
__attribute__((weak)) void gpio_put_masked64(uint64_t mask, uint64_t value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_put_masked64(uint64_t mask, uint64_t value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_put_masked64=__weak_gpio_put_masked64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:gpio_put_masked64=_weak_gpio_put_masked64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_put_masked_n(uint n, uint32_t mask, uint32_t value);
__attribute__((weak)) void gpio_put_masked_n(uint n, uint32_t mask,
                                             uint32_t value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_put_masked_n(uint n, uint32_t mask, uint32_t value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_put_masked_n=__weak_gpio_put_masked_n")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:gpio_put_masked_n=_weak_gpio_put_masked_n")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_remove_raw_irq_handler(uint gpio, irq_handler_t handler);
__attribute__((weak)) void gpio_remove_raw_irq_handler(uint gpio,
                                                       irq_handler_t handler)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_remove_raw_irq_handler(uint gpio,
                                                  irq_handler_t handler)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_remove_raw_irq_handler=__weak_gpio_remove_raw_irq_handler")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_remove_raw_irq_handler=_weak_gpio_remove_raw_irq_handler")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_remove_raw_irq_handler_masked(uint32_t gpio_mask,
                                                   irq_handler_t handler);
__attribute__((weak)) void gpio_remove_raw_irq_handler_masked(
    uint32_t gpio_mask, irq_handler_t handler)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_remove_raw_irq_handler_masked(uint32_t gpio_mask,
                                                         irq_handler_t handler)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_remove_raw_irq_handler_masked=__weak_gpio_remove_raw_irq_handler_masked")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_remove_raw_irq_handler_masked=_weak_gpio_remove_raw_irq_handler_masked")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_remove_raw_irq_handler_masked64(uint64_t gpio_mask,
                                                     irq_handler_t handler);
__attribute__((weak)) void gpio_remove_raw_irq_handler_masked64(
    uint64_t gpio_mask, irq_handler_t handler)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_remove_raw_irq_handler_masked64(
    uint64_t gpio_mask, irq_handler_t handler)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_remove_raw_irq_handler_masked64=__weak_gpio_remove_raw_irq_handler_masked64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_remove_raw_irq_handler_masked64=_weak_gpio_remove_raw_irq_handler_masked64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_dir(uint gpio, bool out);
__attribute__((weak)) void gpio_set_dir(uint gpio, bool out)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_dir(uint gpio, bool out)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_set_dir=__weak_gpio_set_dir")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_set_dir=_weak_gpio_set_dir")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_dir_all_bits(uint32_t values);
__attribute__((weak)) void gpio_set_dir_all_bits(uint32_t values)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_dir_all_bits(uint32_t values)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_dir_all_bits=__weak_gpio_set_dir_all_bits")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_dir_all_bits=_weak_gpio_set_dir_all_bits")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_dir_all_bits64(uint64_t values);
__attribute__((weak)) void gpio_set_dir_all_bits64(uint64_t values)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_dir_all_bits64(uint64_t values)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_dir_all_bits64=__weak_gpio_set_dir_all_bits64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_dir_all_bits64=_weak_gpio_set_dir_all_bits64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_dir_in_masked(uint32_t mask);
__attribute__((weak)) void gpio_set_dir_in_masked(uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_dir_in_masked(uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_dir_in_masked=__weak_gpio_set_dir_in_masked")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_dir_in_masked=_weak_gpio_set_dir_in_masked")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_dir_in_masked64(uint64_t mask);
__attribute__((weak)) void gpio_set_dir_in_masked64(uint64_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_dir_in_masked64(uint64_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_dir_in_masked64=__weak_gpio_set_dir_in_masked64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_dir_in_masked64=_weak_gpio_set_dir_in_masked64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_dir_masked(uint32_t mask, uint32_t value);
__attribute__((weak)) void gpio_set_dir_masked(uint32_t mask, uint32_t value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_dir_masked(uint32_t mask, uint32_t value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_gpio_set_dir_masked=__weak_gpio_set_dir_masked")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:gpio_set_dir_masked=_weak_gpio_set_dir_masked")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_dir_masked64(uint64_t mask, uint64_t value);
__attribute__((weak)) void gpio_set_dir_masked64(uint64_t mask, uint64_t value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_dir_masked64(uint64_t mask, uint64_t value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_dir_masked64=__weak_gpio_set_dir_masked64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_dir_masked64=_weak_gpio_set_dir_masked64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_dir_out_masked(uint32_t mask);
__attribute__((weak)) void gpio_set_dir_out_masked(uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_dir_out_masked(uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_dir_out_masked=__weak_gpio_set_dir_out_masked")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_dir_out_masked=_weak_gpio_set_dir_out_masked")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_dir_out_masked64(uint64_t mask);
__attribute__((weak)) void gpio_set_dir_out_masked64(uint64_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_dir_out_masked64(uint64_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_dir_out_masked64=__weak_gpio_set_dir_out_masked64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_dir_out_masked64=_weak_gpio_set_dir_out_masked64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_dormant_irq_enabled(uint gpio, uint32_t event_mask,
                                             bool enabled);
__attribute__((weak)) void gpio_set_dormant_irq_enabled(uint gpio,
                                                        uint32_t event_mask,
                                                        bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_dormant_irq_enabled(uint gpio,
                                                   uint32_t event_mask,
                                                   bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_dormant_irq_enabled=__weak_gpio_set_dormant_irq_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_dormant_irq_enabled=_weak_gpio_set_dormant_irq_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_drive_strength(uint gpio,
                                        enum gpio_drive_strength drive);
__attribute__((weak)) void gpio_set_drive_strength(
    uint gpio, enum gpio_drive_strength drive)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_drive_strength(uint gpio,
                                              enum gpio_drive_strength drive)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_drive_strength=__weak_gpio_set_drive_strength")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_drive_strength=_weak_gpio_set_drive_strength")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_function(uint gpio, gpio_function_t fn);
__attribute__((weak)) void gpio_set_function(uint gpio, gpio_function_t fn)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_function(uint gpio, gpio_function_t fn)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_set_function=__weak_gpio_set_function")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:gpio_set_function=_weak_gpio_set_function")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_function_masked(uint32_t gpio_mask,
                                         gpio_function_t fn);
__attribute__((weak)) void gpio_set_function_masked(uint32_t gpio_mask,
                                                    gpio_function_t fn)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_function_masked(uint32_t gpio_mask,
                                               gpio_function_t fn)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_function_masked=__weak_gpio_set_function_masked")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_function_masked=_weak_gpio_set_function_masked")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_function_masked64(uint64_t gpio_mask,
                                           gpio_function_t fn);
__attribute__((weak)) void gpio_set_function_masked64(uint64_t gpio_mask,
                                                      gpio_function_t fn)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_function_masked64(uint64_t gpio_mask,
                                                 gpio_function_t fn)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_function_masked64=__weak_gpio_set_function_masked64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_function_masked64=_weak_gpio_set_function_masked64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_inover(uint gpio, uint value);
__attribute__((weak)) void gpio_set_inover(uint gpio, uint value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_inover(uint gpio, uint value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_set_inover=__weak_gpio_set_inover")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_set_inover=_weak_gpio_set_inover")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_input_enabled(uint gpio, bool enabled);
__attribute__((weak)) void gpio_set_input_enabled(uint gpio, bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_input_enabled(uint gpio, bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_input_enabled=__weak_gpio_set_input_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_input_enabled=_weak_gpio_set_input_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_input_hysteresis_enabled(uint gpio, bool enabled);
__attribute__((weak)) void gpio_set_input_hysteresis_enabled(uint gpio,
                                                             bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_input_hysteresis_enabled(uint gpio, bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_input_hysteresis_enabled=__weak_gpio_set_input_hysteresis_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_input_hysteresis_enabled=_weak_gpio_set_input_hysteresis_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_irq_callback(gpio_irq_callback_t callback);
__attribute__((weak)) void gpio_set_irq_callback(gpio_irq_callback_t callback)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_irq_callback(gpio_irq_callback_t callback)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_irq_callback=__weak_gpio_set_irq_callback")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_irq_callback=_weak_gpio_set_irq_callback")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_irq_enabled(uint gpio, uint32_t event_mask,
                                     bool enabled);
__attribute__((weak)) void gpio_set_irq_enabled(uint gpio, uint32_t event_mask,
                                                bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_irq_enabled(uint gpio, uint32_t event_mask,
                                           bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_irq_enabled=__weak_gpio_set_irq_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:gpio_set_irq_enabled=_weak_gpio_set_irq_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_irq_enabled_with_callback(
    uint gpio, uint32_t event_mask, bool enabled, gpio_irq_callback_t callback);
__attribute__((weak)) void gpio_set_irq_enabled_with_callback(
    uint gpio, uint32_t event_mask, bool enabled, gpio_irq_callback_t callback)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_irq_enabled_with_callback(
    uint gpio, uint32_t event_mask, bool enabled, gpio_irq_callback_t callback)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_gpio_set_irq_enabled_with_callback=__weak_gpio_set_irq_enabled_with_callback")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:gpio_set_irq_enabled_with_callback=_weak_gpio_set_irq_enabled_with_callback")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_irqover(uint gpio, uint value);
__attribute__((weak)) void gpio_set_irqover(uint gpio, uint value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_irqover(uint gpio, uint value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_set_irqover=__weak_gpio_set_irqover")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:gpio_set_irqover=_weak_gpio_set_irqover")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_mask(uint32_t mask);
__attribute__((weak)) void gpio_set_mask(uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_mask(uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_set_mask=__weak_gpio_set_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_set_mask=_weak_gpio_set_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_mask64(uint64_t mask);
__attribute__((weak)) void gpio_set_mask64(uint64_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_mask64(uint64_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_set_mask64=__weak_gpio_set_mask64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_set_mask64=_weak_gpio_set_mask64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_mask_n(uint n, uint32_t mask);
__attribute__((weak)) void gpio_set_mask_n(uint n, uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_mask_n(uint n, uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_set_mask_n=__weak_gpio_set_mask_n")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_set_mask_n=_weak_gpio_set_mask_n")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_oeover(uint gpio, uint value);
__attribute__((weak)) void gpio_set_oeover(uint gpio, uint value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_oeover(uint gpio, uint value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_set_oeover=__weak_gpio_set_oeover")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_set_oeover=_weak_gpio_set_oeover")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_outover(uint gpio, uint value);
__attribute__((weak)) void gpio_set_outover(uint gpio, uint value)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_outover(uint gpio, uint value)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_set_outover=__weak_gpio_set_outover")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:gpio_set_outover=_weak_gpio_set_outover")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_pulls(uint gpio, bool up, bool down);
__attribute__((weak)) void gpio_set_pulls(uint gpio, bool up, bool down)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_pulls(uint gpio, bool up, bool down)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_set_pulls=__weak_gpio_set_pulls")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_set_pulls=_weak_gpio_set_pulls")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_set_slew_rate(uint gpio, enum gpio_slew_rate slew);
__attribute__((weak)) void gpio_set_slew_rate(uint gpio,
                                              enum gpio_slew_rate slew)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_set_slew_rate(uint gpio, enum gpio_slew_rate slew)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_gpio_set_slew_rate=__weak_gpio_set_slew_rate")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:gpio_set_slew_rate=_weak_gpio_set_slew_rate")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_xor_mask(uint32_t mask);
__attribute__((weak)) void gpio_xor_mask(uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_xor_mask(uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_gpio_xor_mask=__weak_gpio_xor_mask")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_xor_mask=_weak_gpio_xor_mask")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_xor_mask64(uint64_t mask);
__attribute__((weak)) void gpio_xor_mask64(uint64_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_xor_mask64(uint64_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_xor_mask64=__weak_gpio_xor_mask64")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_xor_mask64=_weak_gpio_xor_mask64")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void gpio_xor_mask_n(uint n, uint32_t mask);
__attribute__((weak)) void gpio_xor_mask_n(uint n, uint32_t mask)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_gpio_xor_mask_n(uint n, uint32_t mask)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_gpio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_gpio_xor_mask_n=__weak_gpio_xor_mask_n")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:gpio_xor_mask_n=_weak_gpio_xor_mask_n")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool check_sys_clock_hz(uint32_t freq_hz, uint* vco_freq_out,
                                   uint* post_div1_out, uint* post_div2_out);
__attribute__((weak)) bool check_sys_clock_hz(uint32_t freq_hz,
                                              uint* vco_freq_out,
                                              uint* post_div1_out,
                                              uint* post_div2_out)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_check_sys_clock_hz(uint32_t freq_hz, uint* vco_freq_out,
                                         uint* post_div1_out,
                                         uint* post_div2_out)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_check_sys_clock_hz=__weak_check_sys_clock_hz")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:check_sys_clock_hz=_weak_check_sys_clock_hz")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool check_sys_clock_khz(uint32_t freq_khz, uint* vco_freq_out,
                                    uint* post_div1_out, uint* post_div2_out);
__attribute__((weak)) bool check_sys_clock_khz(uint32_t freq_khz,
                                               uint* vco_freq_out,
                                               uint* post_div1_out,
                                               uint* post_div2_out)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_check_sys_clock_khz(uint32_t freq_khz, uint* vco_freq_out,
                                          uint* post_div1_out,
                                          uint* post_div2_out)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_check_sys_clock_khz=__weak_check_sys_clock_khz")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:check_sys_clock_khz=_weak_check_sys_clock_khz")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool clock_configure(clock_handle_t clock, uint32_t src,
                                uint32_t auxsrc, uint32_t src_freq,
                                uint32_t freq);
__attribute__((weak)) bool clock_configure(clock_handle_t clock, uint32_t src,
                                           uint32_t auxsrc, uint32_t src_freq,
                                           uint32_t freq)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_clock_configure(clock_handle_t clock, uint32_t src,
                                      uint32_t auxsrc, uint32_t src_freq,
                                      uint32_t freq)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_clock_configure=__weak_clock_configure")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:clock_configure=_weak_clock_configure")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool clock_configure_gpin(clock_handle_t clock, uint gpio,
                                     uint32_t src_freq, uint32_t freq);
__attribute__((weak)) bool clock_configure_gpin(clock_handle_t clock, uint gpio,
                                                uint32_t src_freq,
                                                uint32_t freq)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_clock_configure_gpin(clock_handle_t clock, uint gpio,
                                           uint32_t src_freq, uint32_t freq)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_clock_configure_gpin=__weak_clock_configure_gpin")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:clock_configure_gpin=_weak_clock_configure_gpin")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void clock_configure_int_divider(clock_handle_t clock, uint32_t src,
                                            uint32_t auxsrc, uint32_t src_freq,
                                            uint32_t int_divider);
__attribute__((weak)) void clock_configure_int_divider(clock_handle_t clock,
                                                       uint32_t src,
                                                       uint32_t auxsrc,
                                                       uint32_t src_freq,
                                                       uint32_t int_divider)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_clock_configure_int_divider(clock_handle_t clock,
                                                  uint32_t src, uint32_t auxsrc,
                                                  uint32_t src_freq,
                                                  uint32_t int_divider)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_clock_configure_int_divider=__weak_clock_configure_int_divider")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:clock_configure_int_divider=_weak_clock_configure_int_divider")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void clock_configure_undivided(clock_handle_t clock, uint32_t src,
                                          uint32_t auxsrc, uint32_t src_freq);
__attribute__((weak)) void clock_configure_undivided(clock_handle_t clock,
                                                     uint32_t src,
                                                     uint32_t auxsrc,
                                                     uint32_t src_freq)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_clock_configure_undivided(clock_handle_t clock,
                                                uint32_t src, uint32_t auxsrc,
                                                uint32_t src_freq)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_clock_configure_undivided=__weak_clock_configure_undivided")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:clock_configure_undivided=_weak_clock_configure_undivided")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t clock_get_hz(clock_handle_t clock);
__attribute__((weak)) uint32_t clock_get_hz(clock_handle_t clock)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_clock_get_hz(clock_handle_t clock)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_clock_get_hz=__weak_clock_get_hz")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:clock_get_hz=_weak_clock_get_hz")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void clock_gpio_init(uint gpio, uint src, float div);
__attribute__((weak)) void clock_gpio_init(uint gpio, uint src, float div)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_clock_gpio_init(uint gpio, uint src, float div)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_clock_gpio_init=__weak_clock_gpio_init")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:clock_gpio_init=_weak_clock_gpio_init")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void clock_gpio_init_int_frac(uint gpio, uint src, uint32_t div_int,
                                         uint8_t div_frac);
__attribute__((weak)) void clock_gpio_init_int_frac(uint gpio, uint src,
                                                    uint32_t div_int,
                                                    uint8_t div_frac)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_clock_gpio_init_int_frac(uint gpio, uint src,
                                               uint32_t div_int,
                                               uint8_t div_frac)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_clock_gpio_init_int_frac=__weak_clock_gpio_init_int_frac")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:clock_gpio_init_int_frac=_weak_clock_gpio_init_int_frac")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void clock_set_reported_hz(clock_handle_t clock, uint hz);
__attribute__((weak)) void clock_set_reported_hz(clock_handle_t clock, uint hz)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_clock_set_reported_hz(clock_handle_t clock, uint hz)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_clock_set_reported_hz=__weak_clock_set_reported_hz")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:clock_set_reported_hz=_weak_clock_set_reported_hz")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void clock_stop(clock_handle_t clock);
__attribute__((weak)) void clock_stop(clock_handle_t clock)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_clock_stop(clock_handle_t clock)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_clock_stop=__weak_clock_stop")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:clock_stop=_weak_clock_stop")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void clocks_enable_resus(resus_callback_t resus_callback);
__attribute__((weak)) void clocks_enable_resus(resus_callback_t resus_callback)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_clocks_enable_resus(resus_callback_t resus_callback)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_clocks_enable_resus=__weak_clocks_enable_resus")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:clocks_enable_resus=_weak_clocks_enable_resus")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t frequency_count_khz(uint src);
__attribute__((weak)) uint32_t frequency_count_khz(uint src)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_frequency_count_khz(uint src)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_frequency_count_khz=__weak_frequency_count_khz")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:frequency_count_khz=_weak_frequency_count_khz")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" float frequency_count_mhz(uint src);
__attribute__((weak)) float frequency_count_mhz(uint src)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" float _weak_frequency_count_mhz(uint src)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_frequency_count_mhz=__weak_frequency_count_mhz")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:frequency_count_mhz=_weak_frequency_count_mhz")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void set_sys_clock_48mhz(void);
__attribute__((weak)) void set_sys_clock_48mhz(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_set_sys_clock_48mhz(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_set_sys_clock_48mhz=__weak_set_sys_clock_48mhz")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:set_sys_clock_48mhz=_weak_set_sys_clock_48mhz")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool set_sys_clock_hz(uint32_t freq_hz, bool required);
__attribute__((weak)) bool set_sys_clock_hz(uint32_t freq_hz, bool required)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_set_sys_clock_hz(uint32_t freq_hz, bool required)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_set_sys_clock_hz=__weak_set_sys_clock_hz")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:set_sys_clock_hz=_weak_set_sys_clock_hz")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool set_sys_clock_khz(uint32_t freq_khz, bool required);
__attribute__((weak)) bool set_sys_clock_khz(uint32_t freq_khz, bool required)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_set_sys_clock_khz(uint32_t freq_khz, bool required)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_set_sys_clock_khz=__weak_set_sys_clock_khz")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:set_sys_clock_khz=_weak_set_sys_clock_khz")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void set_sys_clock_pll(uint32_t vco_freq, uint post_div1,
                                  uint post_div2);
__attribute__((weak)) void set_sys_clock_pll(uint32_t vco_freq, uint post_div1,
                                             uint post_div2)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_set_sys_clock_pll(uint32_t vco_freq, uint post_div1,
                                        uint post_div2)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The hardware_clocks library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_set_sys_clock_pll=__weak_set_sys_clock_pll")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:set_sys_clock_pll=_weak_set_sys_clock_pll")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int64_t absolute_time_diff_us(absolute_time_t from,
                                         absolute_time_t to);
__attribute__((weak)) int64_t absolute_time_diff_us(absolute_time_t from,
                                                    absolute_time_t to)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int64_t _weak_absolute_time_diff_us(absolute_time_t from,
                                               absolute_time_t to)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_absolute_time_diff_us=__weak_absolute_time_diff_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:absolute_time_diff_us=_weak_absolute_time_diff_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" absolute_time_t absolute_time_min(absolute_time_t a,
                                             absolute_time_t b);
__attribute__((weak)) absolute_time_t absolute_time_min(absolute_time_t a,
                                                        absolute_time_t b)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" absolute_time_t _weak_absolute_time_min(absolute_time_t a,
                                                   absolute_time_t b)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_absolute_time_min=__weak_absolute_time_min")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:absolute_time_min=_weak_absolute_time_min")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_id_t add_alarm_at(absolute_time_t time,
                                   alarm_callback_t callback, void* user_data,
                                   bool fire_if_past);
__attribute__((weak)) alarm_id_t add_alarm_at(absolute_time_t time,
                                              alarm_callback_t callback,
                                              void* user_data,
                                              bool fire_if_past)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_id_t _weak_add_alarm_at(absolute_time_t time,
                                         alarm_callback_t callback,
                                         void* user_data, bool fire_if_past)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_add_alarm_at=__weak_add_alarm_at")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:add_alarm_at=_weak_add_alarm_at")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_id_t add_alarm_in_ms(uint32_t ms, alarm_callback_t callback,
                                      void* user_data, bool fire_if_past);
__attribute__((weak)) alarm_id_t add_alarm_in_ms(uint32_t ms,
                                                 alarm_callback_t callback,
                                                 void* user_data,
                                                 bool fire_if_past)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_id_t _weak_add_alarm_in_ms(uint32_t ms,
                                            alarm_callback_t callback,
                                            void* user_data, bool fire_if_past)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_add_alarm_in_ms=__weak_add_alarm_in_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:add_alarm_in_ms=_weak_add_alarm_in_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_id_t add_alarm_in_us(uint64_t us, alarm_callback_t callback,
                                      void* user_data, bool fire_if_past);
__attribute__((weak)) alarm_id_t add_alarm_in_us(uint64_t us,
                                                 alarm_callback_t callback,
                                                 void* user_data,
                                                 bool fire_if_past)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_id_t _weak_add_alarm_in_us(uint64_t us,
                                            alarm_callback_t callback,
                                            void* user_data, bool fire_if_past)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_add_alarm_in_us=__weak_add_alarm_in_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:add_alarm_in_us=_weak_add_alarm_in_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool add_repeating_timer_ms(int32_t delay_ms,
                                       repeating_timer_callback_t callback,
                                       void* user_data, repeating_timer_t* out);
__attribute__((weak)) bool add_repeating_timer_ms(
    int32_t delay_ms, repeating_timer_callback_t callback, void* user_data,
    repeating_timer_t* out)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_add_repeating_timer_ms(
    int32_t delay_ms, repeating_timer_callback_t callback, void* user_data,
    repeating_timer_t* out)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_add_repeating_timer_ms=__weak_add_repeating_timer_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:add_repeating_timer_ms=_weak_add_repeating_timer_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool add_repeating_timer_us(int64_t delay_us,
                                       repeating_timer_callback_t callback,
                                       void* user_data, repeating_timer_t* out);
__attribute__((weak)) bool add_repeating_timer_us(
    int64_t delay_us, repeating_timer_callback_t callback, void* user_data,
    repeating_timer_t* out)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_add_repeating_timer_us(
    int64_t delay_us, repeating_timer_callback_t callback, void* user_data,
    repeating_timer_t* out)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_add_repeating_timer_us=__weak_add_repeating_timer_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:add_repeating_timer_us=_weak_add_repeating_timer_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_id_t alarm_pool_add_alarm_at(alarm_pool_t* pool,
                                              absolute_time_t time,
                                              alarm_callback_t callback,
                                              void* user_data,
                                              bool fire_if_past);
__attribute__((weak)) alarm_id_t alarm_pool_add_alarm_at(
    alarm_pool_t* pool, absolute_time_t time, alarm_callback_t callback,
    void* user_data, bool fire_if_past)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_id_t _weak_alarm_pool_add_alarm_at(alarm_pool_t* pool,
                                                    absolute_time_t time,
                                                    alarm_callback_t callback,
                                                    void* user_data,
                                                    bool fire_if_past)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_add_alarm_at=__weak_alarm_pool_add_alarm_at")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_add_alarm_at=_weak_alarm_pool_add_alarm_at")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_id_t alarm_pool_add_alarm_at_force_in_context(
    alarm_pool_t* pool, absolute_time_t time, alarm_callback_t callback,
    void* user_data);
__attribute__((weak)) alarm_id_t alarm_pool_add_alarm_at_force_in_context(
    alarm_pool_t* pool, absolute_time_t time, alarm_callback_t callback,
    void* user_data)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_id_t _weak_alarm_pool_add_alarm_at_force_in_context(
    alarm_pool_t* pool, absolute_time_t time, alarm_callback_t callback,
    void* user_data)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_add_alarm_at_force_in_context=__weak_alarm_pool_add_alarm_at_force_in_context")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_add_alarm_at_force_in_context=_weak_alarm_pool_add_alarm_at_force_in_context")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_id_t alarm_pool_add_alarm_in_ms(alarm_pool_t* pool,
                                                 uint32_t ms,
                                                 alarm_callback_t callback,
                                                 void* user_data,
                                                 bool fire_if_past);
__attribute__((weak)) alarm_id_t alarm_pool_add_alarm_in_ms(
    alarm_pool_t* pool, uint32_t ms, alarm_callback_t callback, void* user_data,
    bool fire_if_past)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_id_t _weak_alarm_pool_add_alarm_in_ms(
    alarm_pool_t* pool, uint32_t ms, alarm_callback_t callback, void* user_data,
    bool fire_if_past)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_add_alarm_in_ms=__weak_alarm_pool_add_alarm_in_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_add_alarm_in_ms=_weak_alarm_pool_add_alarm_in_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_id_t alarm_pool_add_alarm_in_us(alarm_pool_t* pool,
                                                 uint64_t us,
                                                 alarm_callback_t callback,
                                                 void* user_data,
                                                 bool fire_if_past);
__attribute__((weak)) alarm_id_t alarm_pool_add_alarm_in_us(
    alarm_pool_t* pool, uint64_t us, alarm_callback_t callback, void* user_data,
    bool fire_if_past)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_id_t _weak_alarm_pool_add_alarm_in_us(
    alarm_pool_t* pool, uint64_t us, alarm_callback_t callback, void* user_data,
    bool fire_if_past)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_add_alarm_in_us=__weak_alarm_pool_add_alarm_in_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_add_alarm_in_us=_weak_alarm_pool_add_alarm_in_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool alarm_pool_add_repeating_timer_ms(
    alarm_pool_t* pool, int32_t delay_ms, repeating_timer_callback_t callback,
    void* user_data, repeating_timer_t* out);
__attribute__((weak)) bool alarm_pool_add_repeating_timer_ms(
    alarm_pool_t* pool, int32_t delay_ms, repeating_timer_callback_t callback,
    void* user_data, repeating_timer_t* out)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_alarm_pool_add_repeating_timer_ms(
    alarm_pool_t* pool, int32_t delay_ms, repeating_timer_callback_t callback,
    void* user_data, repeating_timer_t* out)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_add_repeating_timer_ms=__weak_alarm_pool_add_repeating_timer_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_add_repeating_timer_ms=_weak_alarm_pool_add_repeating_timer_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool alarm_pool_add_repeating_timer_us(
    alarm_pool_t* pool, int64_t delay_us, repeating_timer_callback_t callback,
    void* user_data, repeating_timer_t* out);
__attribute__((weak)) bool alarm_pool_add_repeating_timer_us(
    alarm_pool_t* pool, int64_t delay_us, repeating_timer_callback_t callback,
    void* user_data, repeating_timer_t* out)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_alarm_pool_add_repeating_timer_us(
    alarm_pool_t* pool, int64_t delay_us, repeating_timer_callback_t callback,
    void* user_data, repeating_timer_t* out)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_add_repeating_timer_us=__weak_alarm_pool_add_repeating_timer_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_add_repeating_timer_us=_weak_alarm_pool_add_repeating_timer_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool alarm_pool_cancel_alarm(alarm_pool_t* pool,
                                        alarm_id_t alarm_id);
__attribute__((weak)) bool alarm_pool_cancel_alarm(alarm_pool_t* pool,
                                                   alarm_id_t alarm_id)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_alarm_pool_cancel_alarm(alarm_pool_t* pool,
                                              alarm_id_t alarm_id)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_cancel_alarm=__weak_alarm_pool_cancel_alarm")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_cancel_alarm=_weak_alarm_pool_cancel_alarm")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint alarm_pool_core_num(alarm_pool_t* pool);
__attribute__((weak)) uint alarm_pool_core_num(alarm_pool_t* pool)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_alarm_pool_core_num(alarm_pool_t* pool)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_alarm_pool_core_num=__weak_alarm_pool_core_num")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:alarm_pool_core_num=_weak_alarm_pool_core_num")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_pool_t* alarm_pool_create(uint timer_alarm_num,
                                           uint max_timers);
__attribute__((weak)) alarm_pool_t* alarm_pool_create(uint timer_alarm_num,
                                                      uint max_timers)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_pool_t* _weak_alarm_pool_create(uint timer_alarm_num,
                                                 uint max_timers)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_alarm_pool_create=__weak_alarm_pool_create")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:alarm_pool_create=_weak_alarm_pool_create")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_pool_t* alarm_pool_create_on_timer(alarm_pool_timer_t* timer,
                                                    uint timer_alarm_num,
                                                    uint max_timers);
__attribute__((weak)) alarm_pool_t* alarm_pool_create_on_timer(
    alarm_pool_timer_t* timer, uint timer_alarm_num, uint max_timers)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_pool_t* _weak_alarm_pool_create_on_timer(
    alarm_pool_timer_t* timer, uint timer_alarm_num, uint max_timers)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_create_on_timer=__weak_alarm_pool_create_on_timer")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_create_on_timer=_weak_alarm_pool_create_on_timer")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_pool_t* alarm_pool_create_on_timer_with_unused_hardware_alarm(
    alarm_pool_timer_t* timer, uint max_timers);
__attribute__((weak)) alarm_pool_t*
alarm_pool_create_on_timer_with_unused_hardware_alarm(alarm_pool_timer_t* timer,
                                                      uint max_timers)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_pool_t*
_weak_alarm_pool_create_on_timer_with_unused_hardware_alarm(
    alarm_pool_timer_t* timer, uint max_timers)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_create_on_timer_with_unused_hardware_alarm=__weak_alarm_pool_create_on_timer_with_unused_hardware_alarm")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_create_on_timer_with_unused_hardware_alarm=_weak_alarm_pool_create_on_timer_with_unused_hardware_alarm")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_pool_t* alarm_pool_create_with_unused_hardware_alarm(
    uint max_timers);
__attribute__((weak)) alarm_pool_t*
alarm_pool_create_with_unused_hardware_alarm(uint max_timers)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_pool_t* _weak_alarm_pool_create_with_unused_hardware_alarm(
    uint max_timers)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_create_with_unused_hardware_alarm=__weak_alarm_pool_create_with_unused_hardware_alarm")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_create_with_unused_hardware_alarm=_weak_alarm_pool_create_with_unused_hardware_alarm")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void alarm_pool_destroy(alarm_pool_t* pool);
__attribute__((weak)) void alarm_pool_destroy(alarm_pool_t* pool)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_alarm_pool_destroy(alarm_pool_t* pool)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_alarm_pool_destroy=__weak_alarm_pool_destroy")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:alarm_pool_destroy=_weak_alarm_pool_destroy")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_pool_t* alarm_pool_get_default(void);
__attribute__((weak)) alarm_pool_t* alarm_pool_get_default(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_pool_t* _weak_alarm_pool_get_default(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_get_default=__weak_alarm_pool_get_default")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_get_default=_weak_alarm_pool_get_default")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_pool_timer_t* alarm_pool_get_default_timer(void);
__attribute__((weak)) alarm_pool_timer_t* alarm_pool_get_default_timer(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_pool_timer_t* _weak_alarm_pool_get_default_timer(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_get_default_timer=__weak_alarm_pool_get_default_timer")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_get_default_timer=_weak_alarm_pool_get_default_timer")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint alarm_pool_hardware_alarm_num(alarm_pool_t* pool);
__attribute__((weak)) uint alarm_pool_hardware_alarm_num(alarm_pool_t* pool)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_alarm_pool_hardware_alarm_num(alarm_pool_t* pool)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_hardware_alarm_num=__weak_alarm_pool_hardware_alarm_num")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_hardware_alarm_num=_weak_alarm_pool_hardware_alarm_num")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void alarm_pool_init_default(void);
__attribute__((weak)) void alarm_pool_init_default(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_alarm_pool_init_default(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_init_default=__weak_alarm_pool_init_default")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_init_default=_weak_alarm_pool_init_default")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int32_t alarm_pool_remaining_alarm_time_ms(alarm_pool_t* pool,
                                                      alarm_id_t alarm_id);
__attribute__((weak)) int32_t
alarm_pool_remaining_alarm_time_ms(alarm_pool_t* pool, alarm_id_t alarm_id)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int32_t _weak_alarm_pool_remaining_alarm_time_ms(alarm_pool_t* pool,
                                                            alarm_id_t alarm_id)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_remaining_alarm_time_ms=__weak_alarm_pool_remaining_alarm_time_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_remaining_alarm_time_ms=_weak_alarm_pool_remaining_alarm_time_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int64_t alarm_pool_remaining_alarm_time_us(alarm_pool_t* pool,
                                                      alarm_id_t alarm_id);
__attribute__((weak)) int64_t
alarm_pool_remaining_alarm_time_us(alarm_pool_t* pool, alarm_id_t alarm_id)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int64_t _weak_alarm_pool_remaining_alarm_time_us(alarm_pool_t* pool,
                                                            alarm_id_t alarm_id)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_remaining_alarm_time_us=__weak_alarm_pool_remaining_alarm_time_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_remaining_alarm_time_us=_weak_alarm_pool_remaining_alarm_time_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint alarm_pool_timer_alarm_num(alarm_pool_t* pool);
__attribute__((weak)) uint alarm_pool_timer_alarm_num(alarm_pool_t* pool)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint _weak_alarm_pool_timer_alarm_num(alarm_pool_t* pool)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_timer_alarm_num=__weak_alarm_pool_timer_alarm_num")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_timer_alarm_num=_weak_alarm_pool_timer_alarm_num")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" alarm_pool_timer_t* alarm_pool_timer_for_timer_num(uint timer_num);
__attribute__((weak)) alarm_pool_timer_t* alarm_pool_timer_for_timer_num(
    uint timer_num)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" alarm_pool_timer_t* _weak_alarm_pool_timer_for_timer_num(
    uint timer_num)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_alarm_pool_timer_for_timer_num=__weak_alarm_pool_timer_for_timer_num")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:alarm_pool_timer_for_timer_num=_weak_alarm_pool_timer_for_timer_num")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool best_effort_wfe_or_timeout(absolute_time_t timeout_timestamp);
__attribute__((weak)) bool best_effort_wfe_or_timeout(
    absolute_time_t timeout_timestamp)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_best_effort_wfe_or_timeout(
    absolute_time_t timeout_timestamp)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_best_effort_wfe_or_timeout=__weak_best_effort_wfe_or_timeout")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:best_effort_wfe_or_timeout=_weak_best_effort_wfe_or_timeout")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool cancel_alarm(alarm_id_t alarm_id);
__attribute__((weak)) bool cancel_alarm(alarm_id_t alarm_id)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_cancel_alarm(alarm_id_t alarm_id)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_cancel_alarm=__weak_cancel_alarm")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:cancel_alarm=_weak_cancel_alarm")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool cancel_repeating_timer(repeating_timer_t* timer);
__attribute__((weak)) bool cancel_repeating_timer(repeating_timer_t* timer)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_cancel_repeating_timer(repeating_timer_t* timer)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_cancel_repeating_timer=__weak_cancel_repeating_timer")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:cancel_repeating_timer=_weak_cancel_repeating_timer")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" absolute_time_t delayed_by_ms(const absolute_time_t t, uint32_t ms);
__attribute__((weak)) absolute_time_t delayed_by_ms(const absolute_time_t t,
                                                    uint32_t ms)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" absolute_time_t _weak_delayed_by_ms(const absolute_time_t t,
                                               uint32_t ms)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_delayed_by_ms=__weak_delayed_by_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:delayed_by_ms=_weak_delayed_by_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" absolute_time_t delayed_by_us(const absolute_time_t t, uint64_t us);
__attribute__((weak)) absolute_time_t delayed_by_us(const absolute_time_t t,
                                                    uint64_t us)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" absolute_time_t _weak_delayed_by_us(const absolute_time_t t,
                                               uint64_t us)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_delayed_by_us=__weak_delayed_by_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:delayed_by_us=_weak_delayed_by_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" absolute_time_t get_absolute_time(void);
__attribute__((weak)) absolute_time_t get_absolute_time(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" absolute_time_t _weak_get_absolute_time(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_get_absolute_time=__weak_get_absolute_time")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:get_absolute_time=_weak_get_absolute_time")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool is_at_the_end_of_time(absolute_time_t t);
__attribute__((weak)) bool is_at_the_end_of_time(absolute_time_t t)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_is_at_the_end_of_time(absolute_time_t t)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_is_at_the_end_of_time=__weak_is_at_the_end_of_time")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:is_at_the_end_of_time=_weak_is_at_the_end_of_time")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool is_nil_time(absolute_time_t t);
__attribute__((weak)) bool is_nil_time(absolute_time_t t)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_is_nil_time(absolute_time_t t)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_is_nil_time=__weak_is_nil_time")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:is_nil_time=_weak_is_nil_time")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" absolute_time_t make_timeout_time_ms(uint32_t ms);
__attribute__((weak)) absolute_time_t make_timeout_time_ms(uint32_t ms)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" absolute_time_t _weak_make_timeout_time_ms(uint32_t ms)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_make_timeout_time_ms=__weak_make_timeout_time_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:make_timeout_time_ms=_weak_make_timeout_time_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" absolute_time_t make_timeout_time_us(uint64_t us);
__attribute__((weak)) absolute_time_t make_timeout_time_us(uint64_t us)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" absolute_time_t _weak_make_timeout_time_us(uint64_t us)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_make_timeout_time_us=__weak_make_timeout_time_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:make_timeout_time_us=_weak_make_timeout_time_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int32_t remaining_alarm_time_ms(alarm_id_t alarm_id);
__attribute__((weak)) int32_t remaining_alarm_time_ms(alarm_id_t alarm_id)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int32_t _weak_remaining_alarm_time_ms(alarm_id_t alarm_id)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_remaining_alarm_time_ms=__weak_remaining_alarm_time_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:remaining_alarm_time_ms=_weak_remaining_alarm_time_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int64_t remaining_alarm_time_us(alarm_id_t alarm_id);
__attribute__((weak)) int64_t remaining_alarm_time_us(alarm_id_t alarm_id)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int64_t _weak_remaining_alarm_time_us(alarm_id_t alarm_id)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_remaining_alarm_time_us=__weak_remaining_alarm_time_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:remaining_alarm_time_us=_weak_remaining_alarm_time_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void runtime_init_default_alarm_pool(void);
__attribute__((weak)) void runtime_init_default_alarm_pool(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_runtime_init_default_alarm_pool(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_runtime_init_default_alarm_pool=__weak_runtime_init_default_alarm_pool")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:runtime_init_default_alarm_pool=_weak_runtime_init_default_alarm_pool")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sleep_ms(uint32_t ms);
__attribute__((weak)) void sleep_ms(uint32_t ms)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sleep_ms(uint32_t ms)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_sleep_ms=__weak_sleep_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:sleep_ms=_weak_sleep_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sleep_until(absolute_time_t target);
__attribute__((weak)) void sleep_until(absolute_time_t target)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sleep_until(absolute_time_t target)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_sleep_until=__weak_sleep_until")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:sleep_until=_weak_sleep_until")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void sleep_us(uint64_t us);
__attribute__((weak)) void sleep_us(uint64_t us)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_sleep_us(uint64_t us)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_sleep_us=__weak_sleep_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:sleep_us=_weak_sleep_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t to_ms_since_boot(absolute_time_t t);
__attribute__((weak)) uint32_t to_ms_since_boot(absolute_time_t t)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_to_ms_since_boot(absolute_time_t t)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_to_ms_since_boot=__weak_to_ms_since_boot")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:to_ms_since_boot=_weak_to_ms_since_boot")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" uint32_t us_to_ms(uint64_t us);
__attribute__((weak)) uint32_t us_to_ms(uint64_t us)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" uint32_t _weak_us_to_ms(uint64_t us)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_time library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_us_to_ms=__weak_us_to_ms")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:us_to_ms=_weak_us_to_ms")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int getchar_timeout_us(uint32_t timeout_us);
__attribute__((weak)) int getchar_timeout_us(uint32_t timeout_us)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_getchar_timeout_us(uint32_t timeout_us)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_stdio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_getchar_timeout_us=__weak_getchar_timeout_us")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:getchar_timeout_us=_weak_getchar_timeout_us")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int putchar_raw(int c);
__attribute__((weak)) int putchar_raw(int c)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_putchar_raw(int c)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_stdio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_putchar_raw=__weak_putchar_raw")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:putchar_raw=_weak_putchar_raw")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int puts_raw(const char* s);
__attribute__((weak)) int puts_raw(const char* s)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_puts_raw(const char* s)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_stdio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_puts_raw=__weak_puts_raw")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:puts_raw=_weak_puts_raw")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool stdio_deinit_all(void);
__attribute__((weak)) bool stdio_deinit_all(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_stdio_deinit_all(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_stdio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_stdio_deinit_all=__weak_stdio_deinit_all")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:stdio_deinit_all=_weak_stdio_deinit_all")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void stdio_filter_driver(stdio_driver_t* driver);
__attribute__((weak)) void stdio_filter_driver(stdio_driver_t* driver)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_stdio_filter_driver(stdio_driver_t* driver)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_stdio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker, "/alternatename:_stdio_filter_driver=__weak_stdio_filter_driver")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker, "/alternatename:stdio_filter_driver=_weak_stdio_filter_driver")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void stdio_flush(void);
__attribute__((weak)) void stdio_flush(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_stdio_flush(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_stdio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_stdio_flush=__weak_stdio_flush")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:stdio_flush=_weak_stdio_flush")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int stdio_get_until(char* buf, int len, absolute_time_t until);
__attribute__((weak)) int stdio_get_until(char* buf, int len,
                                          absolute_time_t until)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_stdio_get_until(char* buf, int len, absolute_time_t until)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_stdio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_stdio_get_until=__weak_stdio_get_until")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:stdio_get_until=_weak_stdio_get_until")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" bool stdio_init_all(void);
__attribute__((weak)) bool stdio_init_all(void)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" bool _weak_stdio_init_all(void)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_stdio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, "/alternatename:_stdio_init_all=__weak_stdio_init_all")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, "/alternatename:stdio_init_all=_weak_stdio_init_all")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" int stdio_put_string(const char* s, int len, bool newline,
                                bool cr_translation);
__attribute__((weak)) int stdio_put_string(const char* s, int len, bool newline,
                                           bool cr_translation)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" int _weak_stdio_put_string(const char* s, int len, bool newline,
                                      bool cr_translation)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_stdio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment(linker, \
                "/alternatename:_stdio_put_string=__weak_stdio_put_string")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment(linker, \
                "/alternatename:stdio_put_string=_weak_stdio_put_string")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void stdio_set_driver_enabled(stdio_driver_t* driver, bool enabled);
__attribute__((weak)) void stdio_set_driver_enabled(stdio_driver_t* driver,
                                                    bool enabled)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_stdio_set_driver_enabled(stdio_driver_t* driver,
                                               bool enabled)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_stdio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_stdio_set_driver_enabled=__weak_stdio_set_driver_enabled")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:stdio_set_driver_enabled=_weak_stdio_set_driver_enabled")
#endif  // x86 or amd64
#endif  // _MSC_VER
// --------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)  // Compiler detection
extern "C" void stdio_set_translate_crlf(stdio_driver_t* driver,
                                         bool translate);
__attribute__((weak)) void stdio_set_translate_crlf(stdio_driver_t* driver,
                                                    bool translate)
#elif defined(_MSC_VER)  // Microsoft Visual C
extern "C" void _weak_stdio_set_translate_crlf(stdio_driver_t* driver,
                                               bool translate)
#else                    // Other compilers are not supported
#error "Unknown compiler."
#endif  // Compiler detection
{
  assert(false &&
         "Error : The pico_stdio library is missing in the link phase.");
}
#if defined(_MSC_VER)  // weak binding in MSVC must be after definition
#if defined(_M_IX86)   // for x86
#pragma comment( \
    linker,      \
    "/alternatename:_stdio_set_translate_crlf=__weak_stdio_set_translate_crlf")
#elif defined(_M_AMD64)  // for AMD64
#pragma comment( \
    linker,      \
    "/alternatename:stdio_set_translate_crlf=_weak_stdio_set_translate_crlf")
#endif  // x86 or amd64
#endif  // _MSC_VER

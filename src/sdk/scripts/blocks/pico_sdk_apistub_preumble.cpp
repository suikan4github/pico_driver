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

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
#pragma warning(default : 4716)
#endif  // _MSC_VER

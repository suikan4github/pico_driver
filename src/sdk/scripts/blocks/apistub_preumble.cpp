#if __has_include("pico/stdlib.h")  // Win/Linux
// Need for arm gcc.
typedef unsigned int uint;
#else  // Win/Linux
// Alternative include and definition for Unix/Win32
#include <stdint.h>
#include <stdlib.h>
// Alternate API definitions for Linux/Win.
#include "pico_api_alternate_defs.hpp"
#ifdef _MSC_VER  // MS Visual C++
typedef unsigned int uint;
#endif
#endif

#include <assert.h>
// Alternate API definitions for the Pico stub.
// To avoid the redefinition error, The pico header must not be included.

#include "pico_api_alternate_defs.hpp"

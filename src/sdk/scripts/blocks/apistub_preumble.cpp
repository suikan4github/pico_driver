#if __has_include("pico/stdlib.h")
// For Pico
#include "pico_sdk_headers.h"
#else
// Alternative include and definition for Unix/Win32
#include <stdint.h>
#include <stdlib.h>
/// @brief Alternate definition for Google Test build.
enum pio_fifo_join { a, b };
/// @brief Alternate definition for Google Test build.
enum gpio_drive_strength { c, d };
/// @brief Alternate definition for Google Test build.
enum gpio_slew_rate { e, f };
/// @brief Alternate definition for Google Test build.
enum pio_mov_status_type { g, h };

/// @brief Alternate definition for Google Test build.
typedef int stdio_driver_t;
/// @brief Alternate definition for Google Test build.
typedef int alarm_id_t;
/// @brief Alternate definition for Google Test build.
typedef int alarm_pool_t;
/// @brief Alternate definition for Google Test build.
typedef int alarm_pool_timer_t;
/// @brief Alternate definition for Google Test build.
typedef int repeating_timer_t;
/// @brief Alternate definition for Google Test build.
typedef int alarm_callback_t;
/// @brief Alternate definition for Google Test build.
typedef int repeating_timer_callback_t;
/// @brief Alternate definition for Google Test build.
typedef int gpio_irq_callback_t;
/// @brief Alternate definition for Google Test build.
typedef int irq_handler_t;
/// @brief Alternate definition for Google Test build.
typedef int resus_callback_t;
/// @brief Alternate definition for Google Test build.
typedef int pio_interrupt_source_t;
/// @brief Alternate definition for Google Test build.
typedef int absolute_time_t;
/// @brief Alternate definition for Google Test build.
typedef int i2c_inst_t;
/// @brief Alternate definition for Google Test build.
typedef int i2c_hw_t;
/// @brief Alternate definition for Google Test build.
typedef int gpio_function_t;
/// @brief Alternate definition for Google Test build.
typedef unsigned int PIO;
/// @brief Alternate definition for Google Test build.
typedef unsigned int pio_sm_config;
/// @brief Alternate definition for Google Test build.
typedef unsigned int clock_handle_t;
/// @brief Alternate definition for Google Test build.
typedef unsigned int pio_program_t;
#ifdef _MSC_VER
typedef unsigned int uint;
#endif
#endif
#include <assert.h>
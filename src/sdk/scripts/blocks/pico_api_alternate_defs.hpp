/*
 * This file is not to be included from the user program.
 *
 * Some of the rpp_driver code include this file. The contents
 * of this file is alternate type definition for Pico SDK.
 * These types are declared inside pico SDK. So, x86 build cannot use.
 */

#ifndef PICO_API_ALTERNATE_DEFS_HPP__
#define PICO_API_ALTERNATE_DEFS_HPP__

/// These dummy definition are for the Google Test.
/// for almost case, struct or class can be substituted with int.

/// In the case of the Arm GCC for Pico build, these dummy
/// definition will just let compiler shut up for apistub.cpp.
/// The functions inside apistub.cpp will never use the parameters
/// and return value. So, we can use dummy type. No affect to the
/// call sequence of stub.

/// @brief Alternate definition for Google Test build.
enum pio_fifo_join { a, b };
/// @brief Alternate definition for Google Test build.
enum gpio_drive_strength { c, d };
/// @brief Alternate definition for Google Test build.
enum gpio_slew_rate { e, f };
/// @brief Alternate definition for Google Test build.
enum pio_mov_status_type { g, h };
/// @brief Alternate definition for Google Test build.
enum exception_number { i, j };
/// @brief Alternate definition for Google Test build.
enum dma_channel_transfer_size { k, l };
/// @brief Alternate definition for Google Test build.
enum riscv_vector_num { m, n };
/// @brief Alternate definition for Google Test build.
enum powman_power_domains { o, p };
/// @brief Alternate definition for Google Test build.
enum pwm_clkdiv_mode { q, r };
/// @brief Alternate definition for Google Test build.
enum sha256_endianness { s, t };

//// @brief Alternate definition for Google Test build.
typedef int sha256_result_t;
//// @brief Alternate definition for Google Test build.
typedef int rtc_callback_t;
//// @brief Alternate definition for Google Test build.
typedef int datetime_t;
//// @brief Alternate definition for Google Test build.
typedef int io_rw_32;
//// @brief Alternate definition for Google Test build.
typedef int io_ro_32;
//// @brief Alternate definition for Google Test build.
typedef int pwm_config;
//// @brief Alternate definition for Google Test build.
typedef int powman_power_state;
//// @brief Alternate definition for Google Test build.
typedef int PLL;
//// @brief Alternate definition for Google Test build.
typedef int irq_handler_t;
//// @brief Alternate definition for Google Test build.
typedef int interp_hw_t;
//// @brief Alternate definition for Google Test build.
typedef int interp_config;
//// @brief Alternate definition for Google Test build.
typedef int interp_hw_save_t;
//// @brief Alternate definition for Google Test build.
typedef int dma_channel_hw_t;
//// @brief Alternate definition for Google Test build.
typedef int dma_channel_config;
//// @brief Alternate definition for Google Test build.
typedef int exception_handler_t;
//// @brief Alternate definition for Google Test build.
typedef int divmod_result_t;
/// @brief Alternate definition for Google Test build.
typedef int hw_divider_state_t;
// @brief Alternate definition for Google Test build.
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

#endif  // PICO_API_ALTERNATE_DEFS_HPP__


#include "sdkwrapper.hpp"
#if __has_include(<pico/time.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" int64_t absolute_time_diff_us(absolute_time_t from,
                                         absolute_time_t to);
int64_t rpp_driver::SdkWrapper::absolute_time_diff_us(absolute_time_t from,
                                                      absolute_time_t to) {
  return ::absolute_time_diff_us(from, to);
}
// --------------------------------------------------
extern "C" absolute_time_t absolute_time_min(absolute_time_t a,
                                             absolute_time_t b);
absolute_time_t rpp_driver::SdkWrapper::absolute_time_min(absolute_time_t a,
                                                          absolute_time_t b) {
  return ::absolute_time_min(a, b);
}
// --------------------------------------------------
extern "C" alarm_id_t add_alarm_at(absolute_time_t time,
                                   alarm_callback_t callback, void* user_data,
                                   bool fire_if_past);
alarm_id_t rpp_driver::SdkWrapper::add_alarm_at(absolute_time_t time,
                                                alarm_callback_t callback,
                                                void* user_data,
                                                bool fire_if_past) {
  return ::add_alarm_at(time, callback, user_data, fire_if_past);
}
// --------------------------------------------------
extern "C" alarm_id_t add_alarm_in_ms(uint32_t ms, alarm_callback_t callback,
                                      void* user_data, bool fire_if_past);
alarm_id_t rpp_driver::SdkWrapper::add_alarm_in_ms(uint32_t ms,
                                                   alarm_callback_t callback,
                                                   void* user_data,
                                                   bool fire_if_past) {
  return ::add_alarm_in_ms(ms, callback, user_data, fire_if_past);
}
// --------------------------------------------------
extern "C" alarm_id_t add_alarm_in_us(uint64_t us, alarm_callback_t callback,
                                      void* user_data, bool fire_if_past);
alarm_id_t rpp_driver::SdkWrapper::add_alarm_in_us(uint64_t us,
                                                   alarm_callback_t callback,
                                                   void* user_data,
                                                   bool fire_if_past) {
  return ::add_alarm_in_us(us, callback, user_data, fire_if_past);
}
// --------------------------------------------------
extern "C" bool add_repeating_timer_ms(int32_t delay_ms,
                                       repeating_timer_callback_t callback,
                                       void* user_data, repeating_timer_t* out);
bool rpp_driver::SdkWrapper::add_repeating_timer_ms(
    int32_t delay_ms, repeating_timer_callback_t callback, void* user_data,
    repeating_timer_t* out) {
  return ::add_repeating_timer_ms(delay_ms, callback, user_data, out);
}
// --------------------------------------------------
extern "C" bool add_repeating_timer_us(int64_t delay_us,
                                       repeating_timer_callback_t callback,
                                       void* user_data, repeating_timer_t* out);
bool rpp_driver::SdkWrapper::add_repeating_timer_us(
    int64_t delay_us, repeating_timer_callback_t callback, void* user_data,
    repeating_timer_t* out) {
  return ::add_repeating_timer_us(delay_us, callback, user_data, out);
}
// --------------------------------------------------
extern "C" alarm_id_t alarm_pool_add_alarm_at(alarm_pool_t* pool,
                                              absolute_time_t time,
                                              alarm_callback_t callback,
                                              void* user_data,
                                              bool fire_if_past);
alarm_id_t rpp_driver::SdkWrapper::alarm_pool_add_alarm_at(
    alarm_pool_t* pool, absolute_time_t time, alarm_callback_t callback,
    void* user_data, bool fire_if_past) {
  return ::alarm_pool_add_alarm_at(pool, time, callback, user_data,
                                   fire_if_past);
}
// --------------------------------------------------
extern "C" alarm_id_t alarm_pool_add_alarm_at_force_in_context(
    alarm_pool_t* pool, absolute_time_t time, alarm_callback_t callback,
    void* user_data);
alarm_id_t rpp_driver::SdkWrapper::alarm_pool_add_alarm_at_force_in_context(
    alarm_pool_t* pool, absolute_time_t time, alarm_callback_t callback,
    void* user_data) {
  return ::alarm_pool_add_alarm_at_force_in_context(pool, time, callback,
                                                    user_data);
}
// --------------------------------------------------
extern "C" alarm_id_t alarm_pool_add_alarm_in_ms(alarm_pool_t* pool,
                                                 uint32_t ms,
                                                 alarm_callback_t callback,
                                                 void* user_data,
                                                 bool fire_if_past);
alarm_id_t rpp_driver::SdkWrapper::alarm_pool_add_alarm_in_ms(
    alarm_pool_t* pool, uint32_t ms, alarm_callback_t callback, void* user_data,
    bool fire_if_past) {
  return ::alarm_pool_add_alarm_in_ms(pool, ms, callback, user_data,
                                      fire_if_past);
}
// --------------------------------------------------
extern "C" alarm_id_t alarm_pool_add_alarm_in_us(alarm_pool_t* pool,
                                                 uint64_t us,
                                                 alarm_callback_t callback,
                                                 void* user_data,
                                                 bool fire_if_past);
alarm_id_t rpp_driver::SdkWrapper::alarm_pool_add_alarm_in_us(
    alarm_pool_t* pool, uint64_t us, alarm_callback_t callback, void* user_data,
    bool fire_if_past) {
  return ::alarm_pool_add_alarm_in_us(pool, us, callback, user_data,
                                      fire_if_past);
}
// --------------------------------------------------
extern "C" bool alarm_pool_add_repeating_timer_ms(
    alarm_pool_t* pool, int32_t delay_ms, repeating_timer_callback_t callback,
    void* user_data, repeating_timer_t* out);
bool rpp_driver::SdkWrapper::alarm_pool_add_repeating_timer_ms(
    alarm_pool_t* pool, int32_t delay_ms, repeating_timer_callback_t callback,
    void* user_data, repeating_timer_t* out) {
  return ::alarm_pool_add_repeating_timer_ms(pool, delay_ms, callback,
                                             user_data, out);
}
// --------------------------------------------------
extern "C" bool alarm_pool_add_repeating_timer_us(
    alarm_pool_t* pool, int64_t delay_us, repeating_timer_callback_t callback,
    void* user_data, repeating_timer_t* out);
bool rpp_driver::SdkWrapper::alarm_pool_add_repeating_timer_us(
    alarm_pool_t* pool, int64_t delay_us, repeating_timer_callback_t callback,
    void* user_data, repeating_timer_t* out) {
  return ::alarm_pool_add_repeating_timer_us(pool, delay_us, callback,
                                             user_data, out);
}
// --------------------------------------------------
extern "C" bool alarm_pool_cancel_alarm(alarm_pool_t* pool,
                                        alarm_id_t alarm_id);
bool rpp_driver::SdkWrapper::alarm_pool_cancel_alarm(alarm_pool_t* pool,
                                                     alarm_id_t alarm_id) {
  return ::alarm_pool_cancel_alarm(pool, alarm_id);
}
// --------------------------------------------------
extern "C" uint alarm_pool_core_num(alarm_pool_t* pool);
uint rpp_driver::SdkWrapper::alarm_pool_core_num(alarm_pool_t* pool) {
  return ::alarm_pool_core_num(pool);
}
// --------------------------------------------------
extern "C" alarm_pool_t* alarm_pool_create(uint timer_alarm_num,
                                           uint max_timers);
alarm_pool_t* rpp_driver::SdkWrapper::alarm_pool_create(uint timer_alarm_num,
                                                        uint max_timers) {
  return ::alarm_pool_create(timer_alarm_num, max_timers);
}
// --------------------------------------------------
extern "C" alarm_pool_t* alarm_pool_create_on_timer(alarm_pool_timer_t* timer,
                                                    uint timer_alarm_num,
                                                    uint max_timers);
alarm_pool_t* rpp_driver::SdkWrapper::alarm_pool_create_on_timer(
    alarm_pool_timer_t* timer, uint timer_alarm_num, uint max_timers) {
  return ::alarm_pool_create_on_timer(timer, timer_alarm_num, max_timers);
}
// --------------------------------------------------
extern "C" alarm_pool_t* alarm_pool_create_on_timer_with_unused_hardware_alarm(
    alarm_pool_timer_t* timer, uint max_timers);
alarm_pool_t*
rpp_driver::SdkWrapper::alarm_pool_create_on_timer_with_unused_hardware_alarm(
    alarm_pool_timer_t* timer, uint max_timers) {
  return ::alarm_pool_create_on_timer_with_unused_hardware_alarm(timer,
                                                                 max_timers);
}
// --------------------------------------------------
extern "C" alarm_pool_t* alarm_pool_create_with_unused_hardware_alarm(
    uint max_timers);
alarm_pool_t*
rpp_driver::SdkWrapper::alarm_pool_create_with_unused_hardware_alarm(
    uint max_timers) {
  return ::alarm_pool_create_with_unused_hardware_alarm(max_timers);
}
// --------------------------------------------------
extern "C" void alarm_pool_destroy(alarm_pool_t* pool);
void rpp_driver::SdkWrapper::alarm_pool_destroy(alarm_pool_t* pool) {
  ::alarm_pool_destroy(pool);
}
// --------------------------------------------------
extern "C" alarm_pool_t* alarm_pool_get_default(void);
alarm_pool_t* rpp_driver::SdkWrapper::alarm_pool_get_default(void) {
  return ::alarm_pool_get_default();
}
// --------------------------------------------------
extern "C" alarm_pool_timer_t* alarm_pool_get_default_timer(void);
alarm_pool_timer_t* rpp_driver::SdkWrapper::alarm_pool_get_default_timer(void) {
  return ::alarm_pool_get_default_timer();
}
// --------------------------------------------------
extern "C" uint alarm_pool_hardware_alarm_num(alarm_pool_t* pool);
uint rpp_driver::SdkWrapper::alarm_pool_hardware_alarm_num(alarm_pool_t* pool) {
  return ::alarm_pool_hardware_alarm_num(pool);
}
// --------------------------------------------------
extern "C" void alarm_pool_init_default(void);
void rpp_driver::SdkWrapper::alarm_pool_init_default(void) {
  ::alarm_pool_init_default();
}
// --------------------------------------------------
extern "C" int32_t alarm_pool_remaining_alarm_time_ms(alarm_pool_t* pool,
                                                      alarm_id_t alarm_id);
int32_t rpp_driver::SdkWrapper::alarm_pool_remaining_alarm_time_ms(
    alarm_pool_t* pool, alarm_id_t alarm_id) {
  return ::alarm_pool_remaining_alarm_time_ms(pool, alarm_id);
}
// --------------------------------------------------
extern "C" int64_t alarm_pool_remaining_alarm_time_us(alarm_pool_t* pool,
                                                      alarm_id_t alarm_id);
int64_t rpp_driver::SdkWrapper::alarm_pool_remaining_alarm_time_us(
    alarm_pool_t* pool, alarm_id_t alarm_id) {
  return ::alarm_pool_remaining_alarm_time_us(pool, alarm_id);
}
// --------------------------------------------------
extern "C" uint alarm_pool_timer_alarm_num(alarm_pool_t* pool);
uint rpp_driver::SdkWrapper::alarm_pool_timer_alarm_num(alarm_pool_t* pool) {
  return ::alarm_pool_timer_alarm_num(pool);
}
// --------------------------------------------------
extern "C" alarm_pool_timer_t* alarm_pool_timer_for_timer_num(uint timer_num);
alarm_pool_timer_t* rpp_driver::SdkWrapper::alarm_pool_timer_for_timer_num(
    uint timer_num) {
  return ::alarm_pool_timer_for_timer_num(timer_num);
}
// --------------------------------------------------
extern "C" bool best_effort_wfe_or_timeout(absolute_time_t timeout_timestamp);
bool rpp_driver::SdkWrapper::best_effort_wfe_or_timeout(
    absolute_time_t timeout_timestamp) {
  return ::best_effort_wfe_or_timeout(timeout_timestamp);
}
// --------------------------------------------------
extern "C" bool cancel_alarm(alarm_id_t alarm_id);
bool rpp_driver::SdkWrapper::cancel_alarm(alarm_id_t alarm_id) {
  return ::cancel_alarm(alarm_id);
}
// --------------------------------------------------
extern "C" bool cancel_repeating_timer(repeating_timer_t* timer);
bool rpp_driver::SdkWrapper::cancel_repeating_timer(repeating_timer_t* timer) {
  return ::cancel_repeating_timer(timer);
}
// --------------------------------------------------
extern "C" absolute_time_t delayed_by_ms(const absolute_time_t t, uint32_t ms);
absolute_time_t rpp_driver::SdkWrapper::delayed_by_ms(const absolute_time_t t,
                                                      uint32_t ms) {
  return ::delayed_by_ms(t, ms);
}
// --------------------------------------------------
extern "C" absolute_time_t delayed_by_us(const absolute_time_t t, uint64_t us);
absolute_time_t rpp_driver::SdkWrapper::delayed_by_us(const absolute_time_t t,
                                                      uint64_t us) {
  return ::delayed_by_us(t, us);
}
// --------------------------------------------------
extern "C" absolute_time_t get_absolute_time(void);
absolute_time_t rpp_driver::SdkWrapper::get_absolute_time(void) {
  return ::get_absolute_time();
}
// --------------------------------------------------
extern "C" bool is_at_the_end_of_time(absolute_time_t t);
bool rpp_driver::SdkWrapper::is_at_the_end_of_time(absolute_time_t t) {
  return ::is_at_the_end_of_time(t);
}
// --------------------------------------------------
extern "C" bool is_nil_time(absolute_time_t t);
bool rpp_driver::SdkWrapper::is_nil_time(absolute_time_t t) {
  return ::is_nil_time(t);
}
// --------------------------------------------------
extern "C" absolute_time_t make_timeout_time_ms(uint32_t ms);
absolute_time_t rpp_driver::SdkWrapper::make_timeout_time_ms(uint32_t ms) {
  return ::make_timeout_time_ms(ms);
}
// --------------------------------------------------
extern "C" absolute_time_t make_timeout_time_us(uint64_t us);
absolute_time_t rpp_driver::SdkWrapper::make_timeout_time_us(uint64_t us) {
  return ::make_timeout_time_us(us);
}
// --------------------------------------------------
extern "C" int32_t remaining_alarm_time_ms(alarm_id_t alarm_id);
int32_t rpp_driver::SdkWrapper::remaining_alarm_time_ms(alarm_id_t alarm_id) {
  return ::remaining_alarm_time_ms(alarm_id);
}
// --------------------------------------------------
extern "C" int64_t remaining_alarm_time_us(alarm_id_t alarm_id);
int64_t rpp_driver::SdkWrapper::remaining_alarm_time_us(alarm_id_t alarm_id) {
  return ::remaining_alarm_time_us(alarm_id);
}
// --------------------------------------------------
extern "C" void runtime_init_default_alarm_pool(void);
void rpp_driver::SdkWrapper::runtime_init_default_alarm_pool(void) {
  ::runtime_init_default_alarm_pool();
}
// --------------------------------------------------
extern "C" void sleep_ms(uint32_t ms);
void rpp_driver::SdkWrapper::sleep_ms(uint32_t ms) { ::sleep_ms(ms); }
// --------------------------------------------------
extern "C" void sleep_until(absolute_time_t target);
void rpp_driver::SdkWrapper::sleep_until(absolute_time_t target) {
  ::sleep_until(target);
}
// --------------------------------------------------
extern "C" void sleep_us(uint64_t us);
void rpp_driver::SdkWrapper::sleep_us(uint64_t us) { ::sleep_us(us); }
// --------------------------------------------------
extern "C" uint32_t to_ms_since_boot(absolute_time_t t);
uint32_t rpp_driver::SdkWrapper::to_ms_since_boot(absolute_time_t t) {
  return ::to_ms_since_boot(t);
}
// --------------------------------------------------
extern "C" uint32_t us_to_ms(uint64_t us);
uint32_t rpp_driver::SdkWrapper::us_to_ms(uint64_t us) {
  return ::us_to_ms(us);
}
#endif  //  __has_include(<pico/time.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<pico/stdio.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" int getchar_timeout_us(uint32_t timeout_us);
int rpp_driver::SdkWrapper::getchar_timeout_us(uint32_t timeout_us) {
  return ::getchar_timeout_us(timeout_us);
}
// --------------------------------------------------
extern "C" int putchar_raw(int c);
int rpp_driver::SdkWrapper::putchar_raw(int c) { return ::putchar_raw(c); }
// --------------------------------------------------
extern "C" int puts_raw(const char* s);
int rpp_driver::SdkWrapper::puts_raw(const char* s) { return ::puts_raw(s); }
// --------------------------------------------------
extern "C" bool stdio_deinit_all(void);
bool rpp_driver::SdkWrapper::stdio_deinit_all(void) {
  return ::stdio_deinit_all();
}
// --------------------------------------------------
extern "C" void stdio_filter_driver(stdio_driver_t* driver);
void rpp_driver::SdkWrapper::stdio_filter_driver(stdio_driver_t* driver) {
  ::stdio_filter_driver(driver);
}
// --------------------------------------------------
extern "C" void stdio_flush(void);
void rpp_driver::SdkWrapper::stdio_flush(void) { ::stdio_flush(); }
// --------------------------------------------------
extern "C" int stdio_get_until(char* buf, int len, absolute_time_t until);
int rpp_driver::SdkWrapper::stdio_get_until(char* buf, int len,
                                            absolute_time_t until) {
  return ::stdio_get_until(buf, len, until);
}
// --------------------------------------------------
extern "C" bool stdio_init_all(void);
bool rpp_driver::SdkWrapper::stdio_init_all(void) { return ::stdio_init_all(); }
// --------------------------------------------------
extern "C" int stdio_put_string(const char* s, int len, bool newline,
                                bool cr_translation);
int rpp_driver::SdkWrapper::stdio_put_string(const char* s, int len,
                                             bool newline,
                                             bool cr_translation) {
  return ::stdio_put_string(s, len, newline, cr_translation);
}
// --------------------------------------------------
extern "C" void stdio_set_driver_enabled(stdio_driver_t* driver, bool enabled);
void rpp_driver::SdkWrapper::stdio_set_driver_enabled(stdio_driver_t* driver,
                                                      bool enabled) {
  ::stdio_set_driver_enabled(driver, enabled);
}
// --------------------------------------------------
extern "C" void stdio_set_translate_crlf(stdio_driver_t* driver,
                                         bool translate);
void rpp_driver::SdkWrapper::stdio_set_translate_crlf(stdio_driver_t* driver,
                                                      bool translate) {
  ::stdio_set_translate_crlf(driver, translate);
}
#endif  //  __has_include(<pico/stdio.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/adc.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void adc_fifo_drain(void);
void rpp_driver::SdkWrapper::adc_fifo_drain(void) { ::adc_fifo_drain(); }
// --------------------------------------------------
extern "C" uint16_t adc_fifo_get(void);
uint16_t rpp_driver::SdkWrapper::adc_fifo_get(void) { return ::adc_fifo_get(); }
// --------------------------------------------------
extern "C" uint16_t adc_fifo_get_blocking(void);
uint16_t rpp_driver::SdkWrapper::adc_fifo_get_blocking(void) {
  return ::adc_fifo_get_blocking();
}
// --------------------------------------------------
extern "C" uint8_t adc_fifo_get_level(void);
uint8_t rpp_driver::SdkWrapper::adc_fifo_get_level(void) {
  return ::adc_fifo_get_level();
}
// --------------------------------------------------
extern "C" bool adc_fifo_is_empty(void);
bool rpp_driver::SdkWrapper::adc_fifo_is_empty(void) {
  return ::adc_fifo_is_empty();
}
// --------------------------------------------------
extern "C" void adc_fifo_setup(bool en, bool dreq_en, uint16_t dreq_thresh,
                               bool err_in_fifo, bool byte_shift);
void rpp_driver::SdkWrapper::adc_fifo_setup(bool en, bool dreq_en,
                                            uint16_t dreq_thresh,
                                            bool err_in_fifo, bool byte_shift) {
  ::adc_fifo_setup(en, dreq_en, dreq_thresh, err_in_fifo, byte_shift);
}
// --------------------------------------------------
extern "C" uint adc_get_selected_input(void);
uint rpp_driver::SdkWrapper::adc_get_selected_input(void) {
  return ::adc_get_selected_input();
}
// --------------------------------------------------
extern "C" void adc_gpio_init(uint gpio);
void rpp_driver::SdkWrapper::adc_gpio_init(uint gpio) { ::adc_gpio_init(gpio); }
// --------------------------------------------------
extern "C" void adc_init(void);
void rpp_driver::SdkWrapper::adc_init(void) { ::adc_init(); }
// --------------------------------------------------
extern "C" void adc_irq_set_enabled(bool enabled);
void rpp_driver::SdkWrapper::adc_irq_set_enabled(bool enabled) {
  ::adc_irq_set_enabled(enabled);
}
// --------------------------------------------------
extern "C" uint16_t adc_read(void);
uint16_t rpp_driver::SdkWrapper::adc_read(void) { return ::adc_read(); }
// --------------------------------------------------
extern "C" void adc_run(bool run);
void rpp_driver::SdkWrapper::adc_run(bool run) { ::adc_run(run); }
// --------------------------------------------------
extern "C" void adc_select_input(uint input);
void rpp_driver::SdkWrapper::adc_select_input(uint input) {
  ::adc_select_input(input);
}
// --------------------------------------------------
extern "C" void adc_set_clkdiv(float clkdiv);
void rpp_driver::SdkWrapper::adc_set_clkdiv(float clkdiv) {
  ::adc_set_clkdiv(clkdiv);
}
// --------------------------------------------------
extern "C" void adc_set_round_robin(uint input_mask);
void rpp_driver::SdkWrapper::adc_set_round_robin(uint input_mask) {
  ::adc_set_round_robin(input_mask);
}
// --------------------------------------------------
extern "C" void adc_set_temp_sensor_enabled(bool enable);
void rpp_driver::SdkWrapper::adc_set_temp_sensor_enabled(bool enable) {
  ::adc_set_temp_sensor_enabled(enable);
}
#endif  //  __has_include(<hardware/adc.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/clocks.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" bool check_sys_clock_hz(uint32_t freq_hz, uint* vco_freq_out,
                                   uint* post_div1_out, uint* post_div2_out);
bool rpp_driver::SdkWrapper::check_sys_clock_hz(uint32_t freq_hz,
                                                uint* vco_freq_out,
                                                uint* post_div1_out,
                                                uint* post_div2_out) {
  return ::check_sys_clock_hz(freq_hz, vco_freq_out, post_div1_out,
                              post_div2_out);
}
// --------------------------------------------------
extern "C" bool check_sys_clock_khz(uint32_t freq_khz, uint* vco_freq_out,
                                    uint* post_div1_out, uint* post_div2_out);
bool rpp_driver::SdkWrapper::check_sys_clock_khz(uint32_t freq_khz,
                                                 uint* vco_freq_out,
                                                 uint* post_div1_out,
                                                 uint* post_div2_out) {
  return ::check_sys_clock_khz(freq_khz, vco_freq_out, post_div1_out,
                               post_div2_out);
}
// --------------------------------------------------
extern "C" bool clock_configure(clock_handle_t clock, uint32_t src,
                                uint32_t auxsrc, uint32_t src_freq,
                                uint32_t freq);
bool rpp_driver::SdkWrapper::clock_configure(clock_handle_t clock, uint32_t src,
                                             uint32_t auxsrc, uint32_t src_freq,
                                             uint32_t freq) {
  return ::clock_configure(clock, src, auxsrc, src_freq, freq);
}
// --------------------------------------------------
extern "C" bool clock_configure_gpin(clock_handle_t clock, uint gpio,
                                     uint32_t src_freq, uint32_t freq);
bool rpp_driver::SdkWrapper::clock_configure_gpin(clock_handle_t clock,
                                                  uint gpio, uint32_t src_freq,
                                                  uint32_t freq) {
  return ::clock_configure_gpin(clock, gpio, src_freq, freq);
}
// --------------------------------------------------
extern "C" void clock_configure_int_divider(clock_handle_t clock, uint32_t src,
                                            uint32_t auxsrc, uint32_t src_freq,
                                            uint32_t int_divider);
void rpp_driver::SdkWrapper::clock_configure_int_divider(clock_handle_t clock,
                                                         uint32_t src,
                                                         uint32_t auxsrc,
                                                         uint32_t src_freq,
                                                         uint32_t int_divider) {
  ::clock_configure_int_divider(clock, src, auxsrc, src_freq, int_divider);
}
// --------------------------------------------------
extern "C" void clock_configure_undivided(clock_handle_t clock, uint32_t src,
                                          uint32_t auxsrc, uint32_t src_freq);
void rpp_driver::SdkWrapper::clock_configure_undivided(clock_handle_t clock,
                                                       uint32_t src,
                                                       uint32_t auxsrc,
                                                       uint32_t src_freq) {
  ::clock_configure_undivided(clock, src, auxsrc, src_freq);
}
// --------------------------------------------------
extern "C" uint32_t clock_get_hz(clock_handle_t clock);
uint32_t rpp_driver::SdkWrapper::clock_get_hz(clock_handle_t clock) {
  return ::clock_get_hz(clock);
}
// --------------------------------------------------
extern "C" void clock_gpio_init(uint gpio, uint src, float div);
void rpp_driver::SdkWrapper::clock_gpio_init(uint gpio, uint src, float div) {
  ::clock_gpio_init(gpio, src, div);
}
// --------------------------------------------------
extern "C" void clock_gpio_init_int_frac(uint gpio, uint src, uint32_t div_int,
                                         uint8_t div_frac);
void rpp_driver::SdkWrapper::clock_gpio_init_int_frac(uint gpio, uint src,
                                                      uint32_t div_int,
                                                      uint8_t div_frac) {
  ::clock_gpio_init_int_frac(gpio, src, div_int, div_frac);
}
// --------------------------------------------------
extern "C" void clock_set_reported_hz(clock_handle_t clock, uint hz);
void rpp_driver::SdkWrapper::clock_set_reported_hz(clock_handle_t clock,
                                                   uint hz) {
  ::clock_set_reported_hz(clock, hz);
}
// --------------------------------------------------
extern "C" void clock_stop(clock_handle_t clock);
void rpp_driver::SdkWrapper::clock_stop(clock_handle_t clock) {
  ::clock_stop(clock);
}
// --------------------------------------------------
extern "C" void clocks_enable_resus(resus_callback_t resus_callback);
void rpp_driver::SdkWrapper::clocks_enable_resus(
    resus_callback_t resus_callback) {
  ::clocks_enable_resus(resus_callback);
}
// --------------------------------------------------
extern "C" uint32_t frequency_count_khz(uint src);
uint32_t rpp_driver::SdkWrapper::frequency_count_khz(uint src) {
  return ::frequency_count_khz(src);
}
// --------------------------------------------------
extern "C" float frequency_count_mhz(uint src);
float rpp_driver::SdkWrapper::frequency_count_mhz(uint src) {
  return ::frequency_count_mhz(src);
}
// --------------------------------------------------
extern "C" void set_sys_clock_48mhz(void);
void rpp_driver::SdkWrapper::set_sys_clock_48mhz(void) {
  ::set_sys_clock_48mhz();
}
// --------------------------------------------------
extern "C" bool set_sys_clock_hz(uint32_t freq_hz, bool required);
bool rpp_driver::SdkWrapper::set_sys_clock_hz(uint32_t freq_hz, bool required) {
  return ::set_sys_clock_hz(freq_hz, required);
}
// --------------------------------------------------
extern "C" bool set_sys_clock_khz(uint32_t freq_khz, bool required);
bool rpp_driver::SdkWrapper::set_sys_clock_khz(uint32_t freq_khz,
                                               bool required) {
  return ::set_sys_clock_khz(freq_khz, required);
}
// --------------------------------------------------
extern "C" void set_sys_clock_pll(uint32_t vco_freq, uint post_div1,
                                  uint post_div2);
void rpp_driver::SdkWrapper::set_sys_clock_pll(uint32_t vco_freq,
                                               uint post_div1, uint post_div2) {
  ::set_sys_clock_pll(vco_freq, post_div1, post_div2);
}
#endif  //  __has_include(<hardware/clocks.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/divider.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" int __sign_of(int32_t v);
int rpp_driver::SdkWrapper::__sign_of(int32_t v) { return ::__sign_of(v); }
// --------------------------------------------------
extern "C" divmod_result_t hw_divider_divmod_s32(int32_t a, int32_t b);
divmod_result_t rpp_driver::SdkWrapper::hw_divider_divmod_s32(int32_t a,
                                                              int32_t b) {
  return ::hw_divider_divmod_s32(a, b);
}
// --------------------------------------------------
extern "C" void hw_divider_divmod_s32_start(int32_t a, int32_t b);
void rpp_driver::SdkWrapper::hw_divider_divmod_s32_start(int32_t a, int32_t b) {
  ::hw_divider_divmod_s32_start(a, b);
}
// --------------------------------------------------
extern "C" divmod_result_t hw_divider_divmod_u32(uint32_t a, uint32_t b);
divmod_result_t rpp_driver::SdkWrapper::hw_divider_divmod_u32(uint32_t a,
                                                              uint32_t b) {
  return ::hw_divider_divmod_u32(a, b);
}
// --------------------------------------------------
extern "C" void hw_divider_divmod_u32_start(uint32_t a, uint32_t b);
void rpp_driver::SdkWrapper::hw_divider_divmod_u32_start(uint32_t a,
                                                         uint32_t b) {
  ::hw_divider_divmod_u32_start(a, b);
}
// --------------------------------------------------
extern "C" void hw_divider_pause(void);
void rpp_driver::SdkWrapper::hw_divider_pause(void) { ::hw_divider_pause(); }
// --------------------------------------------------
extern "C" int32_t hw_divider_quotient_s32(int32_t a, int32_t b);
int32_t rpp_driver::SdkWrapper::hw_divider_quotient_s32(int32_t a, int32_t b) {
  return ::hw_divider_quotient_s32(a, b);
}
// --------------------------------------------------
extern "C" int32_t hw_divider_remainder_s32(int32_t a, int32_t b);
int32_t rpp_driver::SdkWrapper::hw_divider_remainder_s32(int32_t a, int32_t b) {
  return ::hw_divider_remainder_s32(a, b);
}
// --------------------------------------------------
extern "C" void hw_divider_restore_state(hw_divider_state_t* src);
void rpp_driver::SdkWrapper::hw_divider_restore_state(hw_divider_state_t* src) {
  ::hw_divider_restore_state(src);
}
// --------------------------------------------------
extern "C" divmod_result_t hw_divider_result_nowait(void);
divmod_result_t rpp_driver::SdkWrapper::hw_divider_result_nowait(void) {
  return ::hw_divider_result_nowait();
}
// --------------------------------------------------
extern "C" divmod_result_t hw_divider_result_wait(void);
divmod_result_t rpp_driver::SdkWrapper::hw_divider_result_wait(void) {
  return ::hw_divider_result_wait();
}
// --------------------------------------------------
extern "C" int32_t hw_divider_s32_quotient_inlined(int32_t a, int32_t b);
int32_t rpp_driver::SdkWrapper::hw_divider_s32_quotient_inlined(int32_t a,
                                                                int32_t b) {
  return ::hw_divider_s32_quotient_inlined(a, b);
}
// --------------------------------------------------
extern "C" int32_t hw_divider_s32_quotient_wait(void);
int32_t rpp_driver::SdkWrapper::hw_divider_s32_quotient_wait(void) {
  return ::hw_divider_s32_quotient_wait();
}
// --------------------------------------------------
extern "C" int32_t hw_divider_s32_remainder_inlined(int32_t a, int32_t b);
int32_t rpp_driver::SdkWrapper::hw_divider_s32_remainder_inlined(int32_t a,
                                                                 int32_t b) {
  return ::hw_divider_s32_remainder_inlined(a, b);
}
// --------------------------------------------------
extern "C" int32_t hw_divider_s32_remainder_wait(void);
int32_t rpp_driver::SdkWrapper::hw_divider_s32_remainder_wait(void) {
  return ::hw_divider_s32_remainder_wait();
}
// --------------------------------------------------
extern "C" void hw_divider_save_state(hw_divider_state_t* dest);
void rpp_driver::SdkWrapper::hw_divider_save_state(hw_divider_state_t* dest) {
  ::hw_divider_save_state(dest);
}
// --------------------------------------------------
extern "C" uint32_t hw_divider_u32_quotient(uint32_t a, uint32_t b);
uint32_t rpp_driver::SdkWrapper::hw_divider_u32_quotient(uint32_t a,
                                                         uint32_t b) {
  return ::hw_divider_u32_quotient(a, b);
}
// --------------------------------------------------
extern "C" uint32_t hw_divider_u32_quotient_inlined(uint32_t a, uint32_t b);
uint32_t rpp_driver::SdkWrapper::hw_divider_u32_quotient_inlined(uint32_t a,
                                                                 uint32_t b) {
  return ::hw_divider_u32_quotient_inlined(a, b);
}
// --------------------------------------------------
extern "C" uint32_t hw_divider_u32_quotient_wait(void);
uint32_t rpp_driver::SdkWrapper::hw_divider_u32_quotient_wait(void) {
  return ::hw_divider_u32_quotient_wait();
}
// --------------------------------------------------
extern "C" uint32_t hw_divider_u32_remainder(uint32_t a, uint32_t b);
uint32_t rpp_driver::SdkWrapper::hw_divider_u32_remainder(uint32_t a,
                                                          uint32_t b) {
  return ::hw_divider_u32_remainder(a, b);
}
// --------------------------------------------------
extern "C" uint32_t hw_divider_u32_remainder_inlined(uint32_t a, uint32_t b);
uint32_t rpp_driver::SdkWrapper::hw_divider_u32_remainder_inlined(uint32_t a,
                                                                  uint32_t b) {
  return ::hw_divider_u32_remainder_inlined(a, b);
}
// --------------------------------------------------
extern "C" uint32_t hw_divider_u32_remainder_wait(void);
uint32_t rpp_driver::SdkWrapper::hw_divider_u32_remainder_wait(void) {
  return ::hw_divider_u32_remainder_wait();
}
// --------------------------------------------------
extern "C" void hw_divider_wait_ready(void);
void rpp_driver::SdkWrapper::hw_divider_wait_ready(void) {
  ::hw_divider_wait_ready();
}
// --------------------------------------------------
extern "C" int32_t to_quotient_s32(divmod_result_t r);
int32_t rpp_driver::SdkWrapper::to_quotient_s32(divmod_result_t r) {
  return ::to_quotient_s32(r);
}
// --------------------------------------------------
extern "C" uint32_t to_quotient_u32(divmod_result_t r);
uint32_t rpp_driver::SdkWrapper::to_quotient_u32(divmod_result_t r) {
  return ::to_quotient_u32(r);
}
// --------------------------------------------------
extern "C" int32_t to_remainder_s32(divmod_result_t r);
int32_t rpp_driver::SdkWrapper::to_remainder_s32(divmod_result_t r) {
  return ::to_remainder_s32(r);
}
// --------------------------------------------------
extern "C" uint32_t to_remainder_u32(divmod_result_t r);
uint32_t rpp_driver::SdkWrapper::to_remainder_u32(divmod_result_t r) {
  return ::to_remainder_u32(r);
}
#endif  //  __has_include(<hardware/divider.h>) ||
        //  __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/dma.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" uint32_t channel_config_get_ctrl_value(
    const dma_channel_config* config);
uint32_t rpp_driver::SdkWrapper::channel_config_get_ctrl_value(
    const dma_channel_config* config) {
  return ::channel_config_get_ctrl_value(config);
}
// --------------------------------------------------
extern "C" void channel_config_set_bswap(dma_channel_config* c, bool bswap);
void rpp_driver::SdkWrapper::channel_config_set_bswap(dma_channel_config* c,
                                                      bool bswap) {
  ::channel_config_set_bswap(c, bswap);
}
// --------------------------------------------------
extern "C" void channel_config_set_chain_to(dma_channel_config* c,
                                            uint chain_to);
void rpp_driver::SdkWrapper::channel_config_set_chain_to(dma_channel_config* c,
                                                         uint chain_to) {
  ::channel_config_set_chain_to(c, chain_to);
}
// --------------------------------------------------
extern "C" void channel_config_set_dreq(dma_channel_config* c, uint dreq);
void rpp_driver::SdkWrapper::channel_config_set_dreq(dma_channel_config* c,
                                                     uint dreq) {
  ::channel_config_set_dreq(c, dreq);
}
// --------------------------------------------------
extern "C" void channel_config_set_enable(dma_channel_config* c, bool enable);
void rpp_driver::SdkWrapper::channel_config_set_enable(dma_channel_config* c,
                                                       bool enable) {
  ::channel_config_set_enable(c, enable);
}
// --------------------------------------------------
extern "C" void channel_config_set_high_priority(dma_channel_config* c,
                                                 bool high_priority);
void rpp_driver::SdkWrapper::channel_config_set_high_priority(
    dma_channel_config* c, bool high_priority) {
  ::channel_config_set_high_priority(c, high_priority);
}
// --------------------------------------------------
extern "C" void channel_config_set_irq_quiet(dma_channel_config* c,
                                             bool irq_quiet);
void rpp_driver::SdkWrapper::channel_config_set_irq_quiet(dma_channel_config* c,
                                                          bool irq_quiet) {
  ::channel_config_set_irq_quiet(c, irq_quiet);
}
// --------------------------------------------------
extern "C" void channel_config_set_read_increment(dma_channel_config* c,
                                                  bool incr);
void rpp_driver::SdkWrapper::channel_config_set_read_increment(
    dma_channel_config* c, bool incr) {
  ::channel_config_set_read_increment(c, incr);
}
// --------------------------------------------------
extern "C" void channel_config_set_ring(dma_channel_config* c, bool write,
                                        uint size_bits);
void rpp_driver::SdkWrapper::channel_config_set_ring(dma_channel_config* c,
                                                     bool write,
                                                     uint size_bits) {
  ::channel_config_set_ring(c, write, size_bits);
}
// --------------------------------------------------
extern "C" void channel_config_set_sniff_enable(dma_channel_config* c,
                                                bool sniff_enable);
void rpp_driver::SdkWrapper::channel_config_set_sniff_enable(
    dma_channel_config* c, bool sniff_enable) {
  ::channel_config_set_sniff_enable(c, sniff_enable);
}
// --------------------------------------------------
extern "C" void channel_config_set_transfer_data_size(
    dma_channel_config* c, enum dma_channel_transfer_size size);
void rpp_driver::SdkWrapper::channel_config_set_transfer_data_size(
    dma_channel_config* c, enum dma_channel_transfer_size size) {
  ::channel_config_set_transfer_data_size(c, size);
}
// --------------------------------------------------
extern "C" void channel_config_set_write_increment(dma_channel_config* c,
                                                   bool incr);
void rpp_driver::SdkWrapper::channel_config_set_write_increment(
    dma_channel_config* c, bool incr) {
  ::channel_config_set_write_increment(c, incr);
}
// --------------------------------------------------
extern "C" void dma_channel_abort(uint channel);
void rpp_driver::SdkWrapper::dma_channel_abort(uint channel) {
  ::dma_channel_abort(channel);
}
// --------------------------------------------------
extern "C" void dma_channel_acknowledge_irq0(uint channel);
void rpp_driver::SdkWrapper::dma_channel_acknowledge_irq0(uint channel) {
  ::dma_channel_acknowledge_irq0(channel);
}
// --------------------------------------------------
extern "C" void dma_channel_acknowledge_irq1(uint channel);
void rpp_driver::SdkWrapper::dma_channel_acknowledge_irq1(uint channel) {
  ::dma_channel_acknowledge_irq1(channel);
}
// --------------------------------------------------
extern "C" void dma_channel_claim(uint channel);
void rpp_driver::SdkWrapper::dma_channel_claim(uint channel) {
  ::dma_channel_claim(channel);
}
// --------------------------------------------------
extern "C" void dma_channel_cleanup(uint channel);
void rpp_driver::SdkWrapper::dma_channel_cleanup(uint channel) {
  ::dma_channel_cleanup(channel);
}
// --------------------------------------------------
extern "C" void dma_channel_configure(uint channel,
                                      const dma_channel_config* config,
                                      volatile void* write_addr,
                                      const volatile void* read_addr,
                                      uint transfer_count, bool trigger);
void rpp_driver::SdkWrapper::dma_channel_configure(
    uint channel, const dma_channel_config* config, volatile void* write_addr,
    const volatile void* read_addr, uint transfer_count, bool trigger) {
  ::dma_channel_configure(channel, config, write_addr, read_addr,
                          transfer_count, trigger);
}
// --------------------------------------------------
extern "C" dma_channel_config dma_channel_get_default_config(uint channel);
dma_channel_config rpp_driver::SdkWrapper::dma_channel_get_default_config(
    uint channel) {
  return ::dma_channel_get_default_config(channel);
}
// --------------------------------------------------
extern "C" bool dma_channel_get_irq0_status(uint channel);
bool rpp_driver::SdkWrapper::dma_channel_get_irq0_status(uint channel) {
  return ::dma_channel_get_irq0_status(channel);
}
// --------------------------------------------------
extern "C" bool dma_channel_get_irq1_status(uint channel);
bool rpp_driver::SdkWrapper::dma_channel_get_irq1_status(uint channel) {
  return ::dma_channel_get_irq1_status(channel);
}
// --------------------------------------------------
extern "C" dma_channel_hw_t* dma_channel_hw_addr(uint channel);
dma_channel_hw_t* rpp_driver::SdkWrapper::dma_channel_hw_addr(uint channel) {
  return ::dma_channel_hw_addr(channel);
}
// --------------------------------------------------
extern "C" bool dma_channel_is_busy(uint channel);
bool rpp_driver::SdkWrapper::dma_channel_is_busy(uint channel) {
  return ::dma_channel_is_busy(channel);
}
// --------------------------------------------------
extern "C" bool dma_channel_is_claimed(uint channel);
bool rpp_driver::SdkWrapper::dma_channel_is_claimed(uint channel) {
  return ::dma_channel_is_claimed(channel);
}
// --------------------------------------------------
extern "C" void dma_channel_set_config(uint channel,
                                       const dma_channel_config* config,
                                       bool trigger);
void rpp_driver::SdkWrapper::dma_channel_set_config(
    uint channel, const dma_channel_config* config, bool trigger) {
  ::dma_channel_set_config(channel, config, trigger);
}
// --------------------------------------------------
extern "C" void dma_channel_set_irq0_enabled(uint channel, bool enabled);
void rpp_driver::SdkWrapper::dma_channel_set_irq0_enabled(uint channel,
                                                          bool enabled) {
  ::dma_channel_set_irq0_enabled(channel, enabled);
}
// --------------------------------------------------
extern "C" void dma_channel_set_irq1_enabled(uint channel, bool enabled);
void rpp_driver::SdkWrapper::dma_channel_set_irq1_enabled(uint channel,
                                                          bool enabled) {
  ::dma_channel_set_irq1_enabled(channel, enabled);
}
// --------------------------------------------------
extern "C" void dma_channel_set_read_addr(uint channel,
                                          const volatile void* read_addr,
                                          bool trigger);
void rpp_driver::SdkWrapper::dma_channel_set_read_addr(
    uint channel, const volatile void* read_addr, bool trigger) {
  ::dma_channel_set_read_addr(channel, read_addr, trigger);
}
// --------------------------------------------------
extern "C" void dma_channel_set_trans_count(uint channel, uint32_t trans_count,
                                            bool trigger);
void rpp_driver::SdkWrapper::dma_channel_set_trans_count(uint channel,
                                                         uint32_t trans_count,
                                                         bool trigger) {
  ::dma_channel_set_trans_count(channel, trans_count, trigger);
}
// --------------------------------------------------
extern "C" void dma_channel_set_write_addr(uint channel,
                                           volatile void* write_addr,
                                           bool trigger);
void rpp_driver::SdkWrapper::dma_channel_set_write_addr(
    uint channel, volatile void* write_addr, bool trigger) {
  ::dma_channel_set_write_addr(channel, write_addr, trigger);
}
// --------------------------------------------------
extern "C" void dma_channel_start(uint channel);
void rpp_driver::SdkWrapper::dma_channel_start(uint channel) {
  ::dma_channel_start(channel);
}
// --------------------------------------------------
extern "C" void dma_channel_transfer_from_buffer_now(
    uint channel, const volatile void* read_addr, uint32_t transfer_count);
void rpp_driver::SdkWrapper::dma_channel_transfer_from_buffer_now(
    uint channel, const volatile void* read_addr, uint32_t transfer_count) {
  ::dma_channel_transfer_from_buffer_now(channel, read_addr, transfer_count);
}
// --------------------------------------------------
extern "C" void dma_channel_transfer_to_buffer_now(uint channel,
                                                   volatile void* write_addr,
                                                   uint32_t transfer_count);
void rpp_driver::SdkWrapper::dma_channel_transfer_to_buffer_now(
    uint channel, volatile void* write_addr, uint32_t transfer_count) {
  ::dma_channel_transfer_to_buffer_now(channel, write_addr, transfer_count);
}
// --------------------------------------------------
extern "C" void dma_channel_unclaim(uint channel);
void rpp_driver::SdkWrapper::dma_channel_unclaim(uint channel) {
  ::dma_channel_unclaim(channel);
}
// --------------------------------------------------
extern "C" void dma_channel_wait_for_finish_blocking(uint channel);
void rpp_driver::SdkWrapper::dma_channel_wait_for_finish_blocking(
    uint channel) {
  ::dma_channel_wait_for_finish_blocking(channel);
}
// --------------------------------------------------
extern "C" void dma_claim_mask(uint32_t channel_mask);
void rpp_driver::SdkWrapper::dma_claim_mask(uint32_t channel_mask) {
  ::dma_claim_mask(channel_mask);
}
// --------------------------------------------------
extern "C" int dma_claim_unused_channel(bool required);
int rpp_driver::SdkWrapper::dma_claim_unused_channel(bool required) {
  return ::dma_claim_unused_channel(required);
}
// --------------------------------------------------
extern "C" int dma_claim_unused_timer(bool required);
int rpp_driver::SdkWrapper::dma_claim_unused_timer(bool required) {
  return ::dma_claim_unused_timer(required);
}
// --------------------------------------------------
extern "C" dma_channel_config dma_get_channel_config(uint channel);
dma_channel_config rpp_driver::SdkWrapper::dma_get_channel_config(
    uint channel) {
  return ::dma_get_channel_config(channel);
}
// --------------------------------------------------
extern "C" int dma_get_irq_num(uint irq_index);
int rpp_driver::SdkWrapper::dma_get_irq_num(uint irq_index) {
  return ::dma_get_irq_num(irq_index);
}
// --------------------------------------------------
extern "C" uint dma_get_timer_dreq(uint timer_num);
uint rpp_driver::SdkWrapper::dma_get_timer_dreq(uint timer_num) {
  return ::dma_get_timer_dreq(timer_num);
}
// --------------------------------------------------
extern "C" void dma_irqn_acknowledge_channel(uint irq_index, uint channel);
void rpp_driver::SdkWrapper::dma_irqn_acknowledge_channel(uint irq_index,
                                                          uint channel) {
  ::dma_irqn_acknowledge_channel(irq_index, channel);
}
// --------------------------------------------------
extern "C" bool dma_irqn_get_channel_status(uint irq_index, uint channel);
bool rpp_driver::SdkWrapper::dma_irqn_get_channel_status(uint irq_index,
                                                         uint channel) {
  return ::dma_irqn_get_channel_status(irq_index, channel);
}
// --------------------------------------------------
extern "C" void dma_irqn_set_channel_enabled(uint irq_index, uint channel,
                                             bool enabled);
void rpp_driver::SdkWrapper::dma_irqn_set_channel_enabled(uint irq_index,
                                                          uint channel,
                                                          bool enabled) {
  ::dma_irqn_set_channel_enabled(irq_index, channel, enabled);
}
// --------------------------------------------------
extern "C" void dma_irqn_set_channel_mask_enabled(uint irq_index,
                                                  uint32_t channel_mask,
                                                  bool enabled);
void rpp_driver::SdkWrapper::dma_irqn_set_channel_mask_enabled(
    uint irq_index, uint32_t channel_mask, bool enabled) {
  ::dma_irqn_set_channel_mask_enabled(irq_index, channel_mask, enabled);
}
// --------------------------------------------------
extern "C" void dma_set_irq0_channel_mask_enabled(uint32_t channel_mask,
                                                  bool enabled);
void rpp_driver::SdkWrapper::dma_set_irq0_channel_mask_enabled(
    uint32_t channel_mask, bool enabled) {
  ::dma_set_irq0_channel_mask_enabled(channel_mask, enabled);
}
// --------------------------------------------------
extern "C" void dma_set_irq1_channel_mask_enabled(uint32_t channel_mask,
                                                  bool enabled);
void rpp_driver::SdkWrapper::dma_set_irq1_channel_mask_enabled(
    uint32_t channel_mask, bool enabled) {
  ::dma_set_irq1_channel_mask_enabled(channel_mask, enabled);
}
// --------------------------------------------------
extern "C" void dma_sniffer_disable(void);
void rpp_driver::SdkWrapper::dma_sniffer_disable(void) {
  ::dma_sniffer_disable();
}
// --------------------------------------------------
extern "C" void dma_sniffer_enable(uint channel, uint mode,
                                   bool force_channel_enable);
void rpp_driver::SdkWrapper::dma_sniffer_enable(uint channel, uint mode,
                                                bool force_channel_enable) {
  ::dma_sniffer_enable(channel, mode, force_channel_enable);
}
// --------------------------------------------------
extern "C" uint32_t dma_sniffer_get_data_accumulator(void);
uint32_t rpp_driver::SdkWrapper::dma_sniffer_get_data_accumulator(void) {
  return ::dma_sniffer_get_data_accumulator();
}
// --------------------------------------------------
extern "C" void dma_sniffer_set_byte_swap_enabled(bool swap);
void rpp_driver::SdkWrapper::dma_sniffer_set_byte_swap_enabled(bool swap) {
  ::dma_sniffer_set_byte_swap_enabled(swap);
}
// --------------------------------------------------
extern "C" void dma_sniffer_set_data_accumulator(uint32_t seed_value);
void rpp_driver::SdkWrapper::dma_sniffer_set_data_accumulator(
    uint32_t seed_value) {
  ::dma_sniffer_set_data_accumulator(seed_value);
}
// --------------------------------------------------
extern "C" void dma_sniffer_set_output_invert_enabled(bool invert);
void rpp_driver::SdkWrapper::dma_sniffer_set_output_invert_enabled(
    bool invert) {
  ::dma_sniffer_set_output_invert_enabled(invert);
}
// --------------------------------------------------
extern "C" void dma_sniffer_set_output_reverse_enabled(bool reverse);
void rpp_driver::SdkWrapper::dma_sniffer_set_output_reverse_enabled(
    bool reverse) {
  ::dma_sniffer_set_output_reverse_enabled(reverse);
}
// --------------------------------------------------
extern "C" void dma_start_channel_mask(uint32_t chan_mask);
void rpp_driver::SdkWrapper::dma_start_channel_mask(uint32_t chan_mask) {
  ::dma_start_channel_mask(chan_mask);
}
// --------------------------------------------------
extern "C" void dma_timer_claim(uint timer);
void rpp_driver::SdkWrapper::dma_timer_claim(uint timer) {
  ::dma_timer_claim(timer);
}
// --------------------------------------------------
extern "C" bool dma_timer_is_claimed(uint timer);
bool rpp_driver::SdkWrapper::dma_timer_is_claimed(uint timer) {
  return ::dma_timer_is_claimed(timer);
}
// --------------------------------------------------
extern "C" void dma_timer_set_fraction(uint timer, uint16_t numerator,
                                       uint16_t denominator);
void rpp_driver::SdkWrapper::dma_timer_set_fraction(uint timer,
                                                    uint16_t numerator,
                                                    uint16_t denominator) {
  ::dma_timer_set_fraction(timer, numerator, denominator);
}
// --------------------------------------------------
extern "C" void dma_timer_unclaim(uint timer);
void rpp_driver::SdkWrapper::dma_timer_unclaim(uint timer) {
  ::dma_timer_unclaim(timer);
}
// --------------------------------------------------
extern "C" void dma_unclaim_mask(uint32_t channel_mask);
void rpp_driver::SdkWrapper::dma_unclaim_mask(uint32_t channel_mask) {
  ::dma_unclaim_mask(channel_mask);
}
// --------------------------------------------------
extern "C" void print_dma_ctrl(dma_channel_hw_t* channel);
void rpp_driver::SdkWrapper::print_dma_ctrl(dma_channel_hw_t* channel) {
  ::print_dma_ctrl(channel);
}
#endif  //  __has_include(<hardware/dma.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/exception.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" uint exception_get_priority(uint num);
uint rpp_driver::SdkWrapper::exception_get_priority(uint num) {
  return ::exception_get_priority(num);
}
// --------------------------------------------------
extern "C" exception_handler_t exception_get_vtable_handler(
    enum exception_number num);
exception_handler_t rpp_driver::SdkWrapper::exception_get_vtable_handler(
    enum exception_number num) {
  return ::exception_get_vtable_handler(num);
}
// --------------------------------------------------
extern "C" void exception_restore_handler(enum exception_number num,
                                          exception_handler_t original_handler);
void rpp_driver::SdkWrapper::exception_restore_handler(
    enum exception_number num, exception_handler_t original_handler) {
  ::exception_restore_handler(num, original_handler);
}
// --------------------------------------------------
extern "C" exception_handler_t exception_set_exclusive_handler(
    enum exception_number num, exception_handler_t handler);
exception_handler_t rpp_driver::SdkWrapper::exception_set_exclusive_handler(
    enum exception_number num, exception_handler_t handler) {
  return ::exception_set_exclusive_handler(num, handler);
}
// --------------------------------------------------
extern "C" bool exception_set_priority(uint num, uint8_t hardware_priority);
bool rpp_driver::SdkWrapper::exception_set_priority(uint num,
                                                    uint8_t hardware_priority) {
  return ::exception_set_priority(num, hardware_priority);
}
#endif  //  __has_include(<hardware/exception.h>) ||
        //  __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/flash.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void flash_do_cmd(const uint8_t* txbuf, uint8_t* rxbuf,
                             size_t count);
void rpp_driver::SdkWrapper::flash_do_cmd(const uint8_t* txbuf, uint8_t* rxbuf,
                                          size_t count) {
  ::flash_do_cmd(txbuf, rxbuf, count);
}
// --------------------------------------------------
extern "C" void flash_flush_cache(void);
void rpp_driver::SdkWrapper::flash_flush_cache(void) { ::flash_flush_cache(); }
// --------------------------------------------------
extern "C" void flash_get_unique_id(uint8_t* id_out);
void rpp_driver::SdkWrapper::flash_get_unique_id(uint8_t* id_out) {
  ::flash_get_unique_id(id_out);
}
// --------------------------------------------------
extern "C" void flash_range_erase(uint32_t flash_offs, size_t count);
void rpp_driver::SdkWrapper::flash_range_erase(uint32_t flash_offs,
                                               size_t count) {
  ::flash_range_erase(flash_offs, count);
}
// --------------------------------------------------
extern "C" void flash_range_program(uint32_t flash_offs, const uint8_t* data,
                                    size_t count);
void rpp_driver::SdkWrapper::flash_range_program(uint32_t flash_offs,
                                                 const uint8_t* data,
                                                 size_t count) {
  ::flash_range_program(flash_offs, data, count);
}
#endif  //  __has_include(<hardware/flash.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/gpio.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void gpio_acknowledge_irq(uint gpio, uint32_t event_mask);
void rpp_driver::SdkWrapper::gpio_acknowledge_irq(uint gpio,
                                                  uint32_t event_mask) {
  ::gpio_acknowledge_irq(gpio, event_mask);
}
// --------------------------------------------------
extern "C" void gpio_add_raw_irq_handler(uint gpio, irq_handler_t handler);
void rpp_driver::SdkWrapper::gpio_add_raw_irq_handler(uint gpio,
                                                      irq_handler_t handler) {
  ::gpio_add_raw_irq_handler(gpio, handler);
}
// --------------------------------------------------
extern "C" void gpio_add_raw_irq_handler_masked(uint32_t gpio_mask,
                                                irq_handler_t handler);
void rpp_driver::SdkWrapper::gpio_add_raw_irq_handler_masked(
    uint32_t gpio_mask, irq_handler_t handler) {
  ::gpio_add_raw_irq_handler_masked(gpio_mask, handler);
}
// --------------------------------------------------
extern "C" void gpio_add_raw_irq_handler_masked64(uint64_t gpio_mask,
                                                  irq_handler_t handler);
void rpp_driver::SdkWrapper::gpio_add_raw_irq_handler_masked64(
    uint64_t gpio_mask, irq_handler_t handler) {
  ::gpio_add_raw_irq_handler_masked64(gpio_mask, handler);
}
// --------------------------------------------------
extern "C" void gpio_add_raw_irq_handler_with_order_priority(
    uint gpio, irq_handler_t handler, uint8_t order_priority);
void rpp_driver::SdkWrapper::gpio_add_raw_irq_handler_with_order_priority(
    uint gpio, irq_handler_t handler, uint8_t order_priority) {
  ::gpio_add_raw_irq_handler_with_order_priority(gpio, handler, order_priority);
}
// --------------------------------------------------
extern "C" void gpio_add_raw_irq_handler_with_order_priority_masked(
    uint32_t gpio_mask, irq_handler_t handler, uint8_t order_priority);
void rpp_driver::SdkWrapper::
    gpio_add_raw_irq_handler_with_order_priority_masked(
        uint32_t gpio_mask, irq_handler_t handler, uint8_t order_priority) {
  ::gpio_add_raw_irq_handler_with_order_priority_masked(gpio_mask, handler,
                                                        order_priority);
}
// --------------------------------------------------
extern "C" void gpio_add_raw_irq_handler_with_order_priority_masked64(
    uint64_t gpio_mask, irq_handler_t handler, uint8_t order_priority);
void rpp_driver::SdkWrapper::
    gpio_add_raw_irq_handler_with_order_priority_masked64(
        uint64_t gpio_mask, irq_handler_t handler, uint8_t order_priority) {
  ::gpio_add_raw_irq_handler_with_order_priority_masked64(gpio_mask, handler,
                                                          order_priority);
}
// --------------------------------------------------
extern "C" void gpio_assign_to_ns(uint gpio, bool ns);
void rpp_driver::SdkWrapper::gpio_assign_to_ns(uint gpio, bool ns) {
  ::gpio_assign_to_ns(gpio, ns);
}
// --------------------------------------------------
extern "C" void gpio_clr_mask(uint32_t mask);
void rpp_driver::SdkWrapper::gpio_clr_mask(uint32_t mask) {
  ::gpio_clr_mask(mask);
}
// --------------------------------------------------
extern "C" void gpio_clr_mask64(uint64_t mask);
void rpp_driver::SdkWrapper::gpio_clr_mask64(uint64_t mask) {
  ::gpio_clr_mask64(mask);
}
// --------------------------------------------------
extern "C" void gpio_clr_mask_n(uint n, uint32_t mask);
void rpp_driver::SdkWrapper::gpio_clr_mask_n(uint n, uint32_t mask) {
  ::gpio_clr_mask_n(n, mask);
}
// --------------------------------------------------
extern "C" void gpio_debug_pins_init(void);
void rpp_driver::SdkWrapper::gpio_debug_pins_init(void) {
  ::gpio_debug_pins_init();
}
// --------------------------------------------------
extern "C" void gpio_deinit(uint gpio);
void rpp_driver::SdkWrapper::gpio_deinit(uint gpio) { ::gpio_deinit(gpio); }
// --------------------------------------------------
extern "C" void gpio_disable_pulls(uint gpio);
void rpp_driver::SdkWrapper::gpio_disable_pulls(uint gpio) {
  ::gpio_disable_pulls(gpio);
}
// --------------------------------------------------
extern "C" bool gpio_get(uint gpio);
bool rpp_driver::SdkWrapper::gpio_get(uint gpio) { return ::gpio_get(gpio); }
// --------------------------------------------------
extern "C" uint32_t gpio_get_all(void);
uint32_t rpp_driver::SdkWrapper::gpio_get_all(void) { return ::gpio_get_all(); }
// --------------------------------------------------
extern "C" uint64_t gpio_get_all64(void);
uint64_t rpp_driver::SdkWrapper::gpio_get_all64(void) {
  return ::gpio_get_all64();
}
// --------------------------------------------------
extern "C" uint gpio_get_dir(uint gpio);
uint rpp_driver::SdkWrapper::gpio_get_dir(uint gpio) {
  return ::gpio_get_dir(gpio);
}
// --------------------------------------------------
extern "C" enum gpio_drive_strength gpio_get_drive_strength(uint gpio);
enum gpio_drive_strength rpp_driver::SdkWrapper::gpio_get_drive_strength(
    uint gpio) {
  return ::gpio_get_drive_strength(gpio);
}
// --------------------------------------------------
extern "C" gpio_function_t gpio_get_function(uint gpio);
gpio_function_t rpp_driver::SdkWrapper::gpio_get_function(uint gpio) {
  return ::gpio_get_function(gpio);
}
// --------------------------------------------------
extern "C" uint32_t gpio_get_irq_event_mask(uint gpio);
uint32_t rpp_driver::SdkWrapper::gpio_get_irq_event_mask(uint gpio) {
  return ::gpio_get_irq_event_mask(gpio);
}
// --------------------------------------------------
extern "C" bool gpio_get_out_level(uint gpio);
bool rpp_driver::SdkWrapper::gpio_get_out_level(uint gpio) {
  return ::gpio_get_out_level(gpio);
}
// --------------------------------------------------
extern "C" enum gpio_slew_rate gpio_get_slew_rate(uint gpio);
enum gpio_slew_rate rpp_driver::SdkWrapper::gpio_get_slew_rate(uint gpio) {
  return ::gpio_get_slew_rate(gpio);
}
// --------------------------------------------------
extern "C" void gpio_init(uint gpio);
void rpp_driver::SdkWrapper::gpio_init(uint gpio) { ::gpio_init(gpio); }
// --------------------------------------------------
extern "C" void gpio_init_mask(uint gpio_mask);
void rpp_driver::SdkWrapper::gpio_init_mask(uint gpio_mask) {
  ::gpio_init_mask(gpio_mask);
}
// --------------------------------------------------
extern "C" bool gpio_is_dir_out(uint gpio);
bool rpp_driver::SdkWrapper::gpio_is_dir_out(uint gpio) {
  return ::gpio_is_dir_out(gpio);
}
// --------------------------------------------------
extern "C" bool gpio_is_input_hysteresis_enabled(uint gpio);
bool rpp_driver::SdkWrapper::gpio_is_input_hysteresis_enabled(uint gpio) {
  return ::gpio_is_input_hysteresis_enabled(gpio);
}
// --------------------------------------------------
extern "C" bool gpio_is_pulled_down(uint gpio);
bool rpp_driver::SdkWrapper::gpio_is_pulled_down(uint gpio) {
  return ::gpio_is_pulled_down(gpio);
}
// --------------------------------------------------
extern "C" bool gpio_is_pulled_up(uint gpio);
bool rpp_driver::SdkWrapper::gpio_is_pulled_up(uint gpio) {
  return ::gpio_is_pulled_up(gpio);
}
// --------------------------------------------------
extern "C" void gpio_pull_down(uint gpio);
void rpp_driver::SdkWrapper::gpio_pull_down(uint gpio) {
  ::gpio_pull_down(gpio);
}
// --------------------------------------------------
extern "C" void gpio_pull_up(uint gpio);
void rpp_driver::SdkWrapper::gpio_pull_up(uint gpio) { ::gpio_pull_up(gpio); }
// --------------------------------------------------
extern "C" void gpio_put(uint gpio, bool value);
void rpp_driver::SdkWrapper::gpio_put(uint gpio, bool value) {
  ::gpio_put(gpio, value);
}
// --------------------------------------------------
extern "C" void gpio_put_all(uint32_t value);
void rpp_driver::SdkWrapper::gpio_put_all(uint32_t value) {
  ::gpio_put_all(value);
}
// --------------------------------------------------
extern "C" void gpio_put_all64(uint64_t value);
void rpp_driver::SdkWrapper::gpio_put_all64(uint64_t value) {
  ::gpio_put_all64(value);
}
// --------------------------------------------------
extern "C" void gpio_put_masked(uint32_t mask, uint32_t value);
void rpp_driver::SdkWrapper::gpio_put_masked(uint32_t mask, uint32_t value) {
  ::gpio_put_masked(mask, value);
}
// --------------------------------------------------
extern "C" void gpio_put_masked64(uint64_t mask, uint64_t value);
void rpp_driver::SdkWrapper::gpio_put_masked64(uint64_t mask, uint64_t value) {
  ::gpio_put_masked64(mask, value);
}
// --------------------------------------------------
extern "C" void gpio_put_masked_n(uint n, uint32_t mask, uint32_t value);
void rpp_driver::SdkWrapper::gpio_put_masked_n(uint n, uint32_t mask,
                                               uint32_t value) {
  ::gpio_put_masked_n(n, mask, value);
}
// --------------------------------------------------
extern "C" void gpio_remove_raw_irq_handler(uint gpio, irq_handler_t handler);
void rpp_driver::SdkWrapper::gpio_remove_raw_irq_handler(
    uint gpio, irq_handler_t handler) {
  ::gpio_remove_raw_irq_handler(gpio, handler);
}
// --------------------------------------------------
extern "C" void gpio_remove_raw_irq_handler_masked(uint32_t gpio_mask,
                                                   irq_handler_t handler);
void rpp_driver::SdkWrapper::gpio_remove_raw_irq_handler_masked(
    uint32_t gpio_mask, irq_handler_t handler) {
  ::gpio_remove_raw_irq_handler_masked(gpio_mask, handler);
}
// --------------------------------------------------
extern "C" void gpio_remove_raw_irq_handler_masked64(uint64_t gpio_mask,
                                                     irq_handler_t handler);
void rpp_driver::SdkWrapper::gpio_remove_raw_irq_handler_masked64(
    uint64_t gpio_mask, irq_handler_t handler) {
  ::gpio_remove_raw_irq_handler_masked64(gpio_mask, handler);
}
// --------------------------------------------------
extern "C" void gpio_set_dir(uint gpio, bool out);
void rpp_driver::SdkWrapper::gpio_set_dir(uint gpio, bool out) {
  ::gpio_set_dir(gpio, out);
}
// --------------------------------------------------
extern "C" void gpio_set_dir_all_bits(uint32_t values);
void rpp_driver::SdkWrapper::gpio_set_dir_all_bits(uint32_t values) {
  ::gpio_set_dir_all_bits(values);
}
// --------------------------------------------------
extern "C" void gpio_set_dir_all_bits64(uint64_t values);
void rpp_driver::SdkWrapper::gpio_set_dir_all_bits64(uint64_t values) {
  ::gpio_set_dir_all_bits64(values);
}
// --------------------------------------------------
extern "C" void gpio_set_dir_in_masked(uint32_t mask);
void rpp_driver::SdkWrapper::gpio_set_dir_in_masked(uint32_t mask) {
  ::gpio_set_dir_in_masked(mask);
}
// --------------------------------------------------
extern "C" void gpio_set_dir_in_masked64(uint64_t mask);
void rpp_driver::SdkWrapper::gpio_set_dir_in_masked64(uint64_t mask) {
  ::gpio_set_dir_in_masked64(mask);
}
// --------------------------------------------------
extern "C" void gpio_set_dir_masked(uint32_t mask, uint32_t value);
void rpp_driver::SdkWrapper::gpio_set_dir_masked(uint32_t mask,
                                                 uint32_t value) {
  ::gpio_set_dir_masked(mask, value);
}
// --------------------------------------------------
extern "C" void gpio_set_dir_masked64(uint64_t mask, uint64_t value);
void rpp_driver::SdkWrapper::gpio_set_dir_masked64(uint64_t mask,
                                                   uint64_t value) {
  ::gpio_set_dir_masked64(mask, value);
}
// --------------------------------------------------
extern "C" void gpio_set_dir_out_masked(uint32_t mask);
void rpp_driver::SdkWrapper::gpio_set_dir_out_masked(uint32_t mask) {
  ::gpio_set_dir_out_masked(mask);
}
// --------------------------------------------------
extern "C" void gpio_set_dir_out_masked64(uint64_t mask);
void rpp_driver::SdkWrapper::gpio_set_dir_out_masked64(uint64_t mask) {
  ::gpio_set_dir_out_masked64(mask);
}
// --------------------------------------------------
extern "C" void gpio_set_dormant_irq_enabled(uint gpio, uint32_t event_mask,
                                             bool enabled);
void rpp_driver::SdkWrapper::gpio_set_dormant_irq_enabled(uint gpio,
                                                          uint32_t event_mask,
                                                          bool enabled) {
  ::gpio_set_dormant_irq_enabled(gpio, event_mask, enabled);
}
// --------------------------------------------------
extern "C" void gpio_set_drive_strength(uint gpio,
                                        enum gpio_drive_strength drive);
void rpp_driver::SdkWrapper::gpio_set_drive_strength(
    uint gpio, enum gpio_drive_strength drive) {
  ::gpio_set_drive_strength(gpio, drive);
}
// --------------------------------------------------
extern "C" void gpio_set_function(uint gpio, gpio_function_t fn);
void rpp_driver::SdkWrapper::gpio_set_function(uint gpio, gpio_function_t fn) {
  ::gpio_set_function(gpio, fn);
}
// --------------------------------------------------
extern "C" void gpio_set_function_masked(uint32_t gpio_mask,
                                         gpio_function_t fn);
void rpp_driver::SdkWrapper::gpio_set_function_masked(uint32_t gpio_mask,
                                                      gpio_function_t fn) {
  ::gpio_set_function_masked(gpio_mask, fn);
}
// --------------------------------------------------
extern "C" void gpio_set_function_masked64(uint64_t gpio_mask,
                                           gpio_function_t fn);
void rpp_driver::SdkWrapper::gpio_set_function_masked64(uint64_t gpio_mask,
                                                        gpio_function_t fn) {
  ::gpio_set_function_masked64(gpio_mask, fn);
}
// --------------------------------------------------
extern "C" void gpio_set_inover(uint gpio, uint value);
void rpp_driver::SdkWrapper::gpio_set_inover(uint gpio, uint value) {
  ::gpio_set_inover(gpio, value);
}
// --------------------------------------------------
extern "C" void gpio_set_input_enabled(uint gpio, bool enabled);
void rpp_driver::SdkWrapper::gpio_set_input_enabled(uint gpio, bool enabled) {
  ::gpio_set_input_enabled(gpio, enabled);
}
// --------------------------------------------------
extern "C" void gpio_set_input_hysteresis_enabled(uint gpio, bool enabled);
void rpp_driver::SdkWrapper::gpio_set_input_hysteresis_enabled(uint gpio,
                                                               bool enabled) {
  ::gpio_set_input_hysteresis_enabled(gpio, enabled);
}
// --------------------------------------------------
extern "C" void gpio_set_irq_callback(gpio_irq_callback_t callback);
void rpp_driver::SdkWrapper::gpio_set_irq_callback(
    gpio_irq_callback_t callback) {
  ::gpio_set_irq_callback(callback);
}
// --------------------------------------------------
extern "C" void gpio_set_irq_enabled(uint gpio, uint32_t event_mask,
                                     bool enabled);
void rpp_driver::SdkWrapper::gpio_set_irq_enabled(uint gpio,
                                                  uint32_t event_mask,
                                                  bool enabled) {
  ::gpio_set_irq_enabled(gpio, event_mask, enabled);
}
// --------------------------------------------------
extern "C" void gpio_set_irq_enabled_with_callback(
    uint gpio, uint32_t event_mask, bool enabled, gpio_irq_callback_t callback);
void rpp_driver::SdkWrapper::gpio_set_irq_enabled_with_callback(
    uint gpio, uint32_t event_mask, bool enabled,
    gpio_irq_callback_t callback) {
  ::gpio_set_irq_enabled_with_callback(gpio, event_mask, enabled, callback);
}
// --------------------------------------------------
extern "C" void gpio_set_irqover(uint gpio, uint value);
void rpp_driver::SdkWrapper::gpio_set_irqover(uint gpio, uint value) {
  ::gpio_set_irqover(gpio, value);
}
// --------------------------------------------------
extern "C" void gpio_set_mask(uint32_t mask);
void rpp_driver::SdkWrapper::gpio_set_mask(uint32_t mask) {
  ::gpio_set_mask(mask);
}
// --------------------------------------------------
extern "C" void gpio_set_mask64(uint64_t mask);
void rpp_driver::SdkWrapper::gpio_set_mask64(uint64_t mask) {
  ::gpio_set_mask64(mask);
}
// --------------------------------------------------
extern "C" void gpio_set_mask_n(uint n, uint32_t mask);
void rpp_driver::SdkWrapper::gpio_set_mask_n(uint n, uint32_t mask) {
  ::gpio_set_mask_n(n, mask);
}
// --------------------------------------------------
extern "C" void gpio_set_oeover(uint gpio, uint value);
void rpp_driver::SdkWrapper::gpio_set_oeover(uint gpio, uint value) {
  ::gpio_set_oeover(gpio, value);
}
// --------------------------------------------------
extern "C" void gpio_set_outover(uint gpio, uint value);
void rpp_driver::SdkWrapper::gpio_set_outover(uint gpio, uint value) {
  ::gpio_set_outover(gpio, value);
}
// --------------------------------------------------
extern "C" void gpio_set_pulls(uint gpio, bool up, bool down);
void rpp_driver::SdkWrapper::gpio_set_pulls(uint gpio, bool up, bool down) {
  ::gpio_set_pulls(gpio, up, down);
}
// --------------------------------------------------
extern "C" void gpio_set_slew_rate(uint gpio, enum gpio_slew_rate slew);
void rpp_driver::SdkWrapper::gpio_set_slew_rate(uint gpio,
                                                enum gpio_slew_rate slew) {
  ::gpio_set_slew_rate(gpio, slew);
}
// --------------------------------------------------
extern "C" void gpio_xor_mask(uint32_t mask);
void rpp_driver::SdkWrapper::gpio_xor_mask(uint32_t mask) {
  ::gpio_xor_mask(mask);
}
// --------------------------------------------------
extern "C" void gpio_xor_mask64(uint64_t mask);
void rpp_driver::SdkWrapper::gpio_xor_mask64(uint64_t mask) {
  ::gpio_xor_mask64(mask);
}
// --------------------------------------------------
extern "C" void gpio_xor_mask_n(uint n, uint32_t mask);
void rpp_driver::SdkWrapper::gpio_xor_mask_n(uint n, uint32_t mask) {
  ::gpio_xor_mask_n(n, mask);
}
#endif  //  __has_include(<hardware/gpio.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/i2c.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void i2c_deinit(i2c_inst_t* i2c);
void rpp_driver::SdkWrapper::i2c_deinit(i2c_inst_t* i2c) { ::i2c_deinit(i2c); }
// --------------------------------------------------
extern "C" uint i2c_get_dreq(i2c_inst_t* i2c, bool is_tx);
uint rpp_driver::SdkWrapper::i2c_get_dreq(i2c_inst_t* i2c, bool is_tx) {
  return ::i2c_get_dreq(i2c, is_tx);
}
// --------------------------------------------------
extern "C" i2c_hw_t* i2c_get_hw(i2c_inst_t* i2c);
i2c_hw_t* rpp_driver::SdkWrapper::i2c_get_hw(i2c_inst_t* i2c) {
  return ::i2c_get_hw(i2c);
}
// --------------------------------------------------
extern "C" uint i2c_get_index(i2c_inst_t* i2c);
uint rpp_driver::SdkWrapper::i2c_get_index(i2c_inst_t* i2c) {
  return ::i2c_get_index(i2c);
}
// --------------------------------------------------
extern "C" i2c_inst_t* i2c_get_instance(uint num);
i2c_inst_t* rpp_driver::SdkWrapper::i2c_get_instance(uint num) {
  return ::i2c_get_instance(num);
}
// --------------------------------------------------
extern "C" size_t i2c_get_read_available(i2c_inst_t* i2c);
size_t rpp_driver::SdkWrapper::i2c_get_read_available(i2c_inst_t* i2c) {
  return ::i2c_get_read_available(i2c);
}
// --------------------------------------------------
extern "C" size_t i2c_get_write_available(i2c_inst_t* i2c);
size_t rpp_driver::SdkWrapper::i2c_get_write_available(i2c_inst_t* i2c) {
  return ::i2c_get_write_available(i2c);
}
// --------------------------------------------------
extern "C" uint i2c_init(i2c_inst_t* i2c, uint baudrate);
uint rpp_driver::SdkWrapper::i2c_init(i2c_inst_t* i2c, uint baudrate) {
  return ::i2c_init(i2c, baudrate);
}
// --------------------------------------------------
extern "C" int i2c_read_blocking(i2c_inst_t* i2c, uint8_t addr, uint8_t* dst,
                                 size_t len, bool nostop);
int rpp_driver::SdkWrapper::i2c_read_blocking(i2c_inst_t* i2c, uint8_t addr,
                                              uint8_t* dst, size_t len,
                                              bool nostop) {
  return ::i2c_read_blocking(i2c, addr, dst, len, nostop);
}
// --------------------------------------------------
extern "C" int i2c_read_blocking_until(i2c_inst_t* i2c, uint8_t addr,
                                       uint8_t* dst, size_t len, bool nostop,
                                       absolute_time_t until);
int rpp_driver::SdkWrapper::i2c_read_blocking_until(i2c_inst_t* i2c,
                                                    uint8_t addr, uint8_t* dst,
                                                    size_t len, bool nostop,
                                                    absolute_time_t until) {
  return ::i2c_read_blocking_until(i2c, addr, dst, len, nostop, until);
}
// --------------------------------------------------
extern "C" uint8_t i2c_read_byte_raw(i2c_inst_t* i2c);
uint8_t rpp_driver::SdkWrapper::i2c_read_byte_raw(i2c_inst_t* i2c) {
  return ::i2c_read_byte_raw(i2c);
}
// --------------------------------------------------
extern "C" void i2c_read_raw_blocking(i2c_inst_t* i2c, uint8_t* dst,
                                      size_t len);
void rpp_driver::SdkWrapper::i2c_read_raw_blocking(i2c_inst_t* i2c,
                                                   uint8_t* dst, size_t len) {
  ::i2c_read_raw_blocking(i2c, dst, len);
}
// --------------------------------------------------
extern "C" int i2c_read_timeout_per_char_us(i2c_inst_t* i2c, uint8_t addr,
                                            uint8_t* dst, size_t len,
                                            bool nostop,
                                            uint timeout_per_char_us);
int rpp_driver::SdkWrapper::i2c_read_timeout_per_char_us(
    i2c_inst_t* i2c, uint8_t addr, uint8_t* dst, size_t len, bool nostop,
    uint timeout_per_char_us) {
  return ::i2c_read_timeout_per_char_us(i2c, addr, dst, len, nostop,
                                        timeout_per_char_us);
}
// --------------------------------------------------
extern "C" int i2c_read_timeout_us(i2c_inst_t* i2c, uint8_t addr, uint8_t* dst,
                                   size_t len, bool nostop, uint timeout_us);
int rpp_driver::SdkWrapper::i2c_read_timeout_us(i2c_inst_t* i2c, uint8_t addr,
                                                uint8_t* dst, size_t len,
                                                bool nostop, uint timeout_us) {
  return ::i2c_read_timeout_us(i2c, addr, dst, len, nostop, timeout_us);
}
// --------------------------------------------------
extern "C" uint i2c_set_baudrate(i2c_inst_t* i2c, uint baudrate);
uint rpp_driver::SdkWrapper::i2c_set_baudrate(i2c_inst_t* i2c, uint baudrate) {
  return ::i2c_set_baudrate(i2c, baudrate);
}
// --------------------------------------------------
extern "C" void i2c_set_slave_mode(i2c_inst_t* i2c, bool slave, uint8_t addr);
void rpp_driver::SdkWrapper::i2c_set_slave_mode(i2c_inst_t* i2c, bool slave,
                                                uint8_t addr) {
  ::i2c_set_slave_mode(i2c, slave, addr);
}
// --------------------------------------------------
extern "C" int i2c_write_blocking(i2c_inst_t* i2c, uint8_t addr,
                                  const uint8_t* src, size_t len, bool nostop);
int rpp_driver::SdkWrapper::i2c_write_blocking(i2c_inst_t* i2c, uint8_t addr,
                                               const uint8_t* src, size_t len,
                                               bool nostop) {
  return ::i2c_write_blocking(i2c, addr, src, len, nostop);
}
// --------------------------------------------------
extern "C" int i2c_write_blocking_until(i2c_inst_t* i2c, uint8_t addr,
                                        const uint8_t* src, size_t len,
                                        bool nostop, absolute_time_t until);
int rpp_driver::SdkWrapper::i2c_write_blocking_until(i2c_inst_t* i2c,
                                                     uint8_t addr,
                                                     const uint8_t* src,
                                                     size_t len, bool nostop,
                                                     absolute_time_t until) {
  return ::i2c_write_blocking_until(i2c, addr, src, len, nostop, until);
}
// --------------------------------------------------
extern "C" void i2c_write_byte_raw(i2c_inst_t* i2c, uint8_t value);
void rpp_driver::SdkWrapper::i2c_write_byte_raw(i2c_inst_t* i2c,
                                                uint8_t value) {
  ::i2c_write_byte_raw(i2c, value);
}
// --------------------------------------------------
extern "C" void i2c_write_raw_blocking(i2c_inst_t* i2c, const uint8_t* src,
                                       size_t len);
void rpp_driver::SdkWrapper::i2c_write_raw_blocking(i2c_inst_t* i2c,
                                                    const uint8_t* src,
                                                    size_t len) {
  ::i2c_write_raw_blocking(i2c, src, len);
}
// --------------------------------------------------
extern "C" int i2c_write_timeout_per_char_us(i2c_inst_t* i2c, uint8_t addr,
                                             const uint8_t* src, size_t len,
                                             bool nostop,
                                             uint timeout_per_char_us);
int rpp_driver::SdkWrapper::i2c_write_timeout_per_char_us(
    i2c_inst_t* i2c, uint8_t addr, const uint8_t* src, size_t len, bool nostop,
    uint timeout_per_char_us) {
  return ::i2c_write_timeout_per_char_us(i2c, addr, src, len, nostop,
                                         timeout_per_char_us);
}
// --------------------------------------------------
extern "C" int i2c_write_timeout_us(i2c_inst_t* i2c, uint8_t addr,
                                    const uint8_t* src, size_t len, bool nostop,
                                    uint timeout_us);
int rpp_driver::SdkWrapper::i2c_write_timeout_us(i2c_inst_t* i2c, uint8_t addr,
                                                 const uint8_t* src, size_t len,
                                                 bool nostop, uint timeout_us) {
  return ::i2c_write_timeout_us(i2c, addr, src, len, nostop, timeout_us);
}
#endif  //  __has_include(<hardware/i2c.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/interp.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void interp_add_accumulater(interp_hw_t* interp, uint lane,
                                       uint32_t val);
void rpp_driver::SdkWrapper::interp_add_accumulater(interp_hw_t* interp,
                                                    uint lane, uint32_t val) {
  ::interp_add_accumulater(interp, lane, val);
}
// --------------------------------------------------
extern "C" void interp_claim_lane(interp_hw_t* interp, uint lane);
void rpp_driver::SdkWrapper::interp_claim_lane(interp_hw_t* interp, uint lane) {
  ::interp_claim_lane(interp, lane);
}
// --------------------------------------------------
extern "C" void interp_claim_lane_mask(interp_hw_t* interp, uint lane_mask);
void rpp_driver::SdkWrapper::interp_claim_lane_mask(interp_hw_t* interp,
                                                    uint lane_mask) {
  ::interp_claim_lane_mask(interp, lane_mask);
}
// --------------------------------------------------
extern "C" void interp_config_set_add_raw(interp_config* c, bool add_raw);
void rpp_driver::SdkWrapper::interp_config_set_add_raw(interp_config* c,
                                                       bool add_raw) {
  ::interp_config_set_add_raw(c, add_raw);
}
// --------------------------------------------------
extern "C" void interp_config_set_blend(interp_config* c, bool blend);
void rpp_driver::SdkWrapper::interp_config_set_blend(interp_config* c,
                                                     bool blend) {
  ::interp_config_set_blend(c, blend);
}
// --------------------------------------------------
extern "C" void interp_config_set_clamp(interp_config* c, bool clamp);
void rpp_driver::SdkWrapper::interp_config_set_clamp(interp_config* c,
                                                     bool clamp) {
  ::interp_config_set_clamp(c, clamp);
}
// --------------------------------------------------
extern "C" void interp_config_set_cross_input(interp_config* c,
                                              bool cross_input);
void rpp_driver::SdkWrapper::interp_config_set_cross_input(interp_config* c,
                                                           bool cross_input) {
  ::interp_config_set_cross_input(c, cross_input);
}
// --------------------------------------------------
extern "C" void interp_config_set_cross_result(interp_config* c,
                                               bool cross_result);
void rpp_driver::SdkWrapper::interp_config_set_cross_result(interp_config* c,
                                                            bool cross_result) {
  ::interp_config_set_cross_result(c, cross_result);
}
// --------------------------------------------------
extern "C" void interp_config_set_force_bits(interp_config* c, uint bits);
void rpp_driver::SdkWrapper::interp_config_set_force_bits(interp_config* c,
                                                          uint bits) {
  ::interp_config_set_force_bits(c, bits);
}
// --------------------------------------------------
extern "C" void interp_config_set_mask(interp_config* c, uint mask_lsb,
                                       uint mask_msb);
void rpp_driver::SdkWrapper::interp_config_set_mask(interp_config* c,
                                                    uint mask_lsb,
                                                    uint mask_msb) {
  ::interp_config_set_mask(c, mask_lsb, mask_msb);
}
// --------------------------------------------------
extern "C" void interp_config_set_shift(interp_config* c, uint shift);
void rpp_driver::SdkWrapper::interp_config_set_shift(interp_config* c,
                                                     uint shift) {
  ::interp_config_set_shift(c, shift);
}
// --------------------------------------------------
extern "C" void interp_config_set_signed(interp_config* c, bool _signed);
void rpp_driver::SdkWrapper::interp_config_set_signed(interp_config* c,
                                                      bool _signed) {
  ::interp_config_set_signed(c, _signed);
}
// --------------------------------------------------
extern "C" interp_config interp_default_config(void);
interp_config rpp_driver::SdkWrapper::interp_default_config(void) {
  return ::interp_default_config();
}
// --------------------------------------------------
extern "C" uint32_t interp_get_accumulator(interp_hw_t* interp, uint lane);
uint32_t rpp_driver::SdkWrapper::interp_get_accumulator(interp_hw_t* interp,
                                                        uint lane) {
  return ::interp_get_accumulator(interp, lane);
}
// --------------------------------------------------
extern "C" uint32_t interp_get_base(interp_hw_t* interp, uint lane);
uint32_t rpp_driver::SdkWrapper::interp_get_base(interp_hw_t* interp,
                                                 uint lane) {
  return ::interp_get_base(interp, lane);
}
// --------------------------------------------------
extern "C" uint32_t interp_get_raw(interp_hw_t* interp, uint lane);
uint32_t rpp_driver::SdkWrapper::interp_get_raw(interp_hw_t* interp,
                                                uint lane) {
  return ::interp_get_raw(interp, lane);
}
// --------------------------------------------------
extern "C" uint interp_index(interp_hw_t* interp);
uint rpp_driver::SdkWrapper::interp_index(interp_hw_t* interp) {
  return ::interp_index(interp);
}
// --------------------------------------------------
extern "C" bool interp_lane_is_claimed(interp_hw_t* interp, uint lane);
bool rpp_driver::SdkWrapper::interp_lane_is_claimed(interp_hw_t* interp,
                                                    uint lane) {
  return ::interp_lane_is_claimed(interp, lane);
}
// --------------------------------------------------
extern "C" uint32_t interp_peek_full_result(interp_hw_t* interp);
uint32_t rpp_driver::SdkWrapper::interp_peek_full_result(interp_hw_t* interp) {
  return ::interp_peek_full_result(interp);
}
// --------------------------------------------------
extern "C" uint32_t interp_peek_lane_result(interp_hw_t* interp, uint lane);
uint32_t rpp_driver::SdkWrapper::interp_peek_lane_result(interp_hw_t* interp,
                                                         uint lane) {
  return ::interp_peek_lane_result(interp, lane);
}
// --------------------------------------------------
extern "C" uint32_t interp_pop_full_result(interp_hw_t* interp);
uint32_t rpp_driver::SdkWrapper::interp_pop_full_result(interp_hw_t* interp) {
  return ::interp_pop_full_result(interp);
}
// --------------------------------------------------
extern "C" uint32_t interp_pop_lane_result(interp_hw_t* interp, uint lane);
uint32_t rpp_driver::SdkWrapper::interp_pop_lane_result(interp_hw_t* interp,
                                                        uint lane) {
  return ::interp_pop_lane_result(interp, lane);
}
// --------------------------------------------------
extern "C" void interp_restore(interp_hw_t* interp, interp_hw_save_t* saver);
void rpp_driver::SdkWrapper::interp_restore(interp_hw_t* interp,
                                            interp_hw_save_t* saver) {
  ::interp_restore(interp, saver);
}
// --------------------------------------------------
extern "C" void interp_save(interp_hw_t* interp, interp_hw_save_t* saver);
void rpp_driver::SdkWrapper::interp_save(interp_hw_t* interp,
                                         interp_hw_save_t* saver) {
  ::interp_save(interp, saver);
}
// --------------------------------------------------
extern "C" void interp_set_accumulator(interp_hw_t* interp, uint lane,
                                       uint32_t val);
void rpp_driver::SdkWrapper::interp_set_accumulator(interp_hw_t* interp,
                                                    uint lane, uint32_t val) {
  ::interp_set_accumulator(interp, lane, val);
}
// --------------------------------------------------
extern "C" void interp_set_base(interp_hw_t* interp, uint lane, uint32_t val);
void rpp_driver::SdkWrapper::interp_set_base(interp_hw_t* interp, uint lane,
                                             uint32_t val) {
  ::interp_set_base(interp, lane, val);
}
// --------------------------------------------------
extern "C" void interp_set_base_both(interp_hw_t* interp, uint32_t val);
void rpp_driver::SdkWrapper::interp_set_base_both(interp_hw_t* interp,
                                                  uint32_t val) {
  ::interp_set_base_both(interp, val);
}
// --------------------------------------------------
extern "C" void interp_set_config(interp_hw_t* interp, uint lane,
                                  interp_config* config);
void rpp_driver::SdkWrapper::interp_set_config(interp_hw_t* interp, uint lane,
                                               interp_config* config) {
  ::interp_set_config(interp, lane, config);
}
// --------------------------------------------------
extern "C" void interp_set_force_bits(interp_hw_t* interp, uint lane,
                                      uint bits);
void rpp_driver::SdkWrapper::interp_set_force_bits(interp_hw_t* interp,
                                                   uint lane, uint bits) {
  ::interp_set_force_bits(interp, lane, bits);
}
// --------------------------------------------------
extern "C" void interp_unclaim_lane(interp_hw_t* interp, uint lane);
void rpp_driver::SdkWrapper::interp_unclaim_lane(interp_hw_t* interp,
                                                 uint lane) {
  ::interp_unclaim_lane(interp, lane);
}
// --------------------------------------------------
extern "C" void interp_unclaim_lane_mask(interp_hw_t* interp, uint lane_mask);
void rpp_driver::SdkWrapper::interp_unclaim_lane_mask(interp_hw_t* interp,
                                                      uint lane_mask) {
  ::interp_unclaim_lane_mask(interp, lane_mask);
}
#endif  //  __has_include(<hardware/interp.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/irq.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void __unhandled_user_irq(void);
void rpp_driver::SdkWrapper::__unhandled_user_irq(void) {
  ::__unhandled_user_irq();
}
// --------------------------------------------------
extern "C" void irq_add_shared_handler(uint num, irq_handler_t handler,
                                       uint8_t order_priority);
void rpp_driver::SdkWrapper::irq_add_shared_handler(uint num,
                                                    irq_handler_t handler,
                                                    uint8_t order_priority) {
  ::irq_add_shared_handler(num, handler, order_priority);
}
// --------------------------------------------------
extern "C" void irq_assign_to_ns(uint irq_num, bool ns);
void rpp_driver::SdkWrapper::irq_assign_to_ns(uint irq_num, bool ns) {
  ::irq_assign_to_ns(irq_num, ns);
}
// --------------------------------------------------
extern "C" void irq_clear(uint int_num);
void rpp_driver::SdkWrapper::irq_clear(uint int_num) { ::irq_clear(int_num); }
// --------------------------------------------------
extern "C" irq_handler_t irq_get_exclusive_handler(uint num);
irq_handler_t rpp_driver::SdkWrapper::irq_get_exclusive_handler(uint num) {
  return ::irq_get_exclusive_handler(num);
}
// --------------------------------------------------
extern "C" uint irq_get_priority(uint num);
uint rpp_driver::SdkWrapper::irq_get_priority(uint num) {
  return ::irq_get_priority(num);
}
// --------------------------------------------------
extern "C" irq_handler_t irq_get_vtable_handler(uint num);
irq_handler_t rpp_driver::SdkWrapper::irq_get_vtable_handler(uint num) {
  return ::irq_get_vtable_handler(num);
}
// --------------------------------------------------
extern "C" bool irq_has_shared_handler(uint num);
bool rpp_driver::SdkWrapper::irq_has_shared_handler(uint num) {
  return ::irq_has_shared_handler(num);
}
// --------------------------------------------------
extern "C" void irq_init_priorities(void);
void rpp_driver::SdkWrapper::irq_init_priorities(void) {
  ::irq_init_priorities();
}
// --------------------------------------------------
extern "C" bool irq_is_enabled(uint num);
bool rpp_driver::SdkWrapper::irq_is_enabled(uint num) {
  return ::irq_is_enabled(num);
}
// --------------------------------------------------
extern "C" void irq_remove_handler(uint num, irq_handler_t handler);
void rpp_driver::SdkWrapper::irq_remove_handler(uint num,
                                                irq_handler_t handler) {
  ::irq_remove_handler(num, handler);
}
// --------------------------------------------------
extern "C" void irq_set_enabled(uint num, bool enabled);
void rpp_driver::SdkWrapper::irq_set_enabled(uint num, bool enabled) {
  ::irq_set_enabled(num, enabled);
}
// --------------------------------------------------
extern "C" void irq_set_exclusive_handler(uint num, irq_handler_t handler);
void rpp_driver::SdkWrapper::irq_set_exclusive_handler(uint num,
                                                       irq_handler_t handler) {
  ::irq_set_exclusive_handler(num, handler);
}
// --------------------------------------------------
extern "C" void irq_set_mask_enabled(uint32_t mask, bool enabled);
void rpp_driver::SdkWrapper::irq_set_mask_enabled(uint32_t mask, bool enabled) {
  ::irq_set_mask_enabled(mask, enabled);
}
// --------------------------------------------------
extern "C" void irq_set_mask_n_enabled(uint n, uint32_t mask, bool enabled);
void rpp_driver::SdkWrapper::irq_set_mask_n_enabled(uint n, uint32_t mask,
                                                    bool enabled) {
  ::irq_set_mask_n_enabled(n, mask, enabled);
}
// --------------------------------------------------
extern "C" void irq_set_pending(uint num);
void rpp_driver::SdkWrapper::irq_set_pending(uint num) {
  ::irq_set_pending(num);
}
// --------------------------------------------------
extern "C" void irq_set_priority(uint num, uint8_t hardware_priority);
void rpp_driver::SdkWrapper::irq_set_priority(uint num,
                                              uint8_t hardware_priority) {
  ::irq_set_priority(num, hardware_priority);
}
// --------------------------------------------------
extern "C" irq_handler_t irq_set_riscv_vector_handler(
    enum riscv_vector_num index, irq_handler_t handler);
irq_handler_t rpp_driver::SdkWrapper::irq_set_riscv_vector_handler(
    enum riscv_vector_num index, irq_handler_t handler) {
  return ::irq_set_riscv_vector_handler(index, handler);
}
// --------------------------------------------------
extern "C" void runtime_init_per_core_irq_priorities(void);
void rpp_driver::SdkWrapper::runtime_init_per_core_irq_priorities(void) {
  ::runtime_init_per_core_irq_priorities();
}
// --------------------------------------------------
extern "C" void user_irq_claim(uint irq_num);
void rpp_driver::SdkWrapper::user_irq_claim(uint irq_num) {
  ::user_irq_claim(irq_num);
}
// --------------------------------------------------
extern "C" int user_irq_claim_unused(bool required);
int rpp_driver::SdkWrapper::user_irq_claim_unused(bool required) {
  return ::user_irq_claim_unused(required);
}
// --------------------------------------------------
extern "C" bool user_irq_is_claimed(uint irq_num);
bool rpp_driver::SdkWrapper::user_irq_is_claimed(uint irq_num) {
  return ::user_irq_is_claimed(irq_num);
}
// --------------------------------------------------
extern "C" void user_irq_unclaim(uint irq_num);
void rpp_driver::SdkWrapper::user_irq_unclaim(uint irq_num) {
  ::user_irq_unclaim(irq_num);
}
#endif  //  __has_include(<hardware/irq.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/pll.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void pll_deinit(PLL pll);
void rpp_driver::SdkWrapper::pll_deinit(PLL pll) { ::pll_deinit(pll); }
// --------------------------------------------------
extern "C" void pll_init(PLL pll, uint ref_div, uint vco_freq, uint post_div1,
                         uint post_div2);
void rpp_driver::SdkWrapper::pll_init(PLL pll, uint ref_div, uint vco_freq,
                                      uint post_div1, uint post_div2) {
  ::pll_init(pll, ref_div, vco_freq, post_div1, post_div2);
}
#endif  //  __has_include(<hardware/pll.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/pio.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" int pio_add_program(PIO pio, const pio_program_t* program);
int rpp_driver::SdkWrapper::pio_add_program(PIO pio,
                                            const pio_program_t* program) {
  return ::pio_add_program(pio, program);
}
// --------------------------------------------------
extern "C" int pio_add_program_at_offset(PIO pio, const pio_program_t* program,
                                         uint offset);
int rpp_driver::SdkWrapper::pio_add_program_at_offset(
    PIO pio, const pio_program_t* program, uint offset) {
  return ::pio_add_program_at_offset(pio, program, offset);
}
// --------------------------------------------------
extern "C" void pio_calculate_clkdiv_from_float(float div, uint16_t* div_int,
                                                uint8_t* div_frac);
void rpp_driver::SdkWrapper::pio_calculate_clkdiv_from_float(
    float div, uint16_t* div_int, uint8_t* div_frac) {
  ::pio_calculate_clkdiv_from_float(div, div_int, div_frac);
}
// --------------------------------------------------
extern "C" bool pio_can_add_program(PIO pio, const pio_program_t* program);
bool rpp_driver::SdkWrapper::pio_can_add_program(PIO pio,
                                                 const pio_program_t* program) {
  return ::pio_can_add_program(pio, program);
}
// --------------------------------------------------
extern "C" bool pio_can_add_program_at_offset(PIO pio,
                                              const pio_program_t* program,
                                              uint offset);
bool rpp_driver::SdkWrapper::pio_can_add_program_at_offset(
    PIO pio, const pio_program_t* program, uint offset) {
  return ::pio_can_add_program_at_offset(pio, program, offset);
}
// --------------------------------------------------
extern "C" bool pio_claim_free_sm_and_add_program(const pio_program_t* program,
                                                  PIO* pio, uint* sm,
                                                  uint* offset);
bool rpp_driver::SdkWrapper::pio_claim_free_sm_and_add_program(
    const pio_program_t* program, PIO* pio, uint* sm, uint* offset) {
  return ::pio_claim_free_sm_and_add_program(program, pio, sm, offset);
}
// --------------------------------------------------
extern "C" bool pio_claim_free_sm_and_add_program_for_gpio_range(
    const pio_program_t* program, PIO* pio, uint* sm, uint* offset,
    uint gpio_base, uint gpio_count, bool set_gpio_base);
bool rpp_driver::SdkWrapper::pio_claim_free_sm_and_add_program_for_gpio_range(
    const pio_program_t* program, PIO* pio, uint* sm, uint* offset,
    uint gpio_base, uint gpio_count, bool set_gpio_base) {
  return ::pio_claim_free_sm_and_add_program_for_gpio_range(
      program, pio, sm, offset, gpio_base, gpio_count, set_gpio_base);
}
// --------------------------------------------------
extern "C" void pio_claim_sm_mask(PIO pio, uint sm_mask);
void rpp_driver::SdkWrapper::pio_claim_sm_mask(PIO pio, uint sm_mask) {
  ::pio_claim_sm_mask(pio, sm_mask);
}
// --------------------------------------------------
extern "C" int pio_claim_unused_sm(PIO pio, bool required);
int rpp_driver::SdkWrapper::pio_claim_unused_sm(PIO pio, bool required) {
  return ::pio_claim_unused_sm(pio, required);
}
// --------------------------------------------------
extern "C" void pio_clear_instruction_memory(PIO pio);
void rpp_driver::SdkWrapper::pio_clear_instruction_memory(PIO pio) {
  ::pio_clear_instruction_memory(pio);
}
// --------------------------------------------------
extern "C" void pio_clkdiv_restart_sm_mask(PIO pio, uint32_t mask);
void rpp_driver::SdkWrapper::pio_clkdiv_restart_sm_mask(PIO pio,
                                                        uint32_t mask) {
  ::pio_clkdiv_restart_sm_mask(pio, mask);
}
// --------------------------------------------------
extern "C" void pio_clkdiv_restart_sm_multi_mask(PIO pio, uint32_t mask_prev,
                                                 uint32_t mask,
                                                 uint32_t mask_next);
void rpp_driver::SdkWrapper::pio_clkdiv_restart_sm_multi_mask(
    PIO pio, uint32_t mask_prev, uint32_t mask, uint32_t mask_next) {
  ::pio_clkdiv_restart_sm_multi_mask(pio, mask_prev, mask, mask_next);
}
// --------------------------------------------------
extern "C" void pio_enable_sm_mask_in_sync(PIO pio, uint32_t mask);
void rpp_driver::SdkWrapper::pio_enable_sm_mask_in_sync(PIO pio,
                                                        uint32_t mask) {
  ::pio_enable_sm_mask_in_sync(pio, mask);
}
// --------------------------------------------------
extern "C" void pio_enable_sm_multi_mask_in_sync(PIO pio, uint32_t mask_prev,
                                                 uint32_t mask,
                                                 uint32_t mask_next);
void rpp_driver::SdkWrapper::pio_enable_sm_multi_mask_in_sync(
    PIO pio, uint32_t mask_prev, uint32_t mask, uint32_t mask_next) {
  ::pio_enable_sm_multi_mask_in_sync(pio, mask_prev, mask, mask_next);
}
// --------------------------------------------------
extern "C" pio_sm_config pio_get_default_sm_config(void);
pio_sm_config rpp_driver::SdkWrapper::pio_get_default_sm_config(void) {
  return ::pio_get_default_sm_config();
}
// --------------------------------------------------
extern "C" uint pio_get_dreq(PIO pio, uint sm, bool is_tx);
uint rpp_driver::SdkWrapper::pio_get_dreq(PIO pio, uint sm, bool is_tx) {
  return ::pio_get_dreq(pio, sm, is_tx);
}
// --------------------------------------------------
extern "C" uint pio_get_funcsel(PIO pio);
uint rpp_driver::SdkWrapper::pio_get_funcsel(PIO pio) {
  return ::pio_get_funcsel(pio);
}
// --------------------------------------------------
extern "C" uint pio_get_gpio_base(PIO pio);
uint rpp_driver::SdkWrapper::pio_get_gpio_base(PIO pio) {
  return ::pio_get_gpio_base(pio);
}
// --------------------------------------------------
extern "C" uint pio_get_index(PIO pio);
uint rpp_driver::SdkWrapper::pio_get_index(PIO pio) {
  return ::pio_get_index(pio);
}
// --------------------------------------------------
extern "C" PIO pio_get_instance(uint instance);
PIO rpp_driver::SdkWrapper::pio_get_instance(uint instance) {
  return ::pio_get_instance(instance);
}
// --------------------------------------------------
extern "C" int pio_get_irq_num(PIO pio, uint irqn);
int rpp_driver::SdkWrapper::pio_get_irq_num(PIO pio, uint irqn) {
  return ::pio_get_irq_num(pio, irqn);
}
// --------------------------------------------------
extern "C" pio_interrupt_source_t pio_get_rx_fifo_not_empty_interrupt_source(
    uint sm);
pio_interrupt_source_t
rpp_driver::SdkWrapper::pio_get_rx_fifo_not_empty_interrupt_source(uint sm) {
  return ::pio_get_rx_fifo_not_empty_interrupt_source(sm);
}
// --------------------------------------------------
extern "C" pio_interrupt_source_t pio_get_tx_fifo_not_full_interrupt_source(
    uint sm);
pio_interrupt_source_t
rpp_driver::SdkWrapper::pio_get_tx_fifo_not_full_interrupt_source(uint sm) {
  return ::pio_get_tx_fifo_not_full_interrupt_source(sm);
}
// --------------------------------------------------
extern "C" void pio_gpio_init(PIO pio, uint pin);
void rpp_driver::SdkWrapper::pio_gpio_init(PIO pio, uint pin) {
  ::pio_gpio_init(pio, pin);
}
// --------------------------------------------------
extern "C" void pio_interrupt_clear(PIO pio, uint pio_interrupt_num);
void rpp_driver::SdkWrapper::pio_interrupt_clear(PIO pio,
                                                 uint pio_interrupt_num) {
  ::pio_interrupt_clear(pio, pio_interrupt_num);
}
// --------------------------------------------------
extern "C" bool pio_interrupt_get(PIO pio, uint pio_interrupt_num);
bool rpp_driver::SdkWrapper::pio_interrupt_get(PIO pio,
                                               uint pio_interrupt_num) {
  return ::pio_interrupt_get(pio, pio_interrupt_num);
}
// --------------------------------------------------
extern "C" void pio_remove_program(PIO pio, const pio_program_t* program,
                                   uint loaded_offset);
void rpp_driver::SdkWrapper::pio_remove_program(PIO pio,
                                                const pio_program_t* program,
                                                uint loaded_offset) {
  ::pio_remove_program(pio, program, loaded_offset);
}
// --------------------------------------------------
extern "C" void pio_remove_program_and_unclaim_sm(const pio_program_t* program,
                                                  PIO pio, uint sm,
                                                  uint offset);
void rpp_driver::SdkWrapper::pio_remove_program_and_unclaim_sm(
    const pio_program_t* program, PIO pio, uint sm, uint offset) {
  ::pio_remove_program_and_unclaim_sm(program, pio, sm, offset);
}
// --------------------------------------------------
extern "C" void pio_restart_sm_mask(PIO pio, uint32_t mask);
void rpp_driver::SdkWrapper::pio_restart_sm_mask(PIO pio, uint32_t mask) {
  ::pio_restart_sm_mask(pio, mask);
}
// --------------------------------------------------
extern "C" int pio_set_gpio_base(PIO pio, uint gpio_base);
int rpp_driver::SdkWrapper::pio_set_gpio_base(PIO pio, uint gpio_base) {
  return ::pio_set_gpio_base(pio, gpio_base);
}
// --------------------------------------------------
extern "C" void pio_set_irq0_source_enabled(PIO pio,
                                            pio_interrupt_source_t source,
                                            bool enabled);
void rpp_driver::SdkWrapper::pio_set_irq0_source_enabled(
    PIO pio, pio_interrupt_source_t source, bool enabled) {
  ::pio_set_irq0_source_enabled(pio, source, enabled);
}
// --------------------------------------------------
extern "C" void pio_set_irq0_source_mask_enabled(PIO pio, uint32_t source_mask,
                                                 bool enabled);
void rpp_driver::SdkWrapper::pio_set_irq0_source_mask_enabled(
    PIO pio, uint32_t source_mask, bool enabled) {
  ::pio_set_irq0_source_mask_enabled(pio, source_mask, enabled);
}
// --------------------------------------------------
extern "C" void pio_set_irq1_source_enabled(PIO pio,
                                            pio_interrupt_source_t source,
                                            bool enabled);
void rpp_driver::SdkWrapper::pio_set_irq1_source_enabled(
    PIO pio, pio_interrupt_source_t source, bool enabled) {
  ::pio_set_irq1_source_enabled(pio, source, enabled);
}
// --------------------------------------------------
extern "C" void pio_set_irq1_source_mask_enabled(PIO pio, uint32_t source_mask,
                                                 bool enabled);
void rpp_driver::SdkWrapper::pio_set_irq1_source_mask_enabled(
    PIO pio, uint32_t source_mask, bool enabled) {
  ::pio_set_irq1_source_mask_enabled(pio, source_mask, enabled);
}
// --------------------------------------------------
extern "C" void pio_set_irqn_source_enabled(PIO pio, uint irq_index,
                                            pio_interrupt_source_t source,
                                            bool enabled);
void rpp_driver::SdkWrapper::pio_set_irqn_source_enabled(
    PIO pio, uint irq_index, pio_interrupt_source_t source, bool enabled) {
  ::pio_set_irqn_source_enabled(pio, irq_index, source, enabled);
}
// --------------------------------------------------
extern "C" void pio_set_irqn_source_mask_enabled(PIO pio, uint irq_index,
                                                 uint32_t source_mask,
                                                 bool enabled);
void rpp_driver::SdkWrapper::pio_set_irqn_source_mask_enabled(
    PIO pio, uint irq_index, uint32_t source_mask, bool enabled) {
  ::pio_set_irqn_source_mask_enabled(pio, irq_index, source_mask, enabled);
}
// --------------------------------------------------
extern "C" void pio_set_sm_mask_enabled(PIO pio, uint32_t mask, bool enabled);
void rpp_driver::SdkWrapper::pio_set_sm_mask_enabled(PIO pio, uint32_t mask,
                                                     bool enabled) {
  ::pio_set_sm_mask_enabled(pio, mask, enabled);
}
// --------------------------------------------------
extern "C" void pio_set_sm_multi_mask_enabled(PIO pio, uint32_t mask_prev,
                                              uint32_t mask, uint32_t mask_next,
                                              bool enabled);
void rpp_driver::SdkWrapper::pio_set_sm_multi_mask_enabled(PIO pio,
                                                           uint32_t mask_prev,
                                                           uint32_t mask,
                                                           uint32_t mask_next,
                                                           bool enabled) {
  ::pio_set_sm_multi_mask_enabled(pio, mask_prev, mask, mask_next, enabled);
}
// --------------------------------------------------
extern "C" void pio_sm_claim(PIO pio, uint sm);
void rpp_driver::SdkWrapper::pio_sm_claim(PIO pio, uint sm) {
  ::pio_sm_claim(pio, sm);
}
// --------------------------------------------------
extern "C" void pio_sm_clear_fifos(PIO pio, uint sm);
void rpp_driver::SdkWrapper::pio_sm_clear_fifos(PIO pio, uint sm) {
  ::pio_sm_clear_fifos(pio, sm);
}
// --------------------------------------------------
extern "C" void pio_sm_clkdiv_restart(PIO pio, uint sm);
void rpp_driver::SdkWrapper::pio_sm_clkdiv_restart(PIO pio, uint sm) {
  ::pio_sm_clkdiv_restart(pio, sm);
}
// --------------------------------------------------
extern "C" void pio_sm_drain_tx_fifo(PIO pio, uint sm);
void rpp_driver::SdkWrapper::pio_sm_drain_tx_fifo(PIO pio, uint sm) {
  ::pio_sm_drain_tx_fifo(pio, sm);
}
// --------------------------------------------------
extern "C" void pio_sm_exec(PIO pio, uint sm, uint instr);
void rpp_driver::SdkWrapper::pio_sm_exec(PIO pio, uint sm, uint instr) {
  ::pio_sm_exec(pio, sm, instr);
}
// --------------------------------------------------
extern "C" void pio_sm_exec_wait_blocking(PIO pio, uint sm, uint instr);
void rpp_driver::SdkWrapper::pio_sm_exec_wait_blocking(PIO pio, uint sm,
                                                       uint instr) {
  ::pio_sm_exec_wait_blocking(pio, sm, instr);
}
// --------------------------------------------------
extern "C" uint32_t pio_sm_get(PIO pio, uint sm);
uint32_t rpp_driver::SdkWrapper::pio_sm_get(PIO pio, uint sm) {
  return ::pio_sm_get(pio, sm);
}
// --------------------------------------------------
extern "C" uint32_t pio_sm_get_blocking(PIO pio, uint sm);
uint32_t rpp_driver::SdkWrapper::pio_sm_get_blocking(PIO pio, uint sm) {
  return ::pio_sm_get_blocking(pio, sm);
}
// --------------------------------------------------
extern "C" uint8_t pio_sm_get_pc(PIO pio, uint sm);
uint8_t rpp_driver::SdkWrapper::pio_sm_get_pc(PIO pio, uint sm) {
  return ::pio_sm_get_pc(pio, sm);
}
// --------------------------------------------------
extern "C" uint pio_sm_get_rx_fifo_level(PIO pio, uint sm);
uint rpp_driver::SdkWrapper::pio_sm_get_rx_fifo_level(PIO pio, uint sm) {
  return ::pio_sm_get_rx_fifo_level(pio, sm);
}
// --------------------------------------------------
extern "C" uint pio_sm_get_tx_fifo_level(PIO pio, uint sm);
uint rpp_driver::SdkWrapper::pio_sm_get_tx_fifo_level(PIO pio, uint sm) {
  return ::pio_sm_get_tx_fifo_level(pio, sm);
}
// --------------------------------------------------
extern "C" int pio_sm_init(PIO pio, uint sm, uint initial_pc,
                           const pio_sm_config* config);
int rpp_driver::SdkWrapper::pio_sm_init(PIO pio, uint sm, uint initial_pc,
                                        const pio_sm_config* config) {
  return ::pio_sm_init(pio, sm, initial_pc, config);
}
// --------------------------------------------------
extern "C" bool pio_sm_is_claimed(PIO pio, uint sm);
bool rpp_driver::SdkWrapper::pio_sm_is_claimed(PIO pio, uint sm) {
  return ::pio_sm_is_claimed(pio, sm);
}
// --------------------------------------------------
extern "C" bool pio_sm_is_exec_stalled(PIO pio, uint sm);
bool rpp_driver::SdkWrapper::pio_sm_is_exec_stalled(PIO pio, uint sm) {
  return ::pio_sm_is_exec_stalled(pio, sm);
}
// --------------------------------------------------
extern "C" bool pio_sm_is_rx_fifo_empty(PIO pio, uint sm);
bool rpp_driver::SdkWrapper::pio_sm_is_rx_fifo_empty(PIO pio, uint sm) {
  return ::pio_sm_is_rx_fifo_empty(pio, sm);
}
// --------------------------------------------------
extern "C" bool pio_sm_is_rx_fifo_full(PIO pio, uint sm);
bool rpp_driver::SdkWrapper::pio_sm_is_rx_fifo_full(PIO pio, uint sm) {
  return ::pio_sm_is_rx_fifo_full(pio, sm);
}
// --------------------------------------------------
extern "C" bool pio_sm_is_tx_fifo_empty(PIO pio, uint sm);
bool rpp_driver::SdkWrapper::pio_sm_is_tx_fifo_empty(PIO pio, uint sm) {
  return ::pio_sm_is_tx_fifo_empty(pio, sm);
}
// --------------------------------------------------
extern "C" bool pio_sm_is_tx_fifo_full(PIO pio, uint sm);
bool rpp_driver::SdkWrapper::pio_sm_is_tx_fifo_full(PIO pio, uint sm) {
  return ::pio_sm_is_tx_fifo_full(pio, sm);
}
// --------------------------------------------------
extern "C" void pio_sm_put(PIO pio, uint sm, uint32_t data);
void rpp_driver::SdkWrapper::pio_sm_put(PIO pio, uint sm, uint32_t data) {
  ::pio_sm_put(pio, sm, data);
}
// --------------------------------------------------
extern "C" void pio_sm_put_blocking(PIO pio, uint sm, uint32_t data);
void rpp_driver::SdkWrapper::pio_sm_put_blocking(PIO pio, uint sm,
                                                 uint32_t data) {
  ::pio_sm_put_blocking(pio, sm, data);
}
// --------------------------------------------------
extern "C" void pio_sm_restart(PIO pio, uint sm);
void rpp_driver::SdkWrapper::pio_sm_restart(PIO pio, uint sm) {
  ::pio_sm_restart(pio, sm);
}
// --------------------------------------------------
extern "C" void pio_sm_set_clkdiv(PIO pio, uint sm, float div);
void rpp_driver::SdkWrapper::pio_sm_set_clkdiv(PIO pio, uint sm, float div) {
  ::pio_sm_set_clkdiv(pio, sm, div);
}
// --------------------------------------------------
extern "C" void pio_sm_set_clkdiv_int_frac(PIO pio, uint sm, uint16_t div_int,
                                           uint8_t div_frac);
void rpp_driver::SdkWrapper::pio_sm_set_clkdiv_int_frac(PIO pio, uint sm,
                                                        uint16_t div_int,
                                                        uint8_t div_frac) {
  ::pio_sm_set_clkdiv_int_frac(pio, sm, div_int, div_frac);
}
// --------------------------------------------------
extern "C" int pio_sm_set_config(PIO pio, uint sm, const pio_sm_config* config);
int rpp_driver::SdkWrapper::pio_sm_set_config(PIO pio, uint sm,
                                              const pio_sm_config* config) {
  return ::pio_sm_set_config(pio, sm, config);
}
// --------------------------------------------------
extern "C" int pio_sm_set_consecutive_pindirs(PIO pio, uint sm, uint pins_base,
                                              uint pin_count, bool is_out);
int rpp_driver::SdkWrapper::pio_sm_set_consecutive_pindirs(PIO pio, uint sm,
                                                           uint pins_base,
                                                           uint pin_count,
                                                           bool is_out) {
  return ::pio_sm_set_consecutive_pindirs(pio, sm, pins_base, pin_count,
                                          is_out);
}
// --------------------------------------------------
extern "C" void pio_sm_set_enabled(PIO pio, uint sm, bool enabled);
void rpp_driver::SdkWrapper::pio_sm_set_enabled(PIO pio, uint sm,
                                                bool enabled) {
  ::pio_sm_set_enabled(pio, sm, enabled);
}
// --------------------------------------------------
extern "C" void pio_sm_set_in_pins(PIO pio, uint sm, uint in_base);
void rpp_driver::SdkWrapper::pio_sm_set_in_pins(PIO pio, uint sm,
                                                uint in_base) {
  ::pio_sm_set_in_pins(pio, sm, in_base);
}
// --------------------------------------------------
extern "C" void pio_sm_set_jmp_pin(PIO pio, uint sm, uint pin);
void rpp_driver::SdkWrapper::pio_sm_set_jmp_pin(PIO pio, uint sm, uint pin) {
  ::pio_sm_set_jmp_pin(pio, sm, pin);
}
// --------------------------------------------------
extern "C" void pio_sm_set_out_pins(PIO pio, uint sm, uint out_base,
                                    uint out_count);
void rpp_driver::SdkWrapper::pio_sm_set_out_pins(PIO pio, uint sm,
                                                 uint out_base,
                                                 uint out_count) {
  ::pio_sm_set_out_pins(pio, sm, out_base, out_count);
}
// --------------------------------------------------
extern "C" void pio_sm_set_pindirs_with_mask(PIO pio, uint sm,
                                             uint32_t pin_dirs,
                                             uint32_t pin_mask);
void rpp_driver::SdkWrapper::pio_sm_set_pindirs_with_mask(PIO pio, uint sm,
                                                          uint32_t pin_dirs,
                                                          uint32_t pin_mask) {
  ::pio_sm_set_pindirs_with_mask(pio, sm, pin_dirs, pin_mask);
}
// --------------------------------------------------
extern "C" void pio_sm_set_pins(PIO pio, uint sm, uint32_t pin_values);
void rpp_driver::SdkWrapper::pio_sm_set_pins(PIO pio, uint sm,
                                             uint32_t pin_values) {
  ::pio_sm_set_pins(pio, sm, pin_values);
}
// --------------------------------------------------
extern "C" void pio_sm_set_pins_with_mask(PIO pio, uint sm, uint32_t pin_values,
                                          uint32_t pin_mask);
void rpp_driver::SdkWrapper::pio_sm_set_pins_with_mask(PIO pio, uint sm,
                                                       uint32_t pin_values,
                                                       uint32_t pin_mask) {
  ::pio_sm_set_pins_with_mask(pio, sm, pin_values, pin_mask);
}
// --------------------------------------------------
extern "C" void pio_sm_set_set_pins(PIO pio, uint sm, uint set_base,
                                    uint set_count);
void rpp_driver::SdkWrapper::pio_sm_set_set_pins(PIO pio, uint sm,
                                                 uint set_base,
                                                 uint set_count) {
  ::pio_sm_set_set_pins(pio, sm, set_base, set_count);
}
// --------------------------------------------------
extern "C" void pio_sm_set_sideset_pins(PIO pio, uint sm, uint sideset_base);
void rpp_driver::SdkWrapper::pio_sm_set_sideset_pins(PIO pio, uint sm,
                                                     uint sideset_base) {
  ::pio_sm_set_sideset_pins(pio, sm, sideset_base);
}
// --------------------------------------------------
extern "C" void pio_sm_set_wrap(PIO pio, uint sm, uint wrap_target, uint wrap);
void rpp_driver::SdkWrapper::pio_sm_set_wrap(PIO pio, uint sm, uint wrap_target,
                                             uint wrap) {
  ::pio_sm_set_wrap(pio, sm, wrap_target, wrap);
}
// --------------------------------------------------
extern "C" void pio_sm_unclaim(PIO pio, uint sm);
void rpp_driver::SdkWrapper::pio_sm_unclaim(PIO pio, uint sm) {
  ::pio_sm_unclaim(pio, sm);
}
// --------------------------------------------------
extern "C" void sm_config_set_clkdiv(pio_sm_config* c, float div);
void rpp_driver::SdkWrapper::sm_config_set_clkdiv(pio_sm_config* c, float div) {
  ::sm_config_set_clkdiv(c, div);
}
// --------------------------------------------------
extern "C" void sm_config_set_clkdiv_int_frac(pio_sm_config* c,
                                              uint16_t div_int,
                                              uint8_t div_frac);
void rpp_driver::SdkWrapper::sm_config_set_clkdiv_int_frac(pio_sm_config* c,
                                                           uint16_t div_int,
                                                           uint8_t div_frac) {
  ::sm_config_set_clkdiv_int_frac(c, div_int, div_frac);
}
// --------------------------------------------------
extern "C" void sm_config_set_fifo_join(pio_sm_config* c,
                                        enum pio_fifo_join join);
void rpp_driver::SdkWrapper::sm_config_set_fifo_join(pio_sm_config* c,
                                                     enum pio_fifo_join join) {
  ::sm_config_set_fifo_join(c, join);
}
// --------------------------------------------------
extern "C" void sm_config_set_in_pin_base(pio_sm_config* c, uint in_base);
void rpp_driver::SdkWrapper::sm_config_set_in_pin_base(pio_sm_config* c,
                                                       uint in_base) {
  ::sm_config_set_in_pin_base(c, in_base);
}
// --------------------------------------------------
extern "C" void sm_config_set_in_pin_count(pio_sm_config* c, uint in_count);
void rpp_driver::SdkWrapper::sm_config_set_in_pin_count(pio_sm_config* c,
                                                        uint in_count) {
  ::sm_config_set_in_pin_count(c, in_count);
}
// --------------------------------------------------
extern "C" void sm_config_set_in_pins(pio_sm_config* c, uint in_base);
void rpp_driver::SdkWrapper::sm_config_set_in_pins(pio_sm_config* c,
                                                   uint in_base) {
  ::sm_config_set_in_pins(c, in_base);
}
// --------------------------------------------------
extern "C" void sm_config_set_in_shift(pio_sm_config* c, bool shift_right,
                                       bool autopush, uint push_threshold);
void rpp_driver::SdkWrapper::sm_config_set_in_shift(pio_sm_config* c,
                                                    bool shift_right,
                                                    bool autopush,
                                                    uint push_threshold) {
  ::sm_config_set_in_shift(c, shift_right, autopush, push_threshold);
}
// --------------------------------------------------
extern "C" void sm_config_set_jmp_pin(pio_sm_config* c, uint pin);
void rpp_driver::SdkWrapper::sm_config_set_jmp_pin(pio_sm_config* c, uint pin) {
  ::sm_config_set_jmp_pin(c, pin);
}
// --------------------------------------------------
extern "C" void sm_config_set_mov_status(pio_sm_config* c,
                                         enum pio_mov_status_type status_sel,
                                         uint status_n);
void rpp_driver::SdkWrapper::sm_config_set_mov_status(
    pio_sm_config* c, enum pio_mov_status_type status_sel, uint status_n) {
  ::sm_config_set_mov_status(c, status_sel, status_n);
}
// --------------------------------------------------
extern "C" void sm_config_set_out_pin_base(pio_sm_config* c, uint out_base);
void rpp_driver::SdkWrapper::sm_config_set_out_pin_base(pio_sm_config* c,
                                                        uint out_base) {
  ::sm_config_set_out_pin_base(c, out_base);
}
// --------------------------------------------------
extern "C" void sm_config_set_out_pin_count(pio_sm_config* c, uint out_count);
void rpp_driver::SdkWrapper::sm_config_set_out_pin_count(pio_sm_config* c,
                                                         uint out_count) {
  ::sm_config_set_out_pin_count(c, out_count);
}
// --------------------------------------------------
extern "C" void sm_config_set_out_pins(pio_sm_config* c, uint out_base,
                                       uint out_count);
void rpp_driver::SdkWrapper::sm_config_set_out_pins(pio_sm_config* c,
                                                    uint out_base,
                                                    uint out_count) {
  ::sm_config_set_out_pins(c, out_base, out_count);
}
// --------------------------------------------------
extern "C" void sm_config_set_out_shift(pio_sm_config* c, bool shift_right,
                                        bool autopull, uint pull_threshold);
void rpp_driver::SdkWrapper::sm_config_set_out_shift(pio_sm_config* c,
                                                     bool shift_right,
                                                     bool autopull,
                                                     uint pull_threshold) {
  ::sm_config_set_out_shift(c, shift_right, autopull, pull_threshold);
}
// --------------------------------------------------
extern "C" void sm_config_set_out_special(pio_sm_config* c, bool sticky,
                                          bool has_enable_pin,
                                          uint enable_pin_index);
void rpp_driver::SdkWrapper::sm_config_set_out_special(pio_sm_config* c,
                                                       bool sticky,
                                                       bool has_enable_pin,
                                                       uint enable_pin_index) {
  ::sm_config_set_out_special(c, sticky, has_enable_pin, enable_pin_index);
}
// --------------------------------------------------
extern "C" void sm_config_set_set_pin_base(pio_sm_config* c, uint set_base);
void rpp_driver::SdkWrapper::sm_config_set_set_pin_base(pio_sm_config* c,
                                                        uint set_base) {
  ::sm_config_set_set_pin_base(c, set_base);
}
// --------------------------------------------------
extern "C" void sm_config_set_set_pin_count(pio_sm_config* c, uint set_count);
void rpp_driver::SdkWrapper::sm_config_set_set_pin_count(pio_sm_config* c,
                                                         uint set_count) {
  ::sm_config_set_set_pin_count(c, set_count);
}
// --------------------------------------------------
extern "C" void sm_config_set_set_pins(pio_sm_config* c, uint set_base,
                                       uint set_count);
void rpp_driver::SdkWrapper::sm_config_set_set_pins(pio_sm_config* c,
                                                    uint set_base,
                                                    uint set_count) {
  ::sm_config_set_set_pins(c, set_base, set_count);
}
// --------------------------------------------------
extern "C" void sm_config_set_sideset(pio_sm_config* c, uint bit_count,
                                      bool optional, bool pindirs);
void rpp_driver::SdkWrapper::sm_config_set_sideset(pio_sm_config* c,
                                                   uint bit_count,
                                                   bool optional,
                                                   bool pindirs) {
  ::sm_config_set_sideset(c, bit_count, optional, pindirs);
}
// --------------------------------------------------
extern "C" void sm_config_set_sideset_pin_base(pio_sm_config* c,
                                               uint sideset_base);
void rpp_driver::SdkWrapper::sm_config_set_sideset_pin_base(pio_sm_config* c,
                                                            uint sideset_base) {
  ::sm_config_set_sideset_pin_base(c, sideset_base);
}
// --------------------------------------------------
extern "C" void sm_config_set_sideset_pins(pio_sm_config* c, uint sideset_base);
void rpp_driver::SdkWrapper::sm_config_set_sideset_pins(pio_sm_config* c,
                                                        uint sideset_base) {
  ::sm_config_set_sideset_pins(c, sideset_base);
}
// --------------------------------------------------
extern "C" void sm_config_set_wrap(pio_sm_config* c, uint wrap_target,
                                   uint wrap);
void rpp_driver::SdkWrapper::sm_config_set_wrap(pio_sm_config* c,
                                                uint wrap_target, uint wrap) {
  ::sm_config_set_wrap(c, wrap_target, wrap);
}
#endif  //  __has_include(<hardware/pio.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/powman.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void powman_clear_alarm(void);
void rpp_driver::SdkWrapper::powman_clear_alarm(void) {
  ::powman_clear_alarm();
}
// --------------------------------------------------
extern "C" void powman_clear_bits(volatile uint32_t* reg, uint32_t bits);
void rpp_driver::SdkWrapper::powman_clear_bits(volatile uint32_t* reg,
                                               uint32_t bits) {
  ::powman_clear_bits(reg, bits);
}
// --------------------------------------------------
extern "C" bool powman_configure_wakeup_state(powman_power_state sleep_state,
                                              powman_power_state wakeup_state);
bool rpp_driver::SdkWrapper::powman_configure_wakeup_state(
    powman_power_state sleep_state, powman_power_state wakeup_state) {
  return ::powman_configure_wakeup_state(sleep_state, wakeup_state);
}
// --------------------------------------------------
extern "C" void powman_disable_alarm_wakeup(void);
void rpp_driver::SdkWrapper::powman_disable_alarm_wakeup(void) {
  ::powman_disable_alarm_wakeup();
}
// --------------------------------------------------
extern "C" void powman_disable_all_wakeups(void);
void rpp_driver::SdkWrapper::powman_disable_all_wakeups(void) {
  ::powman_disable_all_wakeups();
}
// --------------------------------------------------
extern "C" void powman_disable_gpio_wakeup(uint gpio_wakeup_num);
void rpp_driver::SdkWrapper::powman_disable_gpio_wakeup(uint gpio_wakeup_num) {
  ::powman_disable_gpio_wakeup(gpio_wakeup_num);
}
// --------------------------------------------------
extern "C" void powman_enable_alarm_wakeup_at_ms(uint64_t alarm_time_ms);
void rpp_driver::SdkWrapper::powman_enable_alarm_wakeup_at_ms(
    uint64_t alarm_time_ms) {
  ::powman_enable_alarm_wakeup_at_ms(alarm_time_ms);
}
// --------------------------------------------------
extern "C" void powman_enable_gpio_wakeup(uint gpio_wakeup_num, uint32_t gpio,
                                          bool edge, bool high);
void rpp_driver::SdkWrapper::powman_enable_gpio_wakeup(uint gpio_wakeup_num,
                                                       uint32_t gpio, bool edge,
                                                       bool high) {
  ::powman_enable_gpio_wakeup(gpio_wakeup_num, gpio, edge, high);
}
// --------------------------------------------------
extern "C" powman_power_state powman_get_power_state(void);
powman_power_state rpp_driver::SdkWrapper::powman_get_power_state(void) {
  return ::powman_get_power_state();
}
// --------------------------------------------------
extern "C" bool powman_power_state_is_domain_on(
    powman_power_state state, enum powman_power_domains domain);
bool rpp_driver::SdkWrapper::powman_power_state_is_domain_on(
    powman_power_state state, enum powman_power_domains domain) {
  return ::powman_power_state_is_domain_on(state, domain);
}
// --------------------------------------------------
extern "C" powman_power_state powman_power_state_with_domain_off(
    powman_power_state orig, enum powman_power_domains domain);
powman_power_state rpp_driver::SdkWrapper::powman_power_state_with_domain_off(
    powman_power_state orig, enum powman_power_domains domain) {
  return ::powman_power_state_with_domain_off(orig, domain);
}
// --------------------------------------------------
extern "C" powman_power_state powman_power_state_with_domain_on(
    powman_power_state orig, enum powman_power_domains domain);
powman_power_state rpp_driver::SdkWrapper::powman_power_state_with_domain_on(
    powman_power_state orig, enum powman_power_domains domain) {
  return ::powman_power_state_with_domain_on(orig, domain);
}
// --------------------------------------------------
extern "C" void powman_set_bits(volatile uint32_t* reg, uint32_t bits);
void rpp_driver::SdkWrapper::powman_set_bits(volatile uint32_t* reg,
                                             uint32_t bits) {
  ::powman_set_bits(reg, bits);
}
// --------------------------------------------------
extern "C" void powman_set_debug_power_request_ignored(bool ignored);
void rpp_driver::SdkWrapper::powman_set_debug_power_request_ignored(
    bool ignored) {
  ::powman_set_debug_power_request_ignored(ignored);
}
// --------------------------------------------------
extern "C" int powman_set_power_state(powman_power_state state);
int rpp_driver::SdkWrapper::powman_set_power_state(powman_power_state state) {
  return ::powman_set_power_state(state);
}
// --------------------------------------------------
extern "C" void powman_timer_disable_alarm(void);
void rpp_driver::SdkWrapper::powman_timer_disable_alarm(void) {
  ::powman_timer_disable_alarm();
}
// --------------------------------------------------
extern "C" void powman_timer_disable_gpio_1hz_sync(void);
void rpp_driver::SdkWrapper::powman_timer_disable_gpio_1hz_sync(void) {
  ::powman_timer_disable_gpio_1hz_sync();
}
// --------------------------------------------------
extern "C" void powman_timer_enable_alarm_at_ms(uint64_t alarm_time_ms);
void rpp_driver::SdkWrapper::powman_timer_enable_alarm_at_ms(
    uint64_t alarm_time_ms) {
  ::powman_timer_enable_alarm_at_ms(alarm_time_ms);
}
// --------------------------------------------------
extern "C" void powman_timer_enable_gpio_1hz_sync(uint32_t gpio);
void rpp_driver::SdkWrapper::powman_timer_enable_gpio_1hz_sync(uint32_t gpio) {
  ::powman_timer_enable_gpio_1hz_sync(gpio);
}
// --------------------------------------------------
extern "C" uint64_t powman_timer_get_ms(void);
uint64_t rpp_driver::SdkWrapper::powman_timer_get_ms(void) {
  return ::powman_timer_get_ms();
}
// --------------------------------------------------
extern "C" bool powman_timer_is_running(void);
bool rpp_driver::SdkWrapper::powman_timer_is_running(void) {
  return ::powman_timer_is_running();
}
// --------------------------------------------------
extern "C" void powman_timer_set_1khz_tick_source_gpio(uint32_t gpio);
void rpp_driver::SdkWrapper::powman_timer_set_1khz_tick_source_gpio(
    uint32_t gpio) {
  ::powman_timer_set_1khz_tick_source_gpio(gpio);
}
// --------------------------------------------------
extern "C" void powman_timer_set_1khz_tick_source_lposc(void);
void rpp_driver::SdkWrapper::powman_timer_set_1khz_tick_source_lposc(void) {
  ::powman_timer_set_1khz_tick_source_lposc();
}
// --------------------------------------------------
extern "C" void powman_timer_set_1khz_tick_source_lposc_with_hz(
    uint32_t lposc_freq_hz);
void rpp_driver::SdkWrapper::powman_timer_set_1khz_tick_source_lposc_with_hz(
    uint32_t lposc_freq_hz) {
  ::powman_timer_set_1khz_tick_source_lposc_with_hz(lposc_freq_hz);
}
// --------------------------------------------------
extern "C" void powman_timer_set_1khz_tick_source_xosc(void);
void rpp_driver::SdkWrapper::powman_timer_set_1khz_tick_source_xosc(void) {
  ::powman_timer_set_1khz_tick_source_xosc();
}
// --------------------------------------------------
extern "C" void powman_timer_set_1khz_tick_source_xosc_with_hz(
    uint32_t xosc_freq_hz);
void rpp_driver::SdkWrapper::powman_timer_set_1khz_tick_source_xosc_with_hz(
    uint32_t xosc_freq_hz) {
  ::powman_timer_set_1khz_tick_source_xosc_with_hz(xosc_freq_hz);
}
// --------------------------------------------------
extern "C" void powman_timer_set_ms(uint64_t time_ms);
void rpp_driver::SdkWrapper::powman_timer_set_ms(uint64_t time_ms) {
  ::powman_timer_set_ms(time_ms);
}
// --------------------------------------------------
extern "C" void powman_timer_start(void);
void rpp_driver::SdkWrapper::powman_timer_start(void) {
  ::powman_timer_start();
}
// --------------------------------------------------
extern "C" void powman_timer_stop(void);
void rpp_driver::SdkWrapper::powman_timer_stop(void) { ::powman_timer_stop(); }
#endif  //  __has_include(<hardware/powman.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/pwm.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void pwm_advance_count(uint slice_num);
void rpp_driver::SdkWrapper::pwm_advance_count(uint slice_num) {
  ::pwm_advance_count(slice_num);
}
// --------------------------------------------------
extern "C" void pwm_clear_irq(uint slice_num);
void rpp_driver::SdkWrapper::pwm_clear_irq(uint slice_num) {
  ::pwm_clear_irq(slice_num);
}
// --------------------------------------------------
extern "C" void pwm_config_set_clkdiv(pwm_config* c, float div);
void rpp_driver::SdkWrapper::pwm_config_set_clkdiv(pwm_config* c, float div) {
  ::pwm_config_set_clkdiv(c, div);
}
// --------------------------------------------------
extern "C" void pwm_config_set_clkdiv_int(pwm_config* c, uint div);
void rpp_driver::SdkWrapper::pwm_config_set_clkdiv_int(pwm_config* c,
                                                       uint div) {
  ::pwm_config_set_clkdiv_int(c, div);
}
// --------------------------------------------------
extern "C" void pwm_config_set_clkdiv_int_frac(pwm_config* c, uint8_t integer,
                                               uint8_t fract);
void rpp_driver::SdkWrapper::pwm_config_set_clkdiv_int_frac(pwm_config* c,
                                                            uint8_t integer,
                                                            uint8_t fract) {
  ::pwm_config_set_clkdiv_int_frac(c, integer, fract);
}
// --------------------------------------------------
extern "C" void pwm_config_set_clkdiv_mode(pwm_config* c,
                                           enum pwm_clkdiv_mode mode);
void rpp_driver::SdkWrapper::pwm_config_set_clkdiv_mode(
    pwm_config* c, enum pwm_clkdiv_mode mode) {
  ::pwm_config_set_clkdiv_mode(c, mode);
}
// --------------------------------------------------
extern "C" void pwm_config_set_output_polarity(pwm_config* c, bool a, bool b);
void rpp_driver::SdkWrapper::pwm_config_set_output_polarity(pwm_config* c,
                                                            bool a, bool b) {
  ::pwm_config_set_output_polarity(c, a, b);
}
// --------------------------------------------------
extern "C" void pwm_config_set_phase_correct(pwm_config* c, bool phase_correct);
void rpp_driver::SdkWrapper::pwm_config_set_phase_correct(pwm_config* c,
                                                          bool phase_correct) {
  ::pwm_config_set_phase_correct(c, phase_correct);
}
// --------------------------------------------------
extern "C" void pwm_config_set_wrap(pwm_config* c, uint16_t wrap);
void rpp_driver::SdkWrapper::pwm_config_set_wrap(pwm_config* c, uint16_t wrap) {
  ::pwm_config_set_wrap(c, wrap);
}
// --------------------------------------------------
extern "C" void pwm_force_irq(uint slice_num);
void rpp_driver::SdkWrapper::pwm_force_irq(uint slice_num) {
  ::pwm_force_irq(slice_num);
}
// --------------------------------------------------
extern "C" void pwm_force_irq0(uint slice_num);
void rpp_driver::SdkWrapper::pwm_force_irq0(uint slice_num) {
  ::pwm_force_irq0(slice_num);
}
// --------------------------------------------------
extern "C" void pwm_force_irq1(uint slice_num);
void rpp_driver::SdkWrapper::pwm_force_irq1(uint slice_num) {
  ::pwm_force_irq1(slice_num);
}
// --------------------------------------------------
extern "C" uint16_t pwm_get_counter(uint slice_num);
uint16_t rpp_driver::SdkWrapper::pwm_get_counter(uint slice_num) {
  return ::pwm_get_counter(slice_num);
}
// --------------------------------------------------
extern "C" pwm_config pwm_get_default_config(void);
pwm_config rpp_driver::SdkWrapper::pwm_get_default_config(void) {
  return ::pwm_get_default_config();
}
// --------------------------------------------------
extern "C" uint pwm_get_dreq(uint slice_num);
uint rpp_driver::SdkWrapper::pwm_get_dreq(uint slice_num) {
  return ::pwm_get_dreq(slice_num);
}
// --------------------------------------------------
extern "C" uint32_t pwm_get_irq0_status_mask(void);
uint32_t rpp_driver::SdkWrapper::pwm_get_irq0_status_mask(void) {
  return ::pwm_get_irq0_status_mask();
}
// --------------------------------------------------
extern "C" uint32_t pwm_get_irq1_status_mask(void);
uint32_t rpp_driver::SdkWrapper::pwm_get_irq1_status_mask(void) {
  return ::pwm_get_irq1_status_mask();
}
// --------------------------------------------------
extern "C" uint32_t pwm_get_irq_status_mask(void);
uint32_t rpp_driver::SdkWrapper::pwm_get_irq_status_mask(void) {
  return ::pwm_get_irq_status_mask();
}
// --------------------------------------------------
extern "C" uint pwm_gpio_to_channel(uint gpio);
uint rpp_driver::SdkWrapper::pwm_gpio_to_channel(uint gpio) {
  return ::pwm_gpio_to_channel(gpio);
}
// --------------------------------------------------
extern "C" uint pwm_gpio_to_slice_num(uint gpio);
uint rpp_driver::SdkWrapper::pwm_gpio_to_slice_num(uint gpio) {
  return ::pwm_gpio_to_slice_num(gpio);
}
// --------------------------------------------------
extern "C" void pwm_init(uint slice_num, pwm_config* c, bool start);
void rpp_driver::SdkWrapper::pwm_init(uint slice_num, pwm_config* c,
                                      bool start) {
  ::pwm_init(slice_num, c, start);
}
// --------------------------------------------------
extern "C" void pwm_irqn_force(uint irq_index, uint slice_num);
void rpp_driver::SdkWrapper::pwm_irqn_force(uint irq_index, uint slice_num) {
  ::pwm_irqn_force(irq_index, slice_num);
}
// --------------------------------------------------
extern "C" uint32_t pwm_irqn_get_status_mask(uint irq_index);
uint32_t rpp_driver::SdkWrapper::pwm_irqn_get_status_mask(uint irq_index) {
  return ::pwm_irqn_get_status_mask(irq_index);
}
// --------------------------------------------------
extern "C" void pwm_irqn_set_slice_enabled(uint irq_index, uint slice_num,
                                           bool enabled);
void rpp_driver::SdkWrapper::pwm_irqn_set_slice_enabled(uint irq_index,
                                                        uint slice_num,
                                                        bool enabled) {
  ::pwm_irqn_set_slice_enabled(irq_index, slice_num, enabled);
}
// --------------------------------------------------
extern "C" void pwm_irqn_set_slice_mask_enabled(uint irq_index, uint slice_mask,
                                                bool enabled);
void rpp_driver::SdkWrapper::pwm_irqn_set_slice_mask_enabled(uint irq_index,
                                                             uint slice_mask,
                                                             bool enabled) {
  ::pwm_irqn_set_slice_mask_enabled(irq_index, slice_mask, enabled);
}
// --------------------------------------------------
extern "C" void pwm_retard_count(uint slice_num);
void rpp_driver::SdkWrapper::pwm_retard_count(uint slice_num) {
  ::pwm_retard_count(slice_num);
}
// --------------------------------------------------
extern "C" void pwm_set_both_levels(uint slice_num, uint16_t level_a,
                                    uint16_t level_b);
void rpp_driver::SdkWrapper::pwm_set_both_levels(uint slice_num,
                                                 uint16_t level_a,
                                                 uint16_t level_b) {
  ::pwm_set_both_levels(slice_num, level_a, level_b);
}
// --------------------------------------------------
extern "C" void pwm_set_chan_level(uint slice_num, uint chan, uint16_t level);
void rpp_driver::SdkWrapper::pwm_set_chan_level(uint slice_num, uint chan,
                                                uint16_t level) {
  ::pwm_set_chan_level(slice_num, chan, level);
}
// --------------------------------------------------
extern "C" void pwm_set_clkdiv(uint slice_num, float divider);
void rpp_driver::SdkWrapper::pwm_set_clkdiv(uint slice_num, float divider) {
  ::pwm_set_clkdiv(slice_num, divider);
}
// --------------------------------------------------
extern "C" void pwm_set_clkdiv_int_frac(uint slice_num, uint8_t integer,
                                        uint8_t fract);
void rpp_driver::SdkWrapper::pwm_set_clkdiv_int_frac(uint slice_num,
                                                     uint8_t integer,
                                                     uint8_t fract) {
  ::pwm_set_clkdiv_int_frac(slice_num, integer, fract);
}
// --------------------------------------------------
extern "C" void pwm_set_clkdiv_mode(uint slice_num, enum pwm_clkdiv_mode mode);
void rpp_driver::SdkWrapper::pwm_set_clkdiv_mode(uint slice_num,
                                                 enum pwm_clkdiv_mode mode) {
  ::pwm_set_clkdiv_mode(slice_num, mode);
}
// --------------------------------------------------
extern "C" void pwm_set_counter(uint slice_num, uint16_t c);
void rpp_driver::SdkWrapper::pwm_set_counter(uint slice_num, uint16_t c) {
  ::pwm_set_counter(slice_num, c);
}
// --------------------------------------------------
extern "C" void pwm_set_enabled(uint slice_num, bool enabled);
void rpp_driver::SdkWrapper::pwm_set_enabled(uint slice_num, bool enabled) {
  ::pwm_set_enabled(slice_num, enabled);
}
// --------------------------------------------------
extern "C" void pwm_set_gpio_level(uint gpio, uint16_t level);
void rpp_driver::SdkWrapper::pwm_set_gpio_level(uint gpio, uint16_t level) {
  ::pwm_set_gpio_level(gpio, level);
}
// --------------------------------------------------
extern "C" void pwm_set_irq0_enabled(uint slice_num, bool enabled);
void rpp_driver::SdkWrapper::pwm_set_irq0_enabled(uint slice_num,
                                                  bool enabled) {
  ::pwm_set_irq0_enabled(slice_num, enabled);
}
// --------------------------------------------------
extern "C" void pwm_set_irq0_mask_enabled(uint32_t slice_mask, bool enabled);
void rpp_driver::SdkWrapper::pwm_set_irq0_mask_enabled(uint32_t slice_mask,
                                                       bool enabled) {
  ::pwm_set_irq0_mask_enabled(slice_mask, enabled);
}
// --------------------------------------------------
extern "C" void pwm_set_irq1_enabled(uint slice_num, bool enabled);
void rpp_driver::SdkWrapper::pwm_set_irq1_enabled(uint slice_num,
                                                  bool enabled) {
  ::pwm_set_irq1_enabled(slice_num, enabled);
}
// --------------------------------------------------
extern "C" void pwm_set_irq1_mask_enabled(uint32_t slice_mask, bool enabled);
void rpp_driver::SdkWrapper::pwm_set_irq1_mask_enabled(uint32_t slice_mask,
                                                       bool enabled) {
  ::pwm_set_irq1_mask_enabled(slice_mask, enabled);
}
// --------------------------------------------------
extern "C" void pwm_set_irq_enabled(uint slice_num, bool enabled);
void rpp_driver::SdkWrapper::pwm_set_irq_enabled(uint slice_num, bool enabled) {
  ::pwm_set_irq_enabled(slice_num, enabled);
}
// --------------------------------------------------
extern "C" void pwm_set_irq_mask_enabled(uint32_t slice_mask, bool enabled);
void rpp_driver::SdkWrapper::pwm_set_irq_mask_enabled(uint32_t slice_mask,
                                                      bool enabled) {
  ::pwm_set_irq_mask_enabled(slice_mask, enabled);
}
// --------------------------------------------------
extern "C" void pwm_set_mask_enabled(uint32_t mask);
void rpp_driver::SdkWrapper::pwm_set_mask_enabled(uint32_t mask) {
  ::pwm_set_mask_enabled(mask);
}
// --------------------------------------------------
extern "C" void pwm_set_output_polarity(uint slice_num, bool a, bool b);
void rpp_driver::SdkWrapper::pwm_set_output_polarity(uint slice_num, bool a,
                                                     bool b) {
  ::pwm_set_output_polarity(slice_num, a, b);
}
// --------------------------------------------------
extern "C" void pwm_set_phase_correct(uint slice_num, bool phase_correct);
void rpp_driver::SdkWrapper::pwm_set_phase_correct(uint slice_num,
                                                   bool phase_correct) {
  ::pwm_set_phase_correct(slice_num, phase_correct);
}
// --------------------------------------------------
extern "C" void pwm_set_wrap(uint slice_num, uint16_t wrap);
void rpp_driver::SdkWrapper::pwm_set_wrap(uint slice_num, uint16_t wrap) {
  ::pwm_set_wrap(slice_num, wrap);
}
#endif  //  __has_include(<hardware/pwm.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/rcp.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void rcp_b2and(uint32_t b0, uint32_t b1);
void rpp_driver::SdkWrapper::rcp_b2and(uint32_t b0, uint32_t b1) {
  ::rcp_b2and(b0, b1);
}
// --------------------------------------------------
extern "C" void rcp_b2and_nodelay(uint32_t b0, uint32_t b1);
void rpp_driver::SdkWrapper::rcp_b2and_nodelay(uint32_t b0, uint32_t b1) {
  ::rcp_b2and_nodelay(b0, b1);
}
// --------------------------------------------------
extern "C" void rcp_b2or(uint32_t b0, uint32_t b1);
void rpp_driver::SdkWrapper::rcp_b2or(uint32_t b0, uint32_t b1) {
  ::rcp_b2or(b0, b1);
}
// --------------------------------------------------
extern "C" void rcp_b2or_nodelay(uint32_t b0, uint32_t b1);
void rpp_driver::SdkWrapper::rcp_b2or_nodelay(uint32_t b0, uint32_t b1) {
  ::rcp_b2or_nodelay(b0, b1);
}
// --------------------------------------------------
extern "C" void rcp_b2valid(uint32_t b0, uint32_t b1);
void rpp_driver::SdkWrapper::rcp_b2valid(uint32_t b0, uint32_t b1) {
  ::rcp_b2valid(b0, b1);
}
// --------------------------------------------------
extern "C" void rcp_b2valid_nodelay(uint32_t b0, uint32_t b1);
void rpp_driver::SdkWrapper::rcp_b2valid_nodelay(uint32_t b0, uint32_t b1) {
  ::rcp_b2valid_nodelay(b0, b1);
}
// --------------------------------------------------
extern "C" void rcp_bfalse(uint32_t b);
void rpp_driver::SdkWrapper::rcp_bfalse(uint32_t b) { ::rcp_bfalse(b); }
// --------------------------------------------------
extern "C" void rcp_bfalse_nodelay(uint32_t b);
void rpp_driver::SdkWrapper::rcp_bfalse_nodelay(uint32_t b) {
  ::rcp_bfalse_nodelay(b);
}
// --------------------------------------------------
extern "C" void rcp_btrue(uint32_t b);
void rpp_driver::SdkWrapper::rcp_btrue(uint32_t b) { ::rcp_btrue(b); }
// --------------------------------------------------
extern "C" void rcp_btrue_nodelay(uint32_t b);
void rpp_driver::SdkWrapper::rcp_btrue_nodelay(uint32_t b) {
  ::rcp_btrue_nodelay(b);
}
// --------------------------------------------------
extern "C" void rcp_bvalid(uint32_t b);
void rpp_driver::SdkWrapper::rcp_bvalid(uint32_t b) { ::rcp_bvalid(b); }
// --------------------------------------------------
extern "C" void rcp_bvalid_nodelay(uint32_t b);
void rpp_driver::SdkWrapper::rcp_bvalid_nodelay(uint32_t b) {
  ::rcp_bvalid_nodelay(b);
}
// --------------------------------------------------
extern "C" void rcp_bxorfalse(uint32_t b, uint32_t mask);
void rpp_driver::SdkWrapper::rcp_bxorfalse(uint32_t b, uint32_t mask) {
  ::rcp_bxorfalse(b, mask);
}
// --------------------------------------------------
extern "C" void rcp_bxorfalse_nodelay(uint32_t b, uint32_t mask);
void rpp_driver::SdkWrapper::rcp_bxorfalse_nodelay(uint32_t b, uint32_t mask) {
  ::rcp_bxorfalse_nodelay(b, mask);
}
// --------------------------------------------------
extern "C" void rcp_bxortrue(uint32_t b, uint32_t mask);
void rpp_driver::SdkWrapper::rcp_bxortrue(uint32_t b, uint32_t mask) {
  ::rcp_bxortrue(b, mask);
}
// --------------------------------------------------
extern "C" void rcp_bxortrue_nodelay(uint32_t b, uint32_t mask);
void rpp_driver::SdkWrapper::rcp_bxortrue_nodelay(uint32_t b, uint32_t mask) {
  ::rcp_bxortrue_nodelay(b, mask);
}
// --------------------------------------------------
extern "C" void rcp_bxorvalid(uint32_t b, uint32_t mask);
void rpp_driver::SdkWrapper::rcp_bxorvalid(uint32_t b, uint32_t mask) {
  ::rcp_bxorvalid(b, mask);
}
// --------------------------------------------------
extern "C" void rcp_bxorvalid_nodelay(uint32_t b, uint32_t mask);
void rpp_driver::SdkWrapper::rcp_bxorvalid_nodelay(uint32_t b, uint32_t mask) {
  ::rcp_bxorvalid_nodelay(b, mask);
}
// --------------------------------------------------
extern "C" uint32_t rcp_canary_status(void);
uint32_t rpp_driver::SdkWrapper::rcp_canary_status(void) {
  return ::rcp_canary_status();
}
// --------------------------------------------------
extern "C" uint32_t rcp_canary_status_nodelay(void);
uint32_t rpp_driver::SdkWrapper::rcp_canary_status_nodelay(void) {
  return ::rcp_canary_status_nodelay();
}
// --------------------------------------------------
extern "C" void rcp_iequal(uint32_t x, uint32_t y);
void rpp_driver::SdkWrapper::rcp_iequal(uint32_t x, uint32_t y) {
  ::rcp_iequal(x, y);
}
// --------------------------------------------------
extern "C" void rcp_iequal_nodelay(uint32_t x, uint32_t y);
void rpp_driver::SdkWrapper::rcp_iequal_nodelay(uint32_t x, uint32_t y) {
  ::rcp_iequal_nodelay(x, y);
}
// --------------------------------------------------
extern "C" void rcp_ivalid(uint32_t x, uint32_t parity);
void rpp_driver::SdkWrapper::rcp_ivalid(uint32_t x, uint32_t parity) {
  ::rcp_ivalid(x, parity);
}
// --------------------------------------------------
extern "C" void rcp_ivalid_nodelay(uint32_t x, uint32_t parity);
void rpp_driver::SdkWrapper::rcp_ivalid_nodelay(uint32_t x, uint32_t parity) {
  ::rcp_ivalid_nodelay(x, parity);
}
// --------------------------------------------------
extern "C" void rcp_panic(void);
void rpp_driver::SdkWrapper::rcp_panic(void) { ::rcp_panic(); }
// --------------------------------------------------
extern "C" uint8_t rcp_random_byte(void);
uint8_t rpp_driver::SdkWrapper::rcp_random_byte(void) {
  return ::rcp_random_byte();
}
// --------------------------------------------------
extern "C" uint8_t rcp_random_byte_nodelay(void);
uint8_t rpp_driver::SdkWrapper::rcp_random_byte_nodelay(void) {
  return ::rcp_random_byte_nodelay();
}
// --------------------------------------------------
extern "C" void rcp_salt_core0(uint64_t salt);
void rpp_driver::SdkWrapper::rcp_salt_core0(uint64_t salt) {
  ::rcp_salt_core0(salt);
}
// --------------------------------------------------
extern "C" void rcp_salt_core0_nodelay(uint64_t salt);
void rpp_driver::SdkWrapper::rcp_salt_core0_nodelay(uint64_t salt) {
  ::rcp_salt_core0_nodelay(salt);
}
// --------------------------------------------------
extern "C" void rcp_salt_core1(uint64_t salt);
void rpp_driver::SdkWrapper::rcp_salt_core1(uint64_t salt) {
  ::rcp_salt_core1(salt);
}
// --------------------------------------------------
extern "C" void rcp_salt_core1_nodelay(uint64_t salt);
void rpp_driver::SdkWrapper::rcp_salt_core1_nodelay(uint64_t salt) {
  ::rcp_salt_core1_nodelay(salt);
}
#endif  //  __has_include(<hardware/rcp.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/resets.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void reset_block(uint32_t bits);
void rpp_driver::SdkWrapper::reset_block(uint32_t bits) { ::reset_block(bits); }
// --------------------------------------------------
extern "C" void reset_block_mask(uint32_t bits);
void rpp_driver::SdkWrapper::reset_block_mask(uint32_t bits) {
  ::reset_block_mask(bits);
}
// --------------------------------------------------
extern "C" void reset_block_num(uint32_t block_num);
void rpp_driver::SdkWrapper::reset_block_num(uint32_t block_num) {
  ::reset_block_num(block_num);
}
// --------------------------------------------------
extern "C" void reset_block_reg_mask(io_rw_32* reset, uint32_t mask);
void rpp_driver::SdkWrapper::reset_block_reg_mask(io_rw_32* reset,
                                                  uint32_t mask) {
  ::reset_block_reg_mask(reset, mask);
}
// --------------------------------------------------
extern "C" void reset_unreset_block_num_wait_blocking(uint block_num);
void rpp_driver::SdkWrapper::reset_unreset_block_num_wait_blocking(
    uint block_num) {
  ::reset_unreset_block_num_wait_blocking(block_num);
}
// --------------------------------------------------
extern "C" void unreset_block(uint32_t bits);
void rpp_driver::SdkWrapper::unreset_block(uint32_t bits) {
  ::unreset_block(bits);
}
// --------------------------------------------------
extern "C" void unreset_block_mask(uint32_t bits);
void rpp_driver::SdkWrapper::unreset_block_mask(uint32_t bits) {
  ::unreset_block_mask(bits);
}
// --------------------------------------------------
extern "C" void unreset_block_mask_wait_blocking(uint32_t bits);
void rpp_driver::SdkWrapper::unreset_block_mask_wait_blocking(uint32_t bits) {
  ::unreset_block_mask_wait_blocking(bits);
}
// --------------------------------------------------
extern "C" void unreset_block_num(uint block_num);
void rpp_driver::SdkWrapper::unreset_block_num(uint block_num) {
  ::unreset_block_num(block_num);
}
// --------------------------------------------------
extern "C" void unreset_block_num_wait_blocking(uint block_num);
void rpp_driver::SdkWrapper::unreset_block_num_wait_blocking(uint block_num) {
  ::unreset_block_num_wait_blocking(block_num);
}
// --------------------------------------------------
extern "C" void unreset_block_reg_mask(io_rw_32* reset, uint32_t mask);
void rpp_driver::SdkWrapper::unreset_block_reg_mask(io_rw_32* reset,
                                                    uint32_t mask) {
  ::unreset_block_reg_mask(reset, mask);
}
// --------------------------------------------------
extern "C" void unreset_block_reg_mask_wait_blocking(io_rw_32* reset,
                                                     io_ro_32* reset_done,
                                                     uint32_t mask);
void rpp_driver::SdkWrapper::unreset_block_reg_mask_wait_blocking(
    io_rw_32* reset, io_ro_32* reset_done, uint32_t mask) {
  ::unreset_block_reg_mask_wait_blocking(reset, reset_done, mask);
}
// --------------------------------------------------
extern "C" void unreset_block_wait(uint32_t bits);
void rpp_driver::SdkWrapper::unreset_block_wait(uint32_t bits) {
  ::unreset_block_wait(bits);
}
#endif  //  __has_include(<hardware/resets.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/rtc.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void rtc_disable_alarm(void);
void rpp_driver::SdkWrapper::rtc_disable_alarm(void) { ::rtc_disable_alarm(); }
// --------------------------------------------------
extern "C" void rtc_enable_alarm(void);
void rpp_driver::SdkWrapper::rtc_enable_alarm(void) { ::rtc_enable_alarm(); }
// --------------------------------------------------
extern "C" bool rtc_get_datetime(datetime_t* t);
bool rpp_driver::SdkWrapper::rtc_get_datetime(datetime_t* t) {
  return ::rtc_get_datetime(t);
}
// --------------------------------------------------
extern "C" void rtc_init(void);
void rpp_driver::SdkWrapper::rtc_init(void) { ::rtc_init(); }
// --------------------------------------------------
extern "C" bool rtc_running(void);
bool rpp_driver::SdkWrapper::rtc_running(void) { return ::rtc_running(); }
// --------------------------------------------------
extern "C" void rtc_set_alarm(const datetime_t* t,
                              rtc_callback_t user_callback);
void rpp_driver::SdkWrapper::rtc_set_alarm(const datetime_t* t,
                                           rtc_callback_t user_callback) {
  ::rtc_set_alarm(t, user_callback);
}
// --------------------------------------------------
extern "C" bool rtc_set_datetime(const datetime_t* t);
bool rpp_driver::SdkWrapper::rtc_set_datetime(const datetime_t* t) {
  return ::rtc_set_datetime(t);
}
#endif  //  __has_include(<hardware/rtc.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/sha256.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" bool sha256_err_not_ready(void);
bool rpp_driver::SdkWrapper::sha256_err_not_ready(void) {
  return ::sha256_err_not_ready();
}
// --------------------------------------------------
extern "C" void sha256_err_not_ready_clear(void);
void rpp_driver::SdkWrapper::sha256_err_not_ready_clear(void) {
  ::sha256_err_not_ready_clear();
}
// --------------------------------------------------
extern "C" void sha256_get_result(sha256_result_t* out,
                                  enum sha256_endianness endianness);
void rpp_driver::SdkWrapper::sha256_get_result(
    sha256_result_t* out, enum sha256_endianness endianness) {
  ::sha256_get_result(out, endianness);
}
// --------------------------------------------------
extern "C" bool sha256_is_ready(void);
bool rpp_driver::SdkWrapper::sha256_is_ready(void) {
  return ::sha256_is_ready();
}
// --------------------------------------------------
extern "C" bool sha256_is_sum_valid(void);
bool rpp_driver::SdkWrapper::sha256_is_sum_valid(void) {
  return ::sha256_is_sum_valid();
}
// --------------------------------------------------
extern "C" void sha256_put_byte(uint8_t b);
void rpp_driver::SdkWrapper::sha256_put_byte(uint8_t b) {
  ::sha256_put_byte(b);
}
// --------------------------------------------------
extern "C" void sha256_put_word(uint32_t word);
void rpp_driver::SdkWrapper::sha256_put_word(uint32_t word) {
  ::sha256_put_word(word);
}
// --------------------------------------------------
extern "C" void sha256_set_bswap(bool swap);
void rpp_driver::SdkWrapper::sha256_set_bswap(bool swap) {
  ::sha256_set_bswap(swap);
}
// --------------------------------------------------
extern "C" void sha256_set_dma_size(uint size_in_bytes);
void rpp_driver::SdkWrapper::sha256_set_dma_size(uint size_in_bytes) {
  ::sha256_set_dma_size(size_in_bytes);
}
// --------------------------------------------------
extern "C" void sha256_start(void);
void rpp_driver::SdkWrapper::sha256_start(void) { ::sha256_start(); }
// --------------------------------------------------
extern "C" void sha256_wait_ready_blocking(void);
void rpp_driver::SdkWrapper::sha256_wait_ready_blocking(void) {
  ::sha256_wait_ready_blocking();
}
// --------------------------------------------------
extern "C" void sha256_wait_valid_blocking(void);
void rpp_driver::SdkWrapper::sha256_wait_valid_blocking(void) {
  ::sha256_wait_valid_blocking();
}
#endif  //  __has_include(<hardware/sha256.h>) || __has_include(<gmock/gmock.h>)

#if __has_include(<hardware/spi.h>) || __has_include(<gmock/gmock.h>)
// --------------------------------------------------
extern "C" void spi_deinit(spi_inst_t* spi);
void rpp_driver::SdkWrapper::spi_deinit(spi_inst_t* spi) { ::spi_deinit(spi); }
// --------------------------------------------------
extern "C" uint spi_get_baudrate(const spi_inst_t* spi);
uint rpp_driver::SdkWrapper::spi_get_baudrate(const spi_inst_t* spi) {
  return ::spi_get_baudrate(spi);
}
// --------------------------------------------------
extern "C" const spi_hw_t* spi_get_const_hw(const spi_inst_t* spi);
const spi_hw_t* rpp_driver::SdkWrapper::spi_get_const_hw(
    const spi_inst_t* spi) {
  return ::spi_get_const_hw(spi);
}
// --------------------------------------------------
extern "C" uint spi_get_dreq(spi_inst_t* spi, bool is_tx);
uint rpp_driver::SdkWrapper::spi_get_dreq(spi_inst_t* spi, bool is_tx) {
  return ::spi_get_dreq(spi, is_tx);
}
// --------------------------------------------------
extern "C" spi_hw_t* spi_get_hw(spi_inst_t* spi);
spi_hw_t* rpp_driver::SdkWrapper::spi_get_hw(spi_inst_t* spi) {
  return ::spi_get_hw(spi);
}
// --------------------------------------------------
extern "C" uint spi_get_index(const spi_inst_t* spi);
uint rpp_driver::SdkWrapper::spi_get_index(const spi_inst_t* spi) {
  return ::spi_get_index(spi);
}
// --------------------------------------------------
extern "C" uint spi_init(spi_inst_t* spi, uint baudrate);
uint rpp_driver::SdkWrapper::spi_init(spi_inst_t* spi, uint baudrate) {
  return ::spi_init(spi, baudrate);
}
// --------------------------------------------------
extern "C" bool spi_is_busy(const spi_inst_t* spi);
bool rpp_driver::SdkWrapper::spi_is_busy(const spi_inst_t* spi) {
  return ::spi_is_busy(spi);
}
// --------------------------------------------------
extern "C" bool spi_is_readable(const spi_inst_t* spi);
bool rpp_driver::SdkWrapper::spi_is_readable(const spi_inst_t* spi) {
  return ::spi_is_readable(spi);
}
// --------------------------------------------------
extern "C" bool spi_is_writable(const spi_inst_t* spi);
bool rpp_driver::SdkWrapper::spi_is_writable(const spi_inst_t* spi) {
  return ::spi_is_writable(spi);
}
// --------------------------------------------------
extern "C" int spi_read16_blocking(spi_inst_t* spi, uint16_t repeated_tx_data,
                                   uint16_t* dst, size_t len);
int rpp_driver::SdkWrapper::spi_read16_blocking(spi_inst_t* spi,
                                                uint16_t repeated_tx_data,
                                                uint16_t* dst, size_t len) {
  return ::spi_read16_blocking(spi, repeated_tx_data, dst, len);
}
// --------------------------------------------------
extern "C" int spi_read_blocking(spi_inst_t* spi, uint8_t repeated_tx_data,
                                 uint8_t* dst, size_t len);
int rpp_driver::SdkWrapper::spi_read_blocking(spi_inst_t* spi,
                                              uint8_t repeated_tx_data,
                                              uint8_t* dst, size_t len) {
  return ::spi_read_blocking(spi, repeated_tx_data, dst, len);
}
// --------------------------------------------------
extern "C" uint spi_set_baudrate(spi_inst_t* spi, uint baudrate);
uint rpp_driver::SdkWrapper::spi_set_baudrate(spi_inst_t* spi, uint baudrate) {
  return ::spi_set_baudrate(spi, baudrate);
}
// --------------------------------------------------
extern "C" void spi_set_slave(spi_inst_t* spi, bool slave);
void rpp_driver::SdkWrapper::spi_set_slave(spi_inst_t* spi, bool slave) {
  ::spi_set_slave(spi, slave);
}
// --------------------------------------------------
extern "C" int spi_write16_blocking(spi_inst_t* spi, const uint16_t* src,
                                    size_t len);
int rpp_driver::SdkWrapper::spi_write16_blocking(spi_inst_t* spi,
                                                 const uint16_t* src,
                                                 size_t len) {
  return ::spi_write16_blocking(spi, src, len);
}
// --------------------------------------------------
extern "C" int spi_write16_read16_blocking(spi_inst_t* spi, const uint16_t* src,
                                           uint16_t* dst, size_t len);
int rpp_driver::SdkWrapper::spi_write16_read16_blocking(spi_inst_t* spi,
                                                        const uint16_t* src,
                                                        uint16_t* dst,
                                                        size_t len) {
  return ::spi_write16_read16_blocking(spi, src, dst, len);
}
// --------------------------------------------------
extern "C" int spi_write_blocking(spi_inst_t* spi, const uint8_t* src,
                                  size_t len);
int rpp_driver::SdkWrapper::spi_write_blocking(spi_inst_t* spi,
                                               const uint8_t* src, size_t len) {
  return ::spi_write_blocking(spi, src, len);
}
// --------------------------------------------------
extern "C" int spi_write_read_blocking(spi_inst_t* spi, const uint8_t* src,
                                       uint8_t* dst, size_t len);
int rpp_driver::SdkWrapper::spi_write_read_blocking(spi_inst_t* spi,
                                                    const uint8_t* src,
                                                    uint8_t* dst, size_t len) {
  return ::spi_write_read_blocking(spi, src, dst, len);
}
#endif  //  __has_include(<hardware/spi.h>) || __has_include(<gmock/gmock.h>)

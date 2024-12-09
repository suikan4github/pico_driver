/*
 * This file is intended to be read from the sdkwrapper.hpp.
 * The user program must not include this file.
 */

#if __has_include(<gmock/gmock.h>)
// GCOVR_EXCL_START
class MockSdkWrapper : public SdkWrapper {
 public:
  MOCK_METHOD2(absolute_time_diff_us,
               int64_t(absolute_time_t from, absolute_time_t to));
  MOCK_METHOD2(absolute_time_min,
               absolute_time_t(absolute_time_t a, absolute_time_t b));
  MOCK_METHOD4(add_alarm_at,
               alarm_id_t(absolute_time_t time, alarm_callback_t callback,
                          void* user_data, bool fire_if_past));
  MOCK_METHOD4(add_alarm_in_ms,
               alarm_id_t(uint32_t ms, alarm_callback_t callback,
                          void* user_data, bool fire_if_past));
  MOCK_METHOD4(add_alarm_in_us,
               alarm_id_t(uint64_t us, alarm_callback_t callback,
                          void* user_data, bool fire_if_past));
  MOCK_METHOD4(add_repeating_timer_ms,
               bool(int32_t delay_ms, repeating_timer_callback_t callback,
                    void* user_data, repeating_timer_t* out));
  MOCK_METHOD4(add_repeating_timer_us,
               bool(int64_t delay_us, repeating_timer_callback_t callback,
                    void* user_data, repeating_timer_t* out));
  MOCK_METHOD5(alarm_pool_add_alarm_at,
               alarm_id_t(alarm_pool_t* pool, absolute_time_t time,
                          alarm_callback_t callback, void* user_data,
                          bool fire_if_past));
  MOCK_METHOD4(alarm_pool_add_alarm_at_force_in_context,
               alarm_id_t(alarm_pool_t* pool, absolute_time_t time,
                          alarm_callback_t callback, void* user_data));
  MOCK_METHOD5(alarm_pool_add_alarm_in_ms,
               alarm_id_t(alarm_pool_t* pool, uint32_t ms,
                          alarm_callback_t callback, void* user_data,
                          bool fire_if_past));
  MOCK_METHOD5(alarm_pool_add_alarm_in_us,
               alarm_id_t(alarm_pool_t* pool, uint64_t us,
                          alarm_callback_t callback, void* user_data,
                          bool fire_if_past));
  MOCK_METHOD5(alarm_pool_add_repeating_timer_ms,
               bool(alarm_pool_t* pool, int32_t delay_ms,
                    repeating_timer_callback_t callback, void* user_data,
                    repeating_timer_t* out));
  MOCK_METHOD5(alarm_pool_add_repeating_timer_us,
               bool(alarm_pool_t* pool, int64_t delay_us,
                    repeating_timer_callback_t callback, void* user_data,
                    repeating_timer_t* out));
  MOCK_METHOD2(alarm_pool_cancel_alarm,
               bool(alarm_pool_t* pool, alarm_id_t alarm_id));
  MOCK_METHOD1(alarm_pool_core_num, uint(alarm_pool_t* pool));
  MOCK_METHOD2(alarm_pool_create,
               alarm_pool_t*(uint timer_alarm_num, uint max_timers));
  MOCK_METHOD3(alarm_pool_create_on_timer,
               alarm_pool_t*(alarm_pool_timer_t* timer, uint timer_alarm_num,
                             uint max_timers));
  MOCK_METHOD2(alarm_pool_create_on_timer_with_unused_hardware_alarm,
               alarm_pool_t*(alarm_pool_timer_t* timer, uint max_timers));
  MOCK_METHOD1(alarm_pool_create_with_unused_hardware_alarm,
               alarm_pool_t*(uint max_timers));
  MOCK_METHOD1(alarm_pool_destroy, void(alarm_pool_t* pool));
  MOCK_METHOD0(alarm_pool_get_default, alarm_pool_t*());
  MOCK_METHOD0(alarm_pool_get_default_timer, alarm_pool_timer_t*());
  MOCK_METHOD1(alarm_pool_hardware_alarm_num, uint(alarm_pool_t* pool));
  MOCK_METHOD0(alarm_pool_init_default, void());
  MOCK_METHOD2(alarm_pool_remaining_alarm_time_ms,
               int32_t(alarm_pool_t* pool, alarm_id_t alarm_id));
  MOCK_METHOD2(alarm_pool_remaining_alarm_time_us,
               int64_t(alarm_pool_t* pool, alarm_id_t alarm_id));
  MOCK_METHOD1(alarm_pool_timer_alarm_num, uint(alarm_pool_t* pool));
  MOCK_METHOD1(alarm_pool_timer_for_timer_num,
               alarm_pool_timer_t*(uint timer_num));
  MOCK_METHOD1(best_effort_wfe_or_timeout,
               bool(absolute_time_t timeout_timestamp));
  MOCK_METHOD1(cancel_alarm, bool(alarm_id_t alarm_id));
  MOCK_METHOD1(cancel_repeating_timer, bool(repeating_timer_t* timer));
  MOCK_METHOD2(delayed_by_ms,
               absolute_time_t(const absolute_time_t t, uint32_t ms));
  MOCK_METHOD2(delayed_by_us,
               absolute_time_t(const absolute_time_t t, uint64_t us));
  MOCK_METHOD0(get_absolute_time, absolute_time_t());
  MOCK_METHOD1(is_at_the_end_of_time, bool(absolute_time_t t));
  MOCK_METHOD1(is_nil_time, bool(absolute_time_t t));
  MOCK_METHOD1(make_timeout_time_ms, absolute_time_t(uint32_t ms));
  MOCK_METHOD1(make_timeout_time_us, absolute_time_t(uint64_t us));
  MOCK_METHOD1(remaining_alarm_time_ms, int32_t(alarm_id_t alarm_id));
  MOCK_METHOD1(remaining_alarm_time_us, int64_t(alarm_id_t alarm_id));
  MOCK_METHOD0(runtime_init_default_alarm_pool, void());
  MOCK_METHOD1(sleep_ms, void(uint32_t ms));
  MOCK_METHOD1(sleep_until, void(absolute_time_t target));
  MOCK_METHOD1(sleep_us, void(uint64_t us));
  MOCK_METHOD1(to_ms_since_boot, uint32_t(absolute_time_t t));
  MOCK_METHOD1(us_to_ms, uint32_t(uint64_t us));
  MOCK_METHOD1(getchar_timeout_us, int(uint32_t timeout_us));
  MOCK_METHOD1(putchar_raw, int(int c));
  MOCK_METHOD1(puts_raw, int(const char* s));
  MOCK_METHOD0(stdio_deinit_all, bool());
  MOCK_METHOD1(stdio_filter_driver, void(stdio_driver_t* driver));
  MOCK_METHOD0(stdio_flush, void());
  MOCK_METHOD3(stdio_get_until, int(char* buf, int len, absolute_time_t until));
  MOCK_METHOD0(stdio_init_all, bool());
  MOCK_METHOD4(stdio_put_string,
               int(const char* s, int len, bool newline, bool cr_translation));
  MOCK_METHOD2(stdio_set_driver_enabled,
               void(stdio_driver_t* driver, bool enabled));
  MOCK_METHOD2(stdio_set_translate_crlf,
               void(stdio_driver_t* driver, bool translate));
  MOCK_METHOD0(adc_fifo_drain, void());
  MOCK_METHOD0(adc_fifo_get, uint16_t());
  MOCK_METHOD0(adc_fifo_get_blocking, uint16_t());
  MOCK_METHOD0(adc_fifo_get_level, uint8_t());
  MOCK_METHOD0(adc_fifo_is_empty, bool());
  MOCK_METHOD5(adc_fifo_setup, void(bool en, bool dreq_en, uint16_t dreq_thresh,
                                    bool err_in_fifo, bool byte_shift));
  MOCK_METHOD0(adc_get_selected_input, uint());
  MOCK_METHOD1(adc_gpio_init, void(uint gpio));
  MOCK_METHOD0(adc_init, void());
  MOCK_METHOD1(adc_irq_set_enabled, void(bool enabled));
  MOCK_METHOD0(adc_read, uint16_t());
  MOCK_METHOD1(adc_run, void(bool run));
  MOCK_METHOD1(adc_select_input, void(uint input));
  MOCK_METHOD1(adc_set_clkdiv, void(float clkdiv));
  MOCK_METHOD1(adc_set_round_robin, void(uint input_mask));
  MOCK_METHOD1(adc_set_temp_sensor_enabled, void(bool enable));
  MOCK_METHOD4(check_sys_clock_hz,
               bool(uint32_t freq_hz, uint* vco_freq_out, uint* post_div1_out,
                    uint* post_div2_out));
  MOCK_METHOD4(check_sys_clock_khz,
               bool(uint32_t freq_khz, uint* vco_freq_out, uint* post_div1_out,
                    uint* post_div2_out));
  MOCK_METHOD5(clock_configure,
               bool(clock_handle_t clock, uint32_t src, uint32_t auxsrc,
                    uint32_t src_freq, uint32_t freq));
  MOCK_METHOD4(clock_configure_gpin, bool(clock_handle_t clock, uint gpio,
                                          uint32_t src_freq, uint32_t freq));
  MOCK_METHOD5(clock_configure_int_divider,
               void(clock_handle_t clock, uint32_t src, uint32_t auxsrc,
                    uint32_t src_freq, uint32_t int_divider));
  MOCK_METHOD4(clock_configure_undivided,
               void(clock_handle_t clock, uint32_t src, uint32_t auxsrc,
                    uint32_t src_freq));
  MOCK_METHOD1(clock_get_hz, uint32_t(clock_handle_t clock));
  MOCK_METHOD3(clock_gpio_init, void(uint gpio, uint src, float div));
  MOCK_METHOD4(clock_gpio_init_int_frac,
               void(uint gpio, uint src, uint32_t div_int, uint8_t div_frac));
  MOCK_METHOD2(clock_set_reported_hz, void(clock_handle_t clock, uint hz));
  MOCK_METHOD1(clock_stop, void(clock_handle_t clock));
  MOCK_METHOD1(clocks_enable_resus, void(resus_callback_t resus_callback));
  MOCK_METHOD1(frequency_count_khz, uint32_t(uint src));
  MOCK_METHOD1(frequency_count_mhz, float(uint src));
  MOCK_METHOD0(set_sys_clock_48mhz, void());
  MOCK_METHOD2(set_sys_clock_hz, bool(uint32_t freq_hz, bool required));
  MOCK_METHOD2(set_sys_clock_khz, bool(uint32_t freq_khz, bool required));
  MOCK_METHOD3(set_sys_clock_pll,
               void(uint32_t vco_freq, uint post_div1, uint post_div2));
  MOCK_METHOD1(__sign_of, int(int32_t v));
  MOCK_METHOD2(hw_divider_divmod_s32, divmod_result_t(int32_t a, int32_t b));
  MOCK_METHOD2(hw_divider_divmod_s32_start, void(int32_t a, int32_t b));
  MOCK_METHOD2(hw_divider_divmod_u32, divmod_result_t(uint32_t a, uint32_t b));
  MOCK_METHOD2(hw_divider_divmod_u32_start, void(uint32_t a, uint32_t b));
  MOCK_METHOD0(hw_divider_pause, void());
  MOCK_METHOD2(hw_divider_quotient_s32, int32_t(int32_t a, int32_t b));
  MOCK_METHOD2(hw_divider_remainder_s32, int32_t(int32_t a, int32_t b));
  MOCK_METHOD1(hw_divider_restore_state, void(hw_divider_state_t* src));
  MOCK_METHOD0(hw_divider_result_nowait, divmod_result_t());
  MOCK_METHOD0(hw_divider_result_wait, divmod_result_t());
  MOCK_METHOD2(hw_divider_s32_quotient_inlined, int32_t(int32_t a, int32_t b));
  MOCK_METHOD0(hw_divider_s32_quotient_wait, int32_t());
  MOCK_METHOD2(hw_divider_s32_remainder_inlined, int32_t(int32_t a, int32_t b));
  MOCK_METHOD0(hw_divider_s32_remainder_wait, int32_t());
  MOCK_METHOD1(hw_divider_save_state, void(hw_divider_state_t* dest));
  MOCK_METHOD2(hw_divider_u32_quotient, uint32_t(uint32_t a, uint32_t b));
  MOCK_METHOD2(hw_divider_u32_quotient_inlined,
               uint32_t(uint32_t a, uint32_t b));
  MOCK_METHOD0(hw_divider_u32_quotient_wait, uint32_t());
  MOCK_METHOD2(hw_divider_u32_remainder, uint32_t(uint32_t a, uint32_t b));
  MOCK_METHOD2(hw_divider_u32_remainder_inlined,
               uint32_t(uint32_t a, uint32_t b));
  MOCK_METHOD0(hw_divider_u32_remainder_wait, uint32_t());
  MOCK_METHOD0(hw_divider_wait_ready, void());
  MOCK_METHOD1(to_quotient_s32, int32_t(divmod_result_t r));
  MOCK_METHOD1(to_quotient_u32, uint32_t(divmod_result_t r));
  MOCK_METHOD1(to_remainder_s32, int32_t(divmod_result_t r));
  MOCK_METHOD1(to_remainder_u32, uint32_t(divmod_result_t r));
  MOCK_METHOD1(channel_config_get_ctrl_value,
               uint32_t(const dma_channel_config* config));
  MOCK_METHOD2(channel_config_set_bswap,
               void(dma_channel_config* c, bool bswap));
  MOCK_METHOD2(channel_config_set_chain_to,
               void(dma_channel_config* c, uint chain_to));
  MOCK_METHOD2(channel_config_set_dreq, void(dma_channel_config* c, uint dreq));
  MOCK_METHOD2(channel_config_set_enable,
               void(dma_channel_config* c, bool enable));
  MOCK_METHOD2(channel_config_set_high_priority,
               void(dma_channel_config* c, bool high_priority));
  MOCK_METHOD2(channel_config_set_irq_quiet,
               void(dma_channel_config* c, bool irq_quiet));
  MOCK_METHOD2(channel_config_set_read_increment,
               void(dma_channel_config* c, bool incr));
  MOCK_METHOD3(channel_config_set_ring,
               void(dma_channel_config* c, bool write, uint size_bits));
  MOCK_METHOD2(channel_config_set_sniff_enable,
               void(dma_channel_config* c, bool sniff_enable));
  MOCK_METHOD2(channel_config_set_transfer_data_size,
               void(dma_channel_config* c,
                    enum dma_channel_transfer_size size));
  MOCK_METHOD2(channel_config_set_write_increment,
               void(dma_channel_config* c, bool incr));
  MOCK_METHOD1(dma_channel_abort, void(uint channel));
  MOCK_METHOD1(dma_channel_acknowledge_irq0, void(uint channel));
  MOCK_METHOD1(dma_channel_acknowledge_irq1, void(uint channel));
  MOCK_METHOD1(dma_channel_claim, void(uint channel));
  MOCK_METHOD1(dma_channel_cleanup, void(uint channel));
  MOCK_METHOD6(dma_channel_configure,
               void(uint channel, const dma_channel_config* config,
                    void* write_addr, const void* read_addr,
                    uint transfer_count, bool trigger));
  MOCK_METHOD1(dma_channel_get_default_config,
               dma_channel_config(uint channel));
  MOCK_METHOD1(dma_channel_get_irq0_status, bool(uint channel));
  MOCK_METHOD1(dma_channel_get_irq1_status, bool(uint channel));
  MOCK_METHOD1(dma_channel_hw_addr, dma_channel_hw_t*(uint channel));
  MOCK_METHOD1(dma_channel_is_busy, bool(uint channel));
  MOCK_METHOD1(dma_channel_is_claimed, bool(uint channel));
  MOCK_METHOD3(dma_channel_set_config,
               void(uint channel, const dma_channel_config* config,
                    bool trigger));
  MOCK_METHOD2(dma_channel_set_irq0_enabled, void(uint channel, bool enabled));
  MOCK_METHOD2(dma_channel_set_irq1_enabled, void(uint channel, bool enabled));
  MOCK_METHOD3(dma_channel_set_read_addr,
               void(uint channel, const void* read_addr, bool trigger));
  MOCK_METHOD3(dma_channel_set_trans_count,
               void(uint channel, uint32_t trans_count, bool trigger));
  MOCK_METHOD3(dma_channel_set_write_addr,
               void(uint channel, void* write_addr, bool trigger));
  MOCK_METHOD1(dma_channel_start, void(uint channel));
  MOCK_METHOD3(dma_channel_transfer_from_buffer_now,
               void(uint channel, const void* read_addr,
                    uint32_t transfer_count));
  MOCK_METHOD3(dma_channel_transfer_to_buffer_now,
               void(uint channel, void* write_addr, uint32_t transfer_count));
  MOCK_METHOD1(dma_channel_unclaim, void(uint channel));
  MOCK_METHOD1(dma_channel_wait_for_finish_blocking, void(uint channel));
  MOCK_METHOD1(dma_claim_mask, void(uint32_t channel_mask));
  MOCK_METHOD1(dma_claim_unused_channel, int(bool required));
  MOCK_METHOD1(dma_claim_unused_timer, int(bool required));
  MOCK_METHOD1(dma_get_channel_config, dma_channel_config(uint channel));
  MOCK_METHOD1(dma_get_irq_num, int(uint irq_index));
  MOCK_METHOD1(dma_get_timer_dreq, uint(uint timer_num));
  MOCK_METHOD2(dma_irqn_acknowledge_channel,
               void(uint irq_index, uint channel));
  MOCK_METHOD2(dma_irqn_get_channel_status, bool(uint irq_index, uint channel));
  MOCK_METHOD3(dma_irqn_set_channel_enabled,
               void(uint irq_index, uint channel, bool enabled));
  MOCK_METHOD3(dma_irqn_set_channel_mask_enabled,
               void(uint irq_index, uint32_t channel_mask, bool enabled));
  MOCK_METHOD2(dma_set_irq0_channel_mask_enabled,
               void(uint32_t channel_mask, bool enabled));
  MOCK_METHOD2(dma_set_irq1_channel_mask_enabled,
               void(uint32_t channel_mask, bool enabled));
  MOCK_METHOD0(dma_sniffer_disable, void());
  MOCK_METHOD3(dma_sniffer_enable,
               void(uint channel, uint mode, bool force_channel_enable));
  MOCK_METHOD0(dma_sniffer_get_data_accumulator, uint32_t());
  MOCK_METHOD1(dma_sniffer_set_byte_swap_enabled, void(bool swap));
  MOCK_METHOD1(dma_sniffer_set_data_accumulator, void(uint32_t seed_value));
  MOCK_METHOD1(dma_sniffer_set_output_invert_enabled, void(bool invert));
  MOCK_METHOD1(dma_sniffer_set_output_reverse_enabled, void(bool reverse));
  MOCK_METHOD1(dma_start_channel_mask, void(uint32_t chan_mask));
  MOCK_METHOD1(dma_timer_claim, void(uint timer));
  MOCK_METHOD1(dma_timer_is_claimed, bool(uint timer));
  MOCK_METHOD3(dma_timer_set_fraction,
               void(uint timer, uint16_t numerator, uint16_t denominator));
  MOCK_METHOD1(dma_timer_unclaim, void(uint timer));
  MOCK_METHOD1(dma_unclaim_mask, void(uint32_t channel_mask));
  MOCK_METHOD1(print_dma_ctrl, void(dma_channel_hw_t* channel));
  MOCK_METHOD1(exception_get_priority, uint(uint num));
  MOCK_METHOD1(exception_get_vtable_handler,
               exception_handler_t(enum exception_number num));
  MOCK_METHOD2(exception_restore_handler,
               void(enum exception_number num,
                    exception_handler_t original_handler));
  MOCK_METHOD2(exception_set_exclusive_handler,
               exception_handler_t(enum exception_number num,
                                   exception_handler_t handler));
  MOCK_METHOD2(exception_set_priority,
               bool(uint num, uint8_t hardware_priority));
  MOCK_METHOD3(flash_do_cmd,
               void(const uint8_t* txbuf, uint8_t* rxbuf, size_t count));
  MOCK_METHOD0(flash_flush_cache, void());
  MOCK_METHOD1(flash_get_unique_id, void(uint8_t* id_out));
  MOCK_METHOD2(flash_range_erase, void(uint32_t flash_offs, size_t count));
  MOCK_METHOD3(flash_range_program,
               void(uint32_t flash_offs, const uint8_t* data, size_t count));
  MOCK_METHOD2(gpio_acknowledge_irq, void(uint gpio, uint32_t event_mask));
  MOCK_METHOD2(gpio_add_raw_irq_handler,
               void(uint gpio, irq_handler_t handler));
  MOCK_METHOD2(gpio_add_raw_irq_handler_masked,
               void(uint32_t gpio_mask, irq_handler_t handler));
  MOCK_METHOD2(gpio_add_raw_irq_handler_masked64,
               void(uint64_t gpio_mask, irq_handler_t handler));
  MOCK_METHOD3(gpio_add_raw_irq_handler_with_order_priority,
               void(uint gpio, irq_handler_t handler, uint8_t order_priority));
  MOCK_METHOD3(gpio_add_raw_irq_handler_with_order_priority_masked,
               void(uint32_t gpio_mask, irq_handler_t handler,
                    uint8_t order_priority));
  MOCK_METHOD3(gpio_add_raw_irq_handler_with_order_priority_masked64,
               void(uint64_t gpio_mask, irq_handler_t handler,
                    uint8_t order_priority));
  MOCK_METHOD2(gpio_assign_to_ns, void(uint gpio, bool ns));
  MOCK_METHOD1(gpio_clr_mask, void(uint32_t mask));
  MOCK_METHOD1(gpio_clr_mask64, void(uint64_t mask));
  MOCK_METHOD2(gpio_clr_mask_n, void(uint n, uint32_t mask));
  MOCK_METHOD0(gpio_debug_pins_init, void());
  MOCK_METHOD1(gpio_deinit, void(uint gpio));
  MOCK_METHOD1(gpio_disable_pulls, void(uint gpio));
  MOCK_METHOD1(gpio_get, bool(uint gpio));
  MOCK_METHOD0(gpio_get_all, uint32_t());
  MOCK_METHOD0(gpio_get_all64, uint64_t());
  MOCK_METHOD1(gpio_get_dir, uint(uint gpio));
  MOCK_METHOD1(gpio_get_drive_strength, enum gpio_drive_strength(uint gpio));
  MOCK_METHOD1(gpio_get_function, gpio_function_t(uint gpio));
  MOCK_METHOD1(gpio_get_irq_event_mask, uint32_t(uint gpio));
  MOCK_METHOD1(gpio_get_out_level, bool(uint gpio));
  MOCK_METHOD1(gpio_get_slew_rate, enum gpio_slew_rate(uint gpio));
  MOCK_METHOD1(gpio_init, void(uint gpio));
  MOCK_METHOD1(gpio_init_mask, void(uint gpio_mask));
  MOCK_METHOD1(gpio_is_dir_out, bool(uint gpio));
  MOCK_METHOD1(gpio_is_input_hysteresis_enabled, bool(uint gpio));
  MOCK_METHOD1(gpio_is_pulled_down, bool(uint gpio));
  MOCK_METHOD1(gpio_is_pulled_up, bool(uint gpio));
  MOCK_METHOD1(gpio_pull_down, void(uint gpio));
  MOCK_METHOD1(gpio_pull_up, void(uint gpio));
  MOCK_METHOD2(gpio_put, void(uint gpio, bool value));
  MOCK_METHOD1(gpio_put_all, void(uint32_t value));
  MOCK_METHOD1(gpio_put_all64, void(uint64_t value));
  MOCK_METHOD2(gpio_put_masked, void(uint32_t mask, uint32_t value));
  MOCK_METHOD2(gpio_put_masked64, void(uint64_t mask, uint64_t value));
  MOCK_METHOD3(gpio_put_masked_n, void(uint n, uint32_t mask, uint32_t value));
  MOCK_METHOD2(gpio_remove_raw_irq_handler,
               void(uint gpio, irq_handler_t handler));
  MOCK_METHOD2(gpio_remove_raw_irq_handler_masked,
               void(uint32_t gpio_mask, irq_handler_t handler));
  MOCK_METHOD2(gpio_remove_raw_irq_handler_masked64,
               void(uint64_t gpio_mask, irq_handler_t handler));
  MOCK_METHOD2(gpio_set_dir, void(uint gpio, bool out));
  MOCK_METHOD1(gpio_set_dir_all_bits, void(uint32_t values));
  MOCK_METHOD1(gpio_set_dir_all_bits64, void(uint64_t values));
  MOCK_METHOD1(gpio_set_dir_in_masked, void(uint32_t mask));
  MOCK_METHOD1(gpio_set_dir_in_masked64, void(uint64_t mask));
  MOCK_METHOD2(gpio_set_dir_masked, void(uint32_t mask, uint32_t value));
  MOCK_METHOD2(gpio_set_dir_masked64, void(uint64_t mask, uint64_t value));
  MOCK_METHOD1(gpio_set_dir_out_masked, void(uint32_t mask));
  MOCK_METHOD1(gpio_set_dir_out_masked64, void(uint64_t mask));
  MOCK_METHOD3(gpio_set_dormant_irq_enabled,
               void(uint gpio, uint32_t event_mask, bool enabled));
  MOCK_METHOD2(gpio_set_drive_strength,
               void(uint gpio, enum gpio_drive_strength drive));
  MOCK_METHOD2(gpio_set_function, void(uint gpio, gpio_function_t fn));
  MOCK_METHOD2(gpio_set_function_masked,
               void(uint32_t gpio_mask, gpio_function_t fn));
  MOCK_METHOD2(gpio_set_function_masked64,
               void(uint64_t gpio_mask, gpio_function_t fn));
  MOCK_METHOD2(gpio_set_inover, void(uint gpio, uint value));
  MOCK_METHOD2(gpio_set_input_enabled, void(uint gpio, bool enabled));
  MOCK_METHOD2(gpio_set_input_hysteresis_enabled,
               void(uint gpio, bool enabled));
  MOCK_METHOD1(gpio_set_irq_callback, void(gpio_irq_callback_t callback));
  MOCK_METHOD3(gpio_set_irq_enabled,
               void(uint gpio, uint32_t event_mask, bool enabled));
  MOCK_METHOD4(gpio_set_irq_enabled_with_callback,
               void(uint gpio, uint32_t event_mask, bool enabled,
                    gpio_irq_callback_t callback));
  MOCK_METHOD2(gpio_set_irqover, void(uint gpio, uint value));
  MOCK_METHOD1(gpio_set_mask, void(uint32_t mask));
  MOCK_METHOD1(gpio_set_mask64, void(uint64_t mask));
  MOCK_METHOD2(gpio_set_mask_n, void(uint n, uint32_t mask));
  MOCK_METHOD2(gpio_set_oeover, void(uint gpio, uint value));
  MOCK_METHOD2(gpio_set_outover, void(uint gpio, uint value));
  MOCK_METHOD3(gpio_set_pulls, void(uint gpio, bool up, bool down));
  MOCK_METHOD2(gpio_set_slew_rate, void(uint gpio, enum gpio_slew_rate slew));
  MOCK_METHOD1(gpio_xor_mask, void(uint32_t mask));
  MOCK_METHOD1(gpio_xor_mask64, void(uint64_t mask));
  MOCK_METHOD2(gpio_xor_mask_n, void(uint n, uint32_t mask));
  MOCK_METHOD1(i2c_deinit, void(i2c_inst_t* i2c));
  MOCK_METHOD2(i2c_get_dreq, uint(i2c_inst_t* i2c, bool is_tx));
  MOCK_METHOD1(i2c_get_hw, i2c_hw_t*(i2c_inst_t* i2c));
  MOCK_METHOD1(i2c_get_index, uint(i2c_inst_t* i2c));
  MOCK_METHOD1(i2c_get_instance, i2c_inst_t*(uint num));
  MOCK_METHOD1(i2c_get_read_available, size_t(i2c_inst_t* i2c));
  MOCK_METHOD1(i2c_get_write_available, size_t(i2c_inst_t* i2c));
  MOCK_METHOD2(i2c_init, uint(i2c_inst_t* i2c, uint baudrate));
  MOCK_METHOD5(i2c_read_blocking, int(i2c_inst_t* i2c, uint8_t addr,
                                      uint8_t* dst, size_t len, bool nostop));
  MOCK_METHOD6(i2c_read_blocking_until,
               int(i2c_inst_t* i2c, uint8_t addr, uint8_t* dst, size_t len,
                   bool nostop, absolute_time_t until));
  MOCK_METHOD1(i2c_read_byte_raw, uint8_t(i2c_inst_t* i2c));
  MOCK_METHOD3(i2c_read_raw_blocking,
               void(i2c_inst_t* i2c, uint8_t* dst, size_t len));
  MOCK_METHOD6(i2c_read_timeout_per_char_us,
               int(i2c_inst_t* i2c, uint8_t addr, uint8_t* dst, size_t len,
                   bool nostop, uint timeout_per_char_us));
  MOCK_METHOD6(i2c_read_timeout_us,
               int(i2c_inst_t* i2c, uint8_t addr, uint8_t* dst, size_t len,
                   bool nostop, uint timeout_us));
  MOCK_METHOD2(i2c_set_baudrate, uint(i2c_inst_t* i2c, uint baudrate));
  MOCK_METHOD3(i2c_set_slave_mode,
               void(i2c_inst_t* i2c, bool slave, uint8_t addr));
  MOCK_METHOD5(i2c_write_blocking,
               int(i2c_inst_t* i2c, uint8_t addr, const uint8_t* src,
                   size_t len, bool nostop));
  MOCK_METHOD6(i2c_write_blocking_until,
               int(i2c_inst_t* i2c, uint8_t addr, const uint8_t* src,
                   size_t len, bool nostop, absolute_time_t until));
  MOCK_METHOD2(i2c_write_byte_raw, void(i2c_inst_t* i2c, uint8_t value));
  MOCK_METHOD3(i2c_write_raw_blocking,
               void(i2c_inst_t* i2c, const uint8_t* src, size_t len));
  MOCK_METHOD6(i2c_write_timeout_per_char_us,
               int(i2c_inst_t* i2c, uint8_t addr, const uint8_t* src,
                   size_t len, bool nostop, uint timeout_per_char_us));
  MOCK_METHOD6(i2c_write_timeout_us,
               int(i2c_inst_t* i2c, uint8_t addr, const uint8_t* src,
                   size_t len, bool nostop, uint timeout_us));
  MOCK_METHOD3(interp_add_accumulater,
               void(interp_hw_t* interp, uint lane, uint32_t val));
  MOCK_METHOD2(interp_claim_lane, void(interp_hw_t* interp, uint lane));
  MOCK_METHOD2(interp_claim_lane_mask,
               void(interp_hw_t* interp, uint lane_mask));
  MOCK_METHOD2(interp_config_set_add_raw, void(interp_config* c, bool add_raw));
  MOCK_METHOD2(interp_config_set_blend, void(interp_config* c, bool blend));
  MOCK_METHOD2(interp_config_set_clamp, void(interp_config* c, bool clamp));
  MOCK_METHOD2(interp_config_set_cross_input,
               void(interp_config* c, bool cross_input));
  MOCK_METHOD2(interp_config_set_cross_result,
               void(interp_config* c, bool cross_result));
  MOCK_METHOD2(interp_config_set_force_bits, void(interp_config* c, uint bits));
  MOCK_METHOD3(interp_config_set_mask,
               void(interp_config* c, uint mask_lsb, uint mask_msb));
  MOCK_METHOD2(interp_config_set_shift, void(interp_config* c, uint shift));
  MOCK_METHOD2(interp_config_set_signed, void(interp_config* c, bool _signed));
  MOCK_METHOD0(interp_default_config, interp_config());
  MOCK_METHOD2(interp_get_accumulator,
               uint32_t(interp_hw_t* interp, uint lane));
  MOCK_METHOD2(interp_get_base, uint32_t(interp_hw_t* interp, uint lane));
  MOCK_METHOD2(interp_get_raw, uint32_t(interp_hw_t* interp, uint lane));
  MOCK_METHOD1(interp_index, uint(interp_hw_t* interp));
  MOCK_METHOD2(interp_lane_is_claimed, bool(interp_hw_t* interp, uint lane));
  MOCK_METHOD1(interp_peek_full_result, uint32_t(interp_hw_t* interp));
  MOCK_METHOD2(interp_peek_lane_result,
               uint32_t(interp_hw_t* interp, uint lane));
  MOCK_METHOD1(interp_pop_full_result, uint32_t(interp_hw_t* interp));
  MOCK_METHOD2(interp_pop_lane_result,
               uint32_t(interp_hw_t* interp, uint lane));
  MOCK_METHOD2(interp_restore,
               void(interp_hw_t* interp, interp_hw_save_t* saver));
  MOCK_METHOD2(interp_save, void(interp_hw_t* interp, interp_hw_save_t* saver));
  MOCK_METHOD3(interp_set_accumulator,
               void(interp_hw_t* interp, uint lane, uint32_t val));
  MOCK_METHOD3(interp_set_base,
               void(interp_hw_t* interp, uint lane, uint32_t val));
  MOCK_METHOD2(interp_set_base_both, void(interp_hw_t* interp, uint32_t val));
  MOCK_METHOD3(interp_set_config,
               void(interp_hw_t* interp, uint lane, interp_config* config));
  MOCK_METHOD3(interp_set_force_bits,
               void(interp_hw_t* interp, uint lane, uint bits));
  MOCK_METHOD2(interp_unclaim_lane, void(interp_hw_t* interp, uint lane));
  MOCK_METHOD2(interp_unclaim_lane_mask,
               void(interp_hw_t* interp, uint lane_mask));
  MOCK_METHOD0(__unhandled_user_irq, void());
  MOCK_METHOD3(irq_add_shared_handler,
               void(uint num, irq_handler_t handler, uint8_t order_priority));
  MOCK_METHOD2(irq_assign_to_ns, void(uint irq_num, bool ns));
  MOCK_METHOD1(irq_clear, void(uint int_num));
  MOCK_METHOD1(irq_get_exclusive_handler, irq_handler_t(uint num));
  MOCK_METHOD1(irq_get_priority, uint(uint num));
  MOCK_METHOD1(irq_get_vtable_handler, irq_handler_t(uint num));
  MOCK_METHOD1(irq_has_shared_handler, bool(uint num));
  MOCK_METHOD0(irq_init_priorities, void());
  MOCK_METHOD1(irq_is_enabled, bool(uint num));
  MOCK_METHOD2(irq_remove_handler, void(uint num, irq_handler_t handler));
  MOCK_METHOD2(irq_set_enabled, void(uint num, bool enabled));
  MOCK_METHOD2(irq_set_exclusive_handler,
               void(uint num, irq_handler_t handler));
  MOCK_METHOD2(irq_set_mask_enabled, void(uint32_t mask, bool enabled));
  MOCK_METHOD3(irq_set_mask_n_enabled,
               void(uint n, uint32_t mask, bool enabled));
  MOCK_METHOD1(irq_set_pending, void(uint num));
  MOCK_METHOD2(irq_set_priority, void(uint num, uint8_t hardware_priority));
  MOCK_METHOD2(irq_set_riscv_vector_handler,
               irq_handler_t(enum riscv_vector_num index,
                             irq_handler_t handler));
  MOCK_METHOD0(runtime_init_per_core_irq_priorities, void());
  MOCK_METHOD1(user_irq_claim, void(uint irq_num));
  MOCK_METHOD1(user_irq_claim_unused, int(bool required));
  MOCK_METHOD1(user_irq_is_claimed, bool(uint irq_num));
  MOCK_METHOD1(user_irq_unclaim, void(uint irq_num));
  MOCK_METHOD1(pll_deinit, void(PLL pll));
  MOCK_METHOD5(pll_init, void(PLL pll, uint ref_div, uint vco_freq,
                              uint post_div1, uint post_div2));
  MOCK_METHOD2(pio_add_program, int(PIO pio, const pio_program_t* program));
  MOCK_METHOD3(pio_add_program_at_offset,
               int(PIO pio, const pio_program_t* program, uint offset));
  MOCK_METHOD3(pio_calculate_clkdiv_from_float,
               void(float div, uint16_t* div_int, uint8_t* div_frac));
  MOCK_METHOD2(pio_can_add_program,
               bool(PIO pio, const pio_program_t* program));
  MOCK_METHOD3(pio_can_add_program_at_offset,
               bool(PIO pio, const pio_program_t* program, uint offset));
  MOCK_METHOD4(pio_claim_free_sm_and_add_program,
               bool(const pio_program_t* program, PIO* pio, uint* sm,
                    uint* offset));
  MOCK_METHOD7(pio_claim_free_sm_and_add_program_for_gpio_range,
               bool(const pio_program_t* program, PIO* pio, uint* sm,
                    uint* offset, uint gpio_base, uint gpio_count,
                    bool set_gpio_base));
  MOCK_METHOD2(pio_claim_sm_mask, void(PIO pio, uint sm_mask));
  MOCK_METHOD2(pio_claim_unused_sm, int(PIO pio, bool required));
  MOCK_METHOD1(pio_clear_instruction_memory, void(PIO pio));
  MOCK_METHOD2(pio_clkdiv_restart_sm_mask, void(PIO pio, uint32_t mask));
  MOCK_METHOD4(pio_clkdiv_restart_sm_multi_mask,
               void(PIO pio, uint32_t mask_prev, uint32_t mask,
                    uint32_t mask_next));
  MOCK_METHOD2(pio_enable_sm_mask_in_sync, void(PIO pio, uint32_t mask));
  MOCK_METHOD4(pio_enable_sm_multi_mask_in_sync,
               void(PIO pio, uint32_t mask_prev, uint32_t mask,
                    uint32_t mask_next));
  MOCK_METHOD0(pio_get_default_sm_config, pio_sm_config());
  MOCK_METHOD3(pio_get_dreq, uint(PIO pio, uint sm, bool is_tx));
  MOCK_METHOD1(pio_get_funcsel, uint(PIO pio));
  MOCK_METHOD1(pio_get_gpio_base, uint(PIO pio));
  MOCK_METHOD1(pio_get_index, uint(PIO pio));
  MOCK_METHOD1(pio_get_instance, PIO(uint instance));
  MOCK_METHOD2(pio_get_irq_num, int(PIO pio, uint irqn));
  MOCK_METHOD1(pio_get_rx_fifo_not_empty_interrupt_source,
               pio_interrupt_source_t(uint sm));
  MOCK_METHOD1(pio_get_tx_fifo_not_full_interrupt_source,
               pio_interrupt_source_t(uint sm));
  MOCK_METHOD2(pio_gpio_init, void(PIO pio, uint pin));
  MOCK_METHOD2(pio_interrupt_clear, void(PIO pio, uint pio_interrupt_num));
  MOCK_METHOD2(pio_interrupt_get, bool(PIO pio, uint pio_interrupt_num));
  MOCK_METHOD3(pio_remove_program,
               void(PIO pio, const pio_program_t* program, uint loaded_offset));
  MOCK_METHOD4(pio_remove_program_and_unclaim_sm,
               void(const pio_program_t* program, PIO pio, uint sm,
                    uint offset));
  MOCK_METHOD2(pio_restart_sm_mask, void(PIO pio, uint32_t mask));
  MOCK_METHOD2(pio_set_gpio_base, int(PIO pio, uint gpio_base));
  MOCK_METHOD3(pio_set_irq0_source_enabled,
               void(PIO pio, pio_interrupt_source_t source, bool enabled));
  MOCK_METHOD3(pio_set_irq0_source_mask_enabled,
               void(PIO pio, uint32_t source_mask, bool enabled));
  MOCK_METHOD3(pio_set_irq1_source_enabled,
               void(PIO pio, pio_interrupt_source_t source, bool enabled));
  MOCK_METHOD3(pio_set_irq1_source_mask_enabled,
               void(PIO pio, uint32_t source_mask, bool enabled));
  MOCK_METHOD4(pio_set_irqn_source_enabled,
               void(PIO pio, uint irq_index, pio_interrupt_source_t source,
                    bool enabled));
  MOCK_METHOD4(pio_set_irqn_source_mask_enabled,
               void(PIO pio, uint irq_index, uint32_t source_mask,
                    bool enabled));
  MOCK_METHOD3(pio_set_sm_mask_enabled,
               void(PIO pio, uint32_t mask, bool enabled));
  MOCK_METHOD5(pio_set_sm_multi_mask_enabled,
               void(PIO pio, uint32_t mask_prev, uint32_t mask,
                    uint32_t mask_next, bool enabled));
  MOCK_METHOD2(pio_sm_claim, void(PIO pio, uint sm));
  MOCK_METHOD2(pio_sm_clear_fifos, void(PIO pio, uint sm));
  MOCK_METHOD2(pio_sm_clkdiv_restart, void(PIO pio, uint sm));
  MOCK_METHOD2(pio_sm_drain_tx_fifo, void(PIO pio, uint sm));
  MOCK_METHOD3(pio_sm_exec, void(PIO pio, uint sm, uint instr));
  MOCK_METHOD3(pio_sm_exec_wait_blocking, void(PIO pio, uint sm, uint instr));
  MOCK_METHOD2(pio_sm_get, uint32_t(PIO pio, uint sm));
  MOCK_METHOD2(pio_sm_get_blocking, uint32_t(PIO pio, uint sm));
  MOCK_METHOD2(pio_sm_get_pc, uint8_t(PIO pio, uint sm));
  MOCK_METHOD2(pio_sm_get_rx_fifo_level, uint(PIO pio, uint sm));
  MOCK_METHOD2(pio_sm_get_tx_fifo_level, uint(PIO pio, uint sm));
  MOCK_METHOD4(pio_sm_init, int(PIO pio, uint sm, uint initial_pc,
                                const pio_sm_config* config));
  MOCK_METHOD2(pio_sm_is_claimed, bool(PIO pio, uint sm));
  MOCK_METHOD2(pio_sm_is_exec_stalled, bool(PIO pio, uint sm));
  MOCK_METHOD2(pio_sm_is_rx_fifo_empty, bool(PIO pio, uint sm));
  MOCK_METHOD2(pio_sm_is_rx_fifo_full, bool(PIO pio, uint sm));
  MOCK_METHOD2(pio_sm_is_tx_fifo_empty, bool(PIO pio, uint sm));
  MOCK_METHOD2(pio_sm_is_tx_fifo_full, bool(PIO pio, uint sm));
  MOCK_METHOD3(pio_sm_put, void(PIO pio, uint sm, uint32_t data));
  MOCK_METHOD3(pio_sm_put_blocking, void(PIO pio, uint sm, uint32_t data));
  MOCK_METHOD2(pio_sm_restart, void(PIO pio, uint sm));
  MOCK_METHOD3(pio_sm_set_clkdiv, void(PIO pio, uint sm, float div));
  MOCK_METHOD4(pio_sm_set_clkdiv_int_frac,
               void(PIO pio, uint sm, uint16_t div_int, uint8_t div_frac));
  MOCK_METHOD3(pio_sm_set_config,
               int(PIO pio, uint sm, const pio_sm_config* config));
  MOCK_METHOD5(pio_sm_set_consecutive_pindirs,
               int(PIO pio, uint sm, uint pins_base, uint pin_count,
                   bool is_out));
  MOCK_METHOD3(pio_sm_set_enabled, void(PIO pio, uint sm, bool enabled));
  MOCK_METHOD3(pio_sm_set_in_pins, void(PIO pio, uint sm, uint in_base));
  MOCK_METHOD3(pio_sm_set_jmp_pin, void(PIO pio, uint sm, uint pin));
  MOCK_METHOD4(pio_sm_set_out_pins,
               void(PIO pio, uint sm, uint out_base, uint out_count));
  MOCK_METHOD4(pio_sm_set_pindirs_with_mask,
               void(PIO pio, uint sm, uint32_t pin_dirs, uint32_t pin_mask));
  MOCK_METHOD3(pio_sm_set_pins, void(PIO pio, uint sm, uint32_t pin_values));
  MOCK_METHOD4(pio_sm_set_pins_with_mask,
               void(PIO pio, uint sm, uint32_t pin_values, uint32_t pin_mask));
  MOCK_METHOD4(pio_sm_set_set_pins,
               void(PIO pio, uint sm, uint set_base, uint set_count));
  MOCK_METHOD3(pio_sm_set_sideset_pins,
               void(PIO pio, uint sm, uint sideset_base));
  MOCK_METHOD4(pio_sm_set_wrap,
               void(PIO pio, uint sm, uint wrap_target, uint wrap));
  MOCK_METHOD2(pio_sm_unclaim, void(PIO pio, uint sm));
  MOCK_METHOD2(sm_config_set_clkdiv, void(pio_sm_config* c, float div));
  MOCK_METHOD3(sm_config_set_clkdiv_int_frac,
               void(pio_sm_config* c, uint16_t div_int, uint8_t div_frac));
  MOCK_METHOD2(sm_config_set_fifo_join,
               void(pio_sm_config* c, enum pio_fifo_join join));
  MOCK_METHOD2(sm_config_set_in_pin_base, void(pio_sm_config* c, uint in_base));
  MOCK_METHOD2(sm_config_set_in_pin_count,
               void(pio_sm_config* c, uint in_count));
  MOCK_METHOD2(sm_config_set_in_pins, void(pio_sm_config* c, uint in_base));
  MOCK_METHOD4(sm_config_set_in_shift,
               void(pio_sm_config* c, bool shift_right, bool autopush,
                    uint push_threshold));
  MOCK_METHOD2(sm_config_set_jmp_pin, void(pio_sm_config* c, uint pin));
  MOCK_METHOD3(sm_config_set_mov_status,
               void(pio_sm_config* c, enum pio_mov_status_type status_sel,
                    uint status_n));
  MOCK_METHOD2(sm_config_set_out_pin_base,
               void(pio_sm_config* c, uint out_base));
  MOCK_METHOD2(sm_config_set_out_pin_count,
               void(pio_sm_config* c, uint out_count));
  MOCK_METHOD3(sm_config_set_out_pins,
               void(pio_sm_config* c, uint out_base, uint out_count));
  MOCK_METHOD4(sm_config_set_out_shift,
               void(pio_sm_config* c, bool shift_right, bool autopull,
                    uint pull_threshold));
  MOCK_METHOD4(sm_config_set_out_special,
               void(pio_sm_config* c, bool sticky, bool has_enable_pin,
                    uint enable_pin_index));
  MOCK_METHOD2(sm_config_set_set_pin_base,
               void(pio_sm_config* c, uint set_base));
  MOCK_METHOD2(sm_config_set_set_pin_count,
               void(pio_sm_config* c, uint set_count));
  MOCK_METHOD3(sm_config_set_set_pins,
               void(pio_sm_config* c, uint set_base, uint set_count));
  MOCK_METHOD4(sm_config_set_sideset, void(pio_sm_config* c, uint bit_count,
                                           bool optional, bool pindirs));
  MOCK_METHOD2(sm_config_set_sideset_pin_base,
               void(pio_sm_config* c, uint sideset_base));
  MOCK_METHOD2(sm_config_set_sideset_pins,
               void(pio_sm_config* c, uint sideset_base));
  MOCK_METHOD3(sm_config_set_wrap,
               void(pio_sm_config* c, uint wrap_target, uint wrap));
  MOCK_METHOD0(powman_clear_alarm, void());
  MOCK_METHOD2(powman_clear_bits, void(uint32_t* reg, uint32_t bits));
  MOCK_METHOD2(powman_configure_wakeup_state,
               bool(powman_power_state sleep_state,
                    powman_power_state wakeup_state));
  MOCK_METHOD0(powman_disable_alarm_wakeup, void());
  MOCK_METHOD0(powman_disable_all_wakeups, void());
  MOCK_METHOD1(powman_disable_gpio_wakeup, void(uint gpio_wakeup_num));
  MOCK_METHOD1(powman_enable_alarm_wakeup_at_ms, void(uint64_t alarm_time_ms));
  MOCK_METHOD4(powman_enable_gpio_wakeup,
               void(uint gpio_wakeup_num, uint32_t gpio, bool edge, bool high));
  MOCK_METHOD0(powman_get_power_state, powman_power_state());
  MOCK_METHOD2(powman_power_state_is_domain_on,
               bool(powman_power_state state,
                    enum powman_power_domains domain));
  MOCK_METHOD2(powman_power_state_with_domain_off,
               powman_power_state(powman_power_state orig,
                                  enum powman_power_domains domain));
  MOCK_METHOD2(powman_power_state_with_domain_on,
               powman_power_state(powman_power_state orig,
                                  enum powman_power_domains domain));
  MOCK_METHOD2(powman_set_bits, void(uint32_t* reg, uint32_t bits));
  MOCK_METHOD1(powman_set_debug_power_request_ignored, void(bool ignored));
  MOCK_METHOD1(powman_set_power_state, int(powman_power_state state));
  MOCK_METHOD0(powman_timer_disable_alarm, void());
  MOCK_METHOD0(powman_timer_disable_gpio_1hz_sync, void());
  MOCK_METHOD1(powman_timer_enable_alarm_at_ms, void(uint64_t alarm_time_ms));
  MOCK_METHOD1(powman_timer_enable_gpio_1hz_sync, void(uint32_t gpio));
  MOCK_METHOD0(powman_timer_get_ms, uint64_t());
  MOCK_METHOD0(powman_timer_is_running, bool());
  MOCK_METHOD1(powman_timer_set_1khz_tick_source_gpio, void(uint32_t gpio));
  MOCK_METHOD0(powman_timer_set_1khz_tick_source_lposc, void());
  MOCK_METHOD1(powman_timer_set_1khz_tick_source_lposc_with_hz,
               void(uint32_t lposc_freq_hz));
  MOCK_METHOD0(powman_timer_set_1khz_tick_source_xosc, void());
  MOCK_METHOD1(powman_timer_set_1khz_tick_source_xosc_with_hz,
               void(uint32_t xosc_freq_hz));
  MOCK_METHOD1(powman_timer_set_ms, void(uint64_t time_ms));
  MOCK_METHOD0(powman_timer_start, void());
  MOCK_METHOD0(powman_timer_stop, void());
  MOCK_METHOD1(pwm_advance_count, void(uint slice_num));
  MOCK_METHOD1(pwm_clear_irq, void(uint slice_num));
  MOCK_METHOD2(pwm_config_set_clkdiv, void(pwm_config* c, float div));
  MOCK_METHOD2(pwm_config_set_clkdiv_int, void(pwm_config* c, uint div));
  MOCK_METHOD3(pwm_config_set_clkdiv_int_frac,
               void(pwm_config* c, uint8_t integer, uint8_t fract));
  MOCK_METHOD2(pwm_config_set_clkdiv_mode,
               void(pwm_config* c, enum pwm_clkdiv_mode mode));
  MOCK_METHOD3(pwm_config_set_output_polarity,
               void(pwm_config* c, bool a, bool b));
  MOCK_METHOD2(pwm_config_set_phase_correct,
               void(pwm_config* c, bool phase_correct));
  MOCK_METHOD2(pwm_config_set_wrap, void(pwm_config* c, uint16_t wrap));
  MOCK_METHOD1(pwm_force_irq, void(uint slice_num));
  MOCK_METHOD1(pwm_force_irq0, void(uint slice_num));
  MOCK_METHOD1(pwm_force_irq1, void(uint slice_num));
  MOCK_METHOD1(pwm_get_counter, uint16_t(uint slice_num));
  MOCK_METHOD0(pwm_get_default_config, pwm_config());
  MOCK_METHOD1(pwm_get_dreq, uint(uint slice_num));
  MOCK_METHOD0(pwm_get_irq0_status_mask, uint32_t());
  MOCK_METHOD0(pwm_get_irq1_status_mask, uint32_t());
  MOCK_METHOD0(pwm_get_irq_status_mask, uint32_t());
  MOCK_METHOD1(pwm_gpio_to_channel, uint(uint gpio));
  MOCK_METHOD1(pwm_gpio_to_slice_num, uint(uint gpio));
  MOCK_METHOD3(pwm_init, void(uint slice_num, pwm_config* c, bool start));
  MOCK_METHOD2(pwm_irqn_force, void(uint irq_index, uint slice_num));
  MOCK_METHOD1(pwm_irqn_get_status_mask, uint32_t(uint irq_index));
  MOCK_METHOD3(pwm_irqn_set_slice_enabled,
               void(uint irq_index, uint slice_num, bool enabled));
  MOCK_METHOD3(pwm_irqn_set_slice_mask_enabled,
               void(uint irq_index, uint slice_mask, bool enabled));
  MOCK_METHOD1(pwm_retard_count, void(uint slice_num));
  MOCK_METHOD3(pwm_set_both_levels,
               void(uint slice_num, uint16_t level_a, uint16_t level_b));
  MOCK_METHOD3(pwm_set_chan_level,
               void(uint slice_num, uint chan, uint16_t level));
  MOCK_METHOD2(pwm_set_clkdiv, void(uint slice_num, float divider));
  MOCK_METHOD3(pwm_set_clkdiv_int_frac,
               void(uint slice_num, uint8_t integer, uint8_t fract));
  MOCK_METHOD2(pwm_set_clkdiv_mode,
               void(uint slice_num, enum pwm_clkdiv_mode mode));
  MOCK_METHOD2(pwm_set_counter, void(uint slice_num, uint16_t c));
  MOCK_METHOD2(pwm_set_enabled, void(uint slice_num, bool enabled));
  MOCK_METHOD2(pwm_set_gpio_level, void(uint gpio, uint16_t level));
  MOCK_METHOD2(pwm_set_irq0_enabled, void(uint slice_num, bool enabled));
  MOCK_METHOD2(pwm_set_irq0_mask_enabled,
               void(uint32_t slice_mask, bool enabled));
  MOCK_METHOD2(pwm_set_irq1_enabled, void(uint slice_num, bool enabled));
  MOCK_METHOD2(pwm_set_irq1_mask_enabled,
               void(uint32_t slice_mask, bool enabled));
  MOCK_METHOD2(pwm_set_irq_enabled, void(uint slice_num, bool enabled));
  MOCK_METHOD2(pwm_set_irq_mask_enabled,
               void(uint32_t slice_mask, bool enabled));
  MOCK_METHOD1(pwm_set_mask_enabled, void(uint32_t mask));
  MOCK_METHOD3(pwm_set_output_polarity, void(uint slice_num, bool a, bool b));
  MOCK_METHOD2(pwm_set_phase_correct, void(uint slice_num, bool phase_correct));
  MOCK_METHOD2(pwm_set_wrap, void(uint slice_num, uint16_t wrap));
  MOCK_METHOD2(rcp_b2and, void(uint32_t b0, uint32_t b1));
  MOCK_METHOD2(rcp_b2and_nodelay, void(uint32_t b0, uint32_t b1));
  MOCK_METHOD2(rcp_b2or, void(uint32_t b0, uint32_t b1));
  MOCK_METHOD2(rcp_b2or_nodelay, void(uint32_t b0, uint32_t b1));
  MOCK_METHOD2(rcp_b2valid, void(uint32_t b0, uint32_t b1));
  MOCK_METHOD2(rcp_b2valid_nodelay, void(uint32_t b0, uint32_t b1));
  MOCK_METHOD1(rcp_bfalse, void(uint32_t b));
  MOCK_METHOD1(rcp_bfalse_nodelay, void(uint32_t b));
  MOCK_METHOD1(rcp_btrue, void(uint32_t b));
  MOCK_METHOD1(rcp_btrue_nodelay, void(uint32_t b));
  MOCK_METHOD1(rcp_bvalid, void(uint32_t b));
  MOCK_METHOD1(rcp_bvalid_nodelay, void(uint32_t b));
  MOCK_METHOD2(rcp_bxorfalse, void(uint32_t b, uint32_t mask));
  MOCK_METHOD2(rcp_bxorfalse_nodelay, void(uint32_t b, uint32_t mask));
  MOCK_METHOD2(rcp_bxortrue, void(uint32_t b, uint32_t mask));
  MOCK_METHOD2(rcp_bxortrue_nodelay, void(uint32_t b, uint32_t mask));
  MOCK_METHOD2(rcp_bxorvalid, void(uint32_t b, uint32_t mask));
  MOCK_METHOD2(rcp_bxorvalid_nodelay, void(uint32_t b, uint32_t mask));
  MOCK_METHOD0(rcp_canary_status, uint32_t());
  MOCK_METHOD0(rcp_canary_status_nodelay, uint32_t());
  MOCK_METHOD2(rcp_iequal, void(uint32_t x, uint32_t y));
  MOCK_METHOD2(rcp_iequal_nodelay, void(uint32_t x, uint32_t y));
  MOCK_METHOD2(rcp_ivalid, void(uint32_t x, uint32_t parity));
  MOCK_METHOD2(rcp_ivalid_nodelay, void(uint32_t x, uint32_t parity));
  MOCK_METHOD0(rcp_panic, void());
  MOCK_METHOD0(rcp_random_byte, uint8_t());
  MOCK_METHOD0(rcp_random_byte_nodelay, uint8_t());
  MOCK_METHOD1(rcp_salt_core0, void(uint64_t salt));
  MOCK_METHOD1(rcp_salt_core0_nodelay, void(uint64_t salt));
  MOCK_METHOD1(rcp_salt_core1, void(uint64_t salt));
  MOCK_METHOD1(rcp_salt_core1_nodelay, void(uint64_t salt));
  MOCK_METHOD1(reset_block, void(uint32_t bits));
  MOCK_METHOD1(reset_block_mask, void(uint32_t bits));
  MOCK_METHOD1(reset_block_num, void(uint32_t block_num));
  MOCK_METHOD2(reset_block_reg_mask, void(io_rw_32* reset, uint32_t mask));
  MOCK_METHOD1(reset_unreset_block_num_wait_blocking, void(uint block_num));
  MOCK_METHOD1(unreset_block, void(uint32_t bits));
  MOCK_METHOD1(unreset_block_mask, void(uint32_t bits));
  MOCK_METHOD1(unreset_block_mask_wait_blocking, void(uint32_t bits));
  MOCK_METHOD1(unreset_block_num, void(uint block_num));
  MOCK_METHOD1(unreset_block_num_wait_blocking, void(uint block_num));
  MOCK_METHOD2(unreset_block_reg_mask, void(io_rw_32* reset, uint32_t mask));
  MOCK_METHOD3(unreset_block_reg_mask_wait_blocking,
               void(io_rw_32* reset, io_ro_32* reset_done, uint32_t mask));
  MOCK_METHOD1(unreset_block_wait, void(uint32_t bits));
  MOCK_METHOD0(rtc_disable_alarm, void());
  MOCK_METHOD0(rtc_enable_alarm, void());
  MOCK_METHOD1(rtc_get_datetime, bool(datetime_t* t));
  MOCK_METHOD0(rtc_init, void());
  MOCK_METHOD0(rtc_running, bool());
  MOCK_METHOD2(rtc_set_alarm,
               void(const datetime_t* t, rtc_callback_t user_callback));
  MOCK_METHOD1(rtc_set_datetime, bool(const datetime_t* t));
  MOCK_METHOD0(sha256_err_not_ready, bool());
  MOCK_METHOD0(sha256_err_not_ready_clear, void());
  MOCK_METHOD2(sha256_get_result,
               void(sha256_result_t* out, enum sha256_endianness endianness));
  MOCK_METHOD0(sha256_is_ready, bool());
  MOCK_METHOD0(sha256_is_sum_valid, bool());
  MOCK_METHOD1(sha256_put_byte, void(uint8_t b));
  MOCK_METHOD1(sha256_put_word, void(uint32_t word));
  MOCK_METHOD1(sha256_set_bswap, void(bool swap));
  MOCK_METHOD1(sha256_set_dma_size, void(uint size_in_bytes));
  MOCK_METHOD0(sha256_start, void());
  MOCK_METHOD0(sha256_wait_ready_blocking, void());
  MOCK_METHOD0(sha256_wait_valid_blocking, void());
  MOCK_METHOD1(spi_deinit, void(spi_inst_t* spi));
  MOCK_METHOD1(spi_get_baudrate, uint(const spi_inst_t* spi));
  MOCK_METHOD1(spi_get_const_hw, const spi_hw_t*(const spi_inst_t* spi));
  MOCK_METHOD2(spi_get_dreq, uint(spi_inst_t* spi, bool is_tx));
  MOCK_METHOD1(spi_get_hw, spi_hw_t*(spi_inst_t* spi));
  MOCK_METHOD1(spi_get_index, uint(const spi_inst_t* spi));
  MOCK_METHOD2(spi_init, uint(spi_inst_t* spi, uint baudrate));
  MOCK_METHOD1(spi_is_busy, bool(const spi_inst_t* spi));
  MOCK_METHOD1(spi_is_readable, bool(const spi_inst_t* spi));
  MOCK_METHOD1(spi_is_writable, bool(const spi_inst_t* spi));
  MOCK_METHOD4(spi_read16_blocking,
               int(spi_inst_t* spi, uint16_t repeated_tx_data, uint16_t* dst,
                   size_t len));
  MOCK_METHOD4(spi_read_blocking, int(spi_inst_t* spi, uint8_t repeated_tx_data,
                                      uint8_t* dst, size_t len));
  MOCK_METHOD2(spi_set_baudrate, uint(spi_inst_t* spi, uint baudrate));
  MOCK_METHOD2(spi_set_slave, void(spi_inst_t* spi, bool slave));
  MOCK_METHOD3(spi_write16_blocking,
               int(spi_inst_t* spi, const uint16_t* src, size_t len));
  MOCK_METHOD4(spi_write16_read16_blocking,
               int(spi_inst_t* spi, const uint16_t* src, uint16_t* dst,
                   size_t len));
  MOCK_METHOD3(spi_write_blocking,
               int(spi_inst_t* spi, const uint8_t* src, size_t len));
  MOCK_METHOD4(spi_write_read_blocking, int(spi_inst_t* spi, const uint8_t* src,
                                            uint8_t* dst, size_t len));
  MOCK_METHOD0(__dmb, void());
  MOCK_METHOD0(__dsb, void());
  MOCK_METHOD0(__isb, void());
  MOCK_METHOD0(__mem_fence_acquire, void());
  MOCK_METHOD0(__mem_fence_release, void());
  MOCK_METHOD0(__nop, void());
  MOCK_METHOD0(__sev, void());
  MOCK_METHOD0(__wfe, void());
  MOCK_METHOD0(__wfi, void());
  MOCK_METHOD0(next_striped_spin_lock_num, uint());
  MOCK_METHOD1(restore_interrupts, void(uint32_t status));
  MOCK_METHOD1(restore_interrupts_from_disabled, void(uint32_t status));
  MOCK_METHOD0(save_and_disable_interrupts, uint32_t());
  MOCK_METHOD1(spin_lock_claim, void(uint lock_num));
  MOCK_METHOD1(spin_lock_claim_mask, void(uint32_t lock_num_mask));
  MOCK_METHOD1(spin_lock_claim_unused, int(bool required));
  MOCK_METHOD1(spin_lock_is_claimed, bool(uint lock_num));
  MOCK_METHOD1(spin_lock_unclaim, void(uint lock_num));
  MOCK_METHOD1(tick_is_running, bool(tick_gen_num_t tick));
  MOCK_METHOD2(tick_start, void(tick_gen_num_t tick, uint cycles));
  MOCK_METHOD1(tick_stop, void(tick_gen_num_t tick));
  MOCK_METHOD1(busy_wait_ms, void(uint32_t delay_ms));
  MOCK_METHOD1(busy_wait_until, void(absolute_time_t t));
  MOCK_METHOD1(busy_wait_us, void(uint64_t delay_us));
  MOCK_METHOD1(busy_wait_us_32, void(uint32_t delay_us));
  MOCK_METHOD1(hardware_alarm_cancel, void(uint alarm_num));
  MOCK_METHOD1(hardware_alarm_claim, void(uint alarm_num));
  MOCK_METHOD1(hardware_alarm_claim_unused, int(bool required));
  MOCK_METHOD1(hardware_alarm_force_irq, void(uint alarm_num));
  MOCK_METHOD2(hardware_alarm_get_irq_num,
               uint(timer_hw_t* timer, uint alarm_num));
  MOCK_METHOD1(hardware_alarm_is_claimed, bool(uint alarm_num));
  MOCK_METHOD2(hardware_alarm_set_callback,
               void(uint alarm_num, hardware_alarm_callback_t callback));
  MOCK_METHOD2(hardware_alarm_set_target,
               bool(uint alarm_num, absolute_time_t t));
  MOCK_METHOD1(hardware_alarm_unclaim, void(uint alarm_num));
  MOCK_METHOD1(time_reached, bool(absolute_time_t t));
  MOCK_METHOD0(time_us_32, uint32_t());
  MOCK_METHOD0(time_us_64, uint64_t());
  MOCK_METHOD2(timer_busy_wait_ms, void(timer_hw_t* timer, uint32_t delay_ms));
  MOCK_METHOD2(timer_busy_wait_until,
               void(timer_hw_t* timer, absolute_time_t t));
  MOCK_METHOD2(timer_busy_wait_us, void(timer_hw_t* timer, uint64_t delay_us));
  MOCK_METHOD2(timer_busy_wait_us_32,
               void(timer_hw_t* timer, uint32_t delay_us));
  MOCK_METHOD1(timer_get_index, uint(timer_hw_t* timer));
  MOCK_METHOD1(timer_get_instance, timer_hw_t*(uint timer_num));
  MOCK_METHOD2(timer_hardware_alarm_cancel,
               void(timer_hw_t* timer, uint alarm_num));
  MOCK_METHOD2(timer_hardware_alarm_claim,
               void(timer_hw_t* timer, uint alarm_num));
  MOCK_METHOD2(timer_hardware_alarm_claim_unused,
               int(timer_hw_t* timer, bool required));
  MOCK_METHOD2(timer_hardware_alarm_force_irq,
               void(timer_hw_t* timer, uint alarm_num));
  MOCK_METHOD2(timer_hardware_alarm_is_claimed,
               bool(timer_hw_t* timer, uint alarm_num));
  MOCK_METHOD3(timer_hardware_alarm_set_callback,
               void(timer_hw_t* timer, uint alarm_num,
                    hardware_alarm_callback_t callback));
  MOCK_METHOD3(timer_hardware_alarm_set_target,
               bool(timer_hw_t* timer, uint alarm_num, absolute_time_t t));
  MOCK_METHOD2(timer_hardware_alarm_unclaim,
               void(timer_hw_t* timer, uint alarm_num));
  MOCK_METHOD2(timer_time_reached, bool(timer_hw_t* timer, absolute_time_t t));
  MOCK_METHOD1(timer_time_us_32, uint32_t(timer_hw_t* timer));
  MOCK_METHOD1(timer_time_us_64, uint64_t(timer_hw_t* timer));
}  // class MockSdkWrapper : public SdkWrapper
;
// GCOVR_EXCL_STOP
#endif  // __has_include(<gmock/gmock.h>)

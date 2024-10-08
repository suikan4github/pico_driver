
FAKE_VOID_FUNC(i2c_deinit, i2c_inst_t*);
FAKE_VALUE_FUNC(uint, i2c_get_dreq, i2c_inst_t*, bool);
FAKE_VALUE_FUNC(i2c_hw_t*, i2c_get_hw, i2c_inst_t*);
FAKE_VALUE_FUNC(uint, i2c_get_index, i2c_inst_t*);
FAKE_VALUE_FUNC(i2c_inst_t*, i2c_get_instance, uint);
FAKE_VALUE_FUNC(size_t, i2c_get_read_available, i2c_inst_t*);
FAKE_VALUE_FUNC(size_t, i2c_get_write_available, i2c_inst_t*);
FAKE_VALUE_FUNC(uint, i2c_init, i2c_inst_t*, uint);
FAKE_VALUE_FUNC(int, i2c_read_blocking, i2c_inst_t*, uint8_t, uint8_t*, size_t,
                bool);
FAKE_VALUE_FUNC(int, i2c_read_blocking_until, i2c_inst_t*, uint8_t, uint8_t*,
                size_t, bool, absolute_time_t);
FAKE_VALUE_FUNC(uint8_t, i2c_read_byte_raw, i2c_inst_t*);
FAKE_VOID_FUNC(i2c_read_raw_blocking, i2c_inst_t*, uint8_t*, size_t);
FAKE_VALUE_FUNC(int, i2c_read_timeout_per_char_us, i2c_inst_t*, uint8_t,
                uint8_t*, size_t, bool, uint);
FAKE_VALUE_FUNC(int, i2c_read_timeout_us, i2c_inst_t*, uint8_t, uint8_t*,
                size_t, bool, uint);
FAKE_VALUE_FUNC(uint, i2c_set_baudrate, i2c_inst_t*, uint);
FAKE_VOID_FUNC(i2c_set_slave_mode, i2c_inst_t*, bool, uint8_t);
FAKE_VALUE_FUNC(int, i2c_write_blocking, i2c_inst_t*, uint8_t, const uint8_t*,
                size_t, bool);
FAKE_VALUE_FUNC(int, i2c_write_blocking_until, i2c_inst_t*, uint8_t,
                const uint8_t*, size_t, bool, absolute_time_t);
FAKE_VOID_FUNC(i2c_write_byte_raw, i2c_inst_t*, uint8_t);
FAKE_VOID_FUNC(i2c_write_raw_blocking, i2c_inst_t*, const uint8_t*, size_t);
FAKE_VALUE_FUNC(int, i2c_write_timeout_per_char_us, i2c_inst_t*, uint8_t,
                const uint8_t*, size_t, bool, uint);
FAKE_VALUE_FUNC(int, i2c_write_timeout_us, i2c_inst_t*, uint8_t, const uint8_t*,
                size_t, bool, uint);
FAKE_VALUE_FUNC(int, pio_add_program, PIO, const pio_program_t*);
FAKE_VALUE_FUNC(int, pio_add_program_at_offset, PIO, const pio_program_t*,
                uint);
FAKE_VOID_FUNC(pio_calculate_clkdiv_from_float, float, uint16_t*, uint8_t*);
FAKE_VALUE_FUNC(bool, pio_can_add_program, PIO, const pio_program_t*);
FAKE_VALUE_FUNC(bool, pio_can_add_program_at_offset, PIO, const pio_program_t*,
                uint);
FAKE_VALUE_FUNC(bool, pio_claim_free_sm_and_add_program, const pio_program_t*,
                PIO*, uint*, uint*);
FAKE_VALUE_FUNC(bool, pio_claim_free_sm_and_add_program_for_gpio_range,
                const pio_program_t*, PIO*, uint*, uint*, uint, uint, bool);
FAKE_VOID_FUNC(pio_claim_sm_mask, PIO, uint);
FAKE_VALUE_FUNC(int, pio_claim_unused_sm, PIO, bool);
FAKE_VOID_FUNC(pio_clear_instruction_memory, PIO);
FAKE_VOID_FUNC(pio_clkdiv_restart_sm_mask, PIO, uint32_t);
FAKE_VOID_FUNC(pio_clkdiv_restart_sm_multi_mask, PIO, uint32_t, uint32_t,
               uint32_t);
FAKE_VOID_FUNC(pio_enable_sm_mask_in_sync, PIO, uint32_t);
FAKE_VOID_FUNC(pio_enable_sm_multi_mask_in_sync, PIO, uint32_t, uint32_t,
               uint32_t);
FAKE_VALUE_FUNC(pio_sm_config, pio_get_default_sm_config);
FAKE_VALUE_FUNC(uint, pio_get_dreq, PIO, uint, bool);
FAKE_VALUE_FUNC(uint, pio_get_funcsel, PIO);
FAKE_VALUE_FUNC(uint, pio_get_gpio_base, PIO);
FAKE_VALUE_FUNC(uint, pio_get_index, PIO);
FAKE_VALUE_FUNC(PIO, pio_get_instance, uint);
FAKE_VALUE_FUNC(int, pio_get_irq_num, PIO, uint);
FAKE_VALUE_FUNC(pio_interrupt_source_t,
                pio_get_rx_fifo_not_empty_interrupt_source, uint);
FAKE_VALUE_FUNC(pio_interrupt_source_t,
                pio_get_tx_fifo_not_full_interrupt_source, uint);
FAKE_VOID_FUNC(pio_gpio_init, PIO, uint);
FAKE_VOID_FUNC(pio_interrupt_clear, PIO, uint);
FAKE_VALUE_FUNC(bool, pio_interrupt_get, PIO, uint);
FAKE_VOID_FUNC(pio_remove_program, PIO, const pio_program_t*, uint);
FAKE_VOID_FUNC(pio_remove_program_and_unclaim_sm, const pio_program_t*, PIO,
               uint, uint);
FAKE_VOID_FUNC(pio_restart_sm_mask, PIO, uint32_t);
FAKE_VALUE_FUNC(int, pio_set_gpio_base, PIO, uint);
FAKE_VOID_FUNC(pio_set_irq0_source_enabled, PIO, pio_interrupt_source_t, bool);
FAKE_VOID_FUNC(pio_set_irq0_source_mask_enabled, PIO, uint32_t, bool);
FAKE_VOID_FUNC(pio_set_irq1_source_enabled, PIO, pio_interrupt_source_t, bool);
FAKE_VOID_FUNC(pio_set_irq1_source_mask_enabled, PIO, uint32_t, bool);
FAKE_VOID_FUNC(pio_set_irqn_source_enabled, PIO, uint, pio_interrupt_source_t,
               bool);
FAKE_VOID_FUNC(pio_set_irqn_source_mask_enabled, PIO, uint, uint32_t, bool);
FAKE_VOID_FUNC(pio_set_sm_mask_enabled, PIO, uint32_t, bool);
FAKE_VOID_FUNC(pio_set_sm_multi_mask_enabled, PIO, uint32_t, uint32_t, uint32_t,
               bool);
FAKE_VOID_FUNC(pio_sm_claim, PIO, uint);
FAKE_VOID_FUNC(pio_sm_clear_fifos, PIO, uint);
FAKE_VOID_FUNC(pio_sm_clkdiv_restart, PIO, uint);
FAKE_VOID_FUNC(pio_sm_drain_tx_fifo, PIO, uint);
FAKE_VOID_FUNC(pio_sm_exec, PIO, uint, uint);
FAKE_VOID_FUNC(pio_sm_exec_wait_blocking, PIO, uint, uint);
FAKE_VALUE_FUNC(uint32_t, pio_sm_get, PIO, uint);
FAKE_VALUE_FUNC(uint32_t, pio_sm_get_blocking, PIO, uint);
FAKE_VALUE_FUNC(uint8_t, pio_sm_get_pc, PIO, uint);
FAKE_VALUE_FUNC(uint, pio_sm_get_rx_fifo_level, PIO, uint);
FAKE_VALUE_FUNC(uint, pio_sm_get_tx_fifo_level, PIO, uint);
FAKE_VALUE_FUNC(int, pio_sm_init, PIO, uint, uint, const pio_sm_config*);
FAKE_VALUE_FUNC(bool, pio_sm_is_claimed, PIO, uint);
FAKE_VALUE_FUNC(bool, pio_sm_is_exec_stalled, PIO, uint);
FAKE_VALUE_FUNC(bool, pio_sm_is_rx_fifo_empty, PIO, uint);
FAKE_VALUE_FUNC(bool, pio_sm_is_rx_fifo_full, PIO, uint);
FAKE_VALUE_FUNC(bool, pio_sm_is_tx_fifo_empty, PIO, uint);
FAKE_VALUE_FUNC(bool, pio_sm_is_tx_fifo_full, PIO, uint);
FAKE_VOID_FUNC(pio_sm_put, PIO, uint, uint32_t);
FAKE_VOID_FUNC(pio_sm_put_blocking, PIO, uint, uint32_t);
FAKE_VOID_FUNC(pio_sm_restart, PIO, uint);
FAKE_VOID_FUNC(pio_sm_set_clkdiv, PIO, uint, float);
FAKE_VOID_FUNC(pio_sm_set_clkdiv_int_frac, PIO, uint, uint16_t, uint8_t);
FAKE_VALUE_FUNC(int, pio_sm_set_config, PIO, uint, const pio_sm_config*);
FAKE_VALUE_FUNC(int, pio_sm_set_consecutive_pindirs, PIO, uint, uint, uint,
                bool);
FAKE_VOID_FUNC(pio_sm_set_enabled, PIO, uint, bool);
FAKE_VOID_FUNC(pio_sm_set_in_pins, PIO, uint, uint);
FAKE_VOID_FUNC(pio_sm_set_jmp_pin, PIO, uint, uint);
FAKE_VOID_FUNC(pio_sm_set_out_pins, PIO, uint, uint, uint);
FAKE_VOID_FUNC(pio_sm_set_pindirs_with_mask, PIO, uint, uint32_t, uint32_t);
FAKE_VOID_FUNC(pio_sm_set_pins, PIO, uint, uint32_t);
FAKE_VOID_FUNC(pio_sm_set_pins_with_mask, PIO, uint, uint32_t, uint32_t);
FAKE_VOID_FUNC(pio_sm_set_set_pins, PIO, uint, uint, uint);
FAKE_VOID_FUNC(pio_sm_set_sideset_pins, PIO, uint, uint);
FAKE_VOID_FUNC(pio_sm_set_wrap, PIO, uint, uint, uint);
FAKE_VOID_FUNC(pio_sm_unclaim, PIO, uint);
FAKE_VOID_FUNC(sm_config_set_clkdiv, pio_sm_config*, float);
FAKE_VOID_FUNC(sm_config_set_clkdiv_int_frac, pio_sm_config*, uint16_t,
               uint8_t);
FAKE_VOID_FUNC(sm_config_set_fifo_join, pio_sm_config*, enum pio_fifo_join);
FAKE_VOID_FUNC(sm_config_set_in_pin_base, pio_sm_config*, uint);
FAKE_VOID_FUNC(sm_config_set_in_pin_count, pio_sm_config*, uint);
FAKE_VOID_FUNC(sm_config_set_in_pins, pio_sm_config*, uint);
FAKE_VOID_FUNC(sm_config_set_in_shift, pio_sm_config*, bool, bool, uint);
FAKE_VOID_FUNC(sm_config_set_jmp_pin, pio_sm_config*, uint);
FAKE_VOID_FUNC(sm_config_set_mov_status, pio_sm_config*,
               enum pio_mov_status_type, uint);
FAKE_VOID_FUNC(sm_config_set_out_pin_base, pio_sm_config*, uint);
FAKE_VOID_FUNC(sm_config_set_out_pin_count, pio_sm_config*, uint);
FAKE_VOID_FUNC(sm_config_set_out_pins, pio_sm_config*, uint, uint);
FAKE_VOID_FUNC(sm_config_set_out_shift, pio_sm_config*, bool, bool, uint);
FAKE_VOID_FUNC(sm_config_set_out_special, pio_sm_config*, bool, bool, uint);
FAKE_VOID_FUNC(sm_config_set_set_pin_base, pio_sm_config*, uint);
FAKE_VOID_FUNC(sm_config_set_set_pin_count, pio_sm_config*, uint);
FAKE_VOID_FUNC(sm_config_set_set_pins, pio_sm_config*, uint, uint);
FAKE_VOID_FUNC(sm_config_set_sideset, pio_sm_config*, uint, bool, bool);
FAKE_VOID_FUNC(sm_config_set_sideset_pin_base, pio_sm_config*, uint);
FAKE_VOID_FUNC(sm_config_set_sideset_pins, pio_sm_config*, uint);
FAKE_VOID_FUNC(sm_config_set_wrap, pio_sm_config*, uint, uint);
FAKE_VOID_FUNC(gpio_acknowledge_irq, uint, uint32_t);
FAKE_VOID_FUNC(gpio_add_raw_irq_handler, uint, irq_handler_t);
FAKE_VOID_FUNC(gpio_add_raw_irq_handler_masked, uint32_t, irq_handler_t);
FAKE_VOID_FUNC(gpio_add_raw_irq_handler_masked64, uint64_t, irq_handler_t);
FAKE_VOID_FUNC(gpio_add_raw_irq_handler_with_order_priority, uint,
               irq_handler_t, uint8_t);
FAKE_VOID_FUNC(gpio_add_raw_irq_handler_with_order_priority_masked, uint32_t,
               irq_handler_t, uint8_t);
FAKE_VOID_FUNC(gpio_add_raw_irq_handler_with_order_priority_masked64, uint64_t,
               irq_handler_t, uint8_t);
FAKE_VOID_FUNC(gpio_assign_to_ns, uint, bool);
FAKE_VOID_FUNC(gpio_clr_mask, uint32_t);
FAKE_VOID_FUNC(gpio_clr_mask64, uint64_t);
FAKE_VOID_FUNC(gpio_clr_mask_n, uint, uint32_t);
FAKE_VOID_FUNC(gpio_debug_pins_init);
FAKE_VOID_FUNC(gpio_deinit, uint);
FAKE_VOID_FUNC(gpio_disable_pulls, uint);
FAKE_VALUE_FUNC(bool, gpio_get, uint);
FAKE_VALUE_FUNC(uint32_t, gpio_get_all);
FAKE_VALUE_FUNC(uint64_t, gpio_get_all64);
FAKE_VALUE_FUNC(uint, gpio_get_dir, uint);
FAKE_VALUE_FUNC(enum gpio_drive_strength, gpio_get_drive_strength, uint);
FAKE_VALUE_FUNC(gpio_function_t, gpio_get_function, uint);
FAKE_VALUE_FUNC(uint32_t, gpio_get_irq_event_mask, uint);
FAKE_VALUE_FUNC(bool, gpio_get_out_level, uint);
FAKE_VALUE_FUNC(enum gpio_slew_rate, gpio_get_slew_rate, uint);
FAKE_VOID_FUNC(gpio_init, uint);
FAKE_VOID_FUNC(gpio_init_mask, uint);
FAKE_VALUE_FUNC(bool, gpio_is_dir_out, uint);
FAKE_VALUE_FUNC(bool, gpio_is_input_hysteresis_enabled, uint);
FAKE_VALUE_FUNC(bool, gpio_is_pulled_down, uint);
FAKE_VALUE_FUNC(bool, gpio_is_pulled_up, uint);
FAKE_VOID_FUNC(gpio_pull_down, uint);
FAKE_VOID_FUNC(gpio_pull_up, uint);
FAKE_VOID_FUNC(gpio_put, uint, bool);
FAKE_VOID_FUNC(gpio_put_all, uint32_t);
FAKE_VOID_FUNC(gpio_put_all64, uint64_t);
FAKE_VOID_FUNC(gpio_put_masked, uint32_t, uint32_t);
FAKE_VOID_FUNC(gpio_put_masked64, uint64_t, uint64_t);
FAKE_VOID_FUNC(gpio_put_masked_n, uint, uint32_t, uint32_t);
FAKE_VOID_FUNC(gpio_remove_raw_irq_handler, uint, irq_handler_t);
FAKE_VOID_FUNC(gpio_remove_raw_irq_handler_masked, uint32_t, irq_handler_t);
FAKE_VOID_FUNC(gpio_remove_raw_irq_handler_masked64, uint64_t, irq_handler_t);
FAKE_VOID_FUNC(gpio_set_dir, uint, bool);
FAKE_VOID_FUNC(gpio_set_dir_all_bits, uint32_t);
FAKE_VOID_FUNC(gpio_set_dir_all_bits64, uint64_t);
FAKE_VOID_FUNC(gpio_set_dir_in_masked, uint32_t);
FAKE_VOID_FUNC(gpio_set_dir_in_masked64, uint64_t);
FAKE_VOID_FUNC(gpio_set_dir_masked, uint32_t, uint32_t);
FAKE_VOID_FUNC(gpio_set_dir_masked64, uint64_t, uint64_t);
FAKE_VOID_FUNC(gpio_set_dir_out_masked, uint32_t);
FAKE_VOID_FUNC(gpio_set_dir_out_masked64, uint64_t);
FAKE_VOID_FUNC(gpio_set_dormant_irq_enabled, uint, uint32_t, bool);
FAKE_VOID_FUNC(gpio_set_drive_strength, uint, enum gpio_drive_strength);
FAKE_VOID_FUNC(gpio_set_function, uint, gpio_function_t);
FAKE_VOID_FUNC(gpio_set_function_masked, uint32_t, gpio_function_t);
FAKE_VOID_FUNC(gpio_set_function_masked64, uint64_t, gpio_function_t);
FAKE_VOID_FUNC(gpio_set_inover, uint, uint);
FAKE_VOID_FUNC(gpio_set_input_enabled, uint, bool);
FAKE_VOID_FUNC(gpio_set_input_hysteresis_enabled, uint, bool);
FAKE_VOID_FUNC(gpio_set_irq_callback, gpio_irq_callback_t);
FAKE_VOID_FUNC(gpio_set_irq_enabled, uint, uint32_t, bool);
FAKE_VOID_FUNC(gpio_set_irq_enabled_with_callback, uint, uint32_t, bool,
               gpio_irq_callback_t);
FAKE_VOID_FUNC(gpio_set_irqover, uint, uint);
FAKE_VOID_FUNC(gpio_set_mask, uint32_t);
FAKE_VOID_FUNC(gpio_set_mask64, uint64_t);
FAKE_VOID_FUNC(gpio_set_mask_n, uint, uint32_t);
FAKE_VOID_FUNC(gpio_set_oeover, uint, uint);
FAKE_VOID_FUNC(gpio_set_outover, uint, uint);
FAKE_VOID_FUNC(gpio_set_pulls, uint, bool, bool);
FAKE_VOID_FUNC(gpio_set_slew_rate, uint, enum gpio_slew_rate);
FAKE_VOID_FUNC(gpio_xor_mask, uint32_t);
FAKE_VOID_FUNC(gpio_xor_mask64, uint64_t);
FAKE_VOID_FUNC(gpio_xor_mask_n, uint, uint32_t);
FAKE_VALUE_FUNC(bool, check_sys_clock_hz, uint32_t, uint*, uint*, uint*);
FAKE_VALUE_FUNC(bool, check_sys_clock_khz, uint32_t, uint*, uint*, uint*);
FAKE_VALUE_FUNC(bool, clock_configure, clock_handle_t, uint32_t, uint32_t,
                uint32_t, uint32_t);
FAKE_VALUE_FUNC(bool, clock_configure_gpin, clock_handle_t, uint, uint32_t,
                uint32_t);
FAKE_VOID_FUNC(clock_configure_int_divider, clock_handle_t, uint32_t, uint32_t,
               uint32_t, uint32_t);
FAKE_VOID_FUNC(clock_configure_undivided, clock_handle_t, uint32_t, uint32_t,
               uint32_t);
FAKE_VALUE_FUNC(uint32_t, clock_get_hz, clock_handle_t);
FAKE_VOID_FUNC(clock_gpio_init, uint, uint, float);
FAKE_VOID_FUNC(clock_gpio_init_int_frac, uint, uint, uint32_t, uint8_t);
FAKE_VOID_FUNC(clock_set_reported_hz, clock_handle_t, uint);
FAKE_VOID_FUNC(clock_stop, clock_handle_t);
FAKE_VOID_FUNC(clocks_enable_resus, resus_callback_t);
FAKE_VALUE_FUNC(uint32_t, frequency_count_khz, uint);
FAKE_VALUE_FUNC(float, frequency_count_mhz, uint);
FAKE_VOID_FUNC(set_sys_clock_48mhz);
FAKE_VALUE_FUNC(bool, set_sys_clock_hz, uint32_t, bool);
FAKE_VALUE_FUNC(bool, set_sys_clock_khz, uint32_t, bool);
FAKE_VOID_FUNC(set_sys_clock_pll, uint32_t, uint, uint);
FAKE_VALUE_FUNC(int64_t, absolute_time_diff_us, absolute_time_t,
                absolute_time_t);
FAKE_VALUE_FUNC(absolute_time_t, absolute_time_min, absolute_time_t,
                absolute_time_t);
FAKE_VALUE_FUNC(alarm_id_t, add_alarm_at, absolute_time_t, alarm_callback_t,
                void*, bool);
FAKE_VALUE_FUNC(alarm_id_t, add_alarm_in_ms, uint32_t, alarm_callback_t, void*,
                bool);
FAKE_VALUE_FUNC(alarm_id_t, add_alarm_in_us, uint64_t, alarm_callback_t, void*,
                bool);
FAKE_VALUE_FUNC(bool, add_repeating_timer_ms, int32_t,
                repeating_timer_callback_t, void*, repeating_timer_t*);
FAKE_VALUE_FUNC(bool, add_repeating_timer_us, int64_t,
                repeating_timer_callback_t, void*, repeating_timer_t*);
FAKE_VALUE_FUNC(alarm_id_t, alarm_pool_add_alarm_at, alarm_pool_t*,
                absolute_time_t, alarm_callback_t, void*, bool);
FAKE_VALUE_FUNC(alarm_id_t, alarm_pool_add_alarm_at_force_in_context,
                alarm_pool_t*, absolute_time_t, alarm_callback_t, void*);
FAKE_VALUE_FUNC(alarm_id_t, alarm_pool_add_alarm_in_ms, alarm_pool_t*, uint32_t,
                alarm_callback_t, void*, bool);
FAKE_VALUE_FUNC(alarm_id_t, alarm_pool_add_alarm_in_us, alarm_pool_t*, uint64_t,
                alarm_callback_t, void*, bool);
FAKE_VALUE_FUNC(bool, alarm_pool_add_repeating_timer_ms, alarm_pool_t*, int32_t,
                repeating_timer_callback_t, void*, repeating_timer_t*);
FAKE_VALUE_FUNC(bool, alarm_pool_add_repeating_timer_us, alarm_pool_t*, int64_t,
                repeating_timer_callback_t, void*, repeating_timer_t*);
FAKE_VALUE_FUNC(bool, alarm_pool_cancel_alarm, alarm_pool_t*, alarm_id_t);
FAKE_VALUE_FUNC(uint, alarm_pool_core_num, alarm_pool_t*);
FAKE_VALUE_FUNC(alarm_pool_t*, alarm_pool_create, uint, uint);
FAKE_VALUE_FUNC(alarm_pool_t*, alarm_pool_create_on_timer, alarm_pool_timer_t*,
                uint, uint);
FAKE_VALUE_FUNC(alarm_pool_t*,
                alarm_pool_create_on_timer_with_unused_hardware_alarm,
                alarm_pool_timer_t*, uint);
FAKE_VALUE_FUNC(alarm_pool_t*, alarm_pool_create_with_unused_hardware_alarm,
                uint);
FAKE_VOID_FUNC(alarm_pool_destroy, alarm_pool_t*);
FAKE_VALUE_FUNC(alarm_pool_t*, alarm_pool_get_default);
FAKE_VALUE_FUNC(alarm_pool_timer_t*, alarm_pool_get_default_timer);
FAKE_VALUE_FUNC(uint, alarm_pool_hardware_alarm_num, alarm_pool_t*);
FAKE_VOID_FUNC(alarm_pool_init_default);
FAKE_VALUE_FUNC(int32_t, alarm_pool_remaining_alarm_time_ms, alarm_pool_t*,
                alarm_id_t);
FAKE_VALUE_FUNC(int64_t, alarm_pool_remaining_alarm_time_us, alarm_pool_t*,
                alarm_id_t);
FAKE_VALUE_FUNC(uint, alarm_pool_timer_alarm_num, alarm_pool_t*);
FAKE_VALUE_FUNC(alarm_pool_timer_t*, alarm_pool_timer_for_timer_num, uint);
FAKE_VALUE_FUNC(bool, best_effort_wfe_or_timeout, absolute_time_t);
FAKE_VALUE_FUNC(bool, cancel_alarm, alarm_id_t);
FAKE_VALUE_FUNC(bool, cancel_repeating_timer, repeating_timer_t*);
FAKE_VALUE_FUNC(absolute_time_t, delayed_by_ms, const absolute_time_t,
                uint32_t);
FAKE_VALUE_FUNC(absolute_time_t, delayed_by_us, const absolute_time_t,
                uint64_t);
FAKE_VALUE_FUNC(absolute_time_t, get_absolute_time);
FAKE_VALUE_FUNC(bool, is_at_the_end_of_time, absolute_time_t);
FAKE_VALUE_FUNC(bool, is_nil_time, absolute_time_t);
FAKE_VALUE_FUNC(absolute_time_t, make_timeout_time_ms, uint32_t);
FAKE_VALUE_FUNC(absolute_time_t, make_timeout_time_us, uint64_t);
FAKE_VALUE_FUNC(int32_t, remaining_alarm_time_ms, alarm_id_t);
FAKE_VALUE_FUNC(int64_t, remaining_alarm_time_us, alarm_id_t);
FAKE_VOID_FUNC(runtime_init_default_alarm_pool);
FAKE_VOID_FUNC(sleep_ms, uint32_t);
FAKE_VOID_FUNC(sleep_until, absolute_time_t);
FAKE_VOID_FUNC(sleep_us, uint64_t);
FAKE_VALUE_FUNC(uint32_t, to_ms_since_boot, absolute_time_t);
FAKE_VALUE_FUNC(uint32_t, us_to_ms, uint64_t);
FAKE_VALUE_FUNC(int, getchar_timeout_us, uint32_t);
FAKE_VALUE_FUNC(int, putchar_raw, int);
FAKE_VALUE_FUNC(int, puts_raw, const char*);
FAKE_VALUE_FUNC(bool, stdio_deinit_all);
FAKE_VOID_FUNC(stdio_filter_driver, stdio_driver_t*);
FAKE_VOID_FUNC(stdio_flush);
FAKE_VALUE_FUNC(int, stdio_get_until, char*, int, absolute_time_t);
FAKE_VALUE_FUNC(int, stdio_getchar);
FAKE_VALUE_FUNC(int, stdio_getchar_timeout_us, uint32_t);
FAKE_VALUE_FUNC(bool, stdio_init_all);
FAKE_VALUE_FUNC(int, __printflike, 1, , )
,format,
);
FAKE_VALUE_FUNC(int, stdio_put_string, const char*, int, bool, bool);
FAKE_VALUE_FUNC(int, stdio_putchar, int);
FAKE_VALUE_FUNC(int, stdio_putchar_raw, int);
FAKE_VALUE_FUNC(int, stdio_puts, const char*);
FAKE_VALUE_FUNC(int, stdio_puts_raw, const char*);
FAKE_VOID_FUNC(stdio_set_chars_available_callback, )(void*);
FAKE_VOID_FUNC(stdio_set_driver_enabled, stdio_driver_t*, bool);
FAKE_VOID_FUNC(stdio_set_translate_crlf, stdio_driver_t*, bool);
FAKE_VALUE_FUNC(int, stdio_vprintf, const char*, va_list);

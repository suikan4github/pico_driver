#if __has_include(<gmock/gmock.h>)

class MockSdkWrapper : public SdkWrapper {
 public:
  MOCK_METHOD1(i2c_deinit, void(i2c_inst_t *i2c));
  MOCK_METHOD2(i2c_get_dreq, uint(i2c_inst_t *i2c, bool is_tx));
  MOCK_METHOD1(i2c_get_hw, i2c_hw_t *(i2c_inst_t *i2c));
  MOCK_METHOD1(i2c_get_index, uint(i2c_inst_t *i2c));
  MOCK_METHOD1(i2c_get_instance, i2c_inst_t *(uint num));
  MOCK_METHOD1(i2c_get_read_available, size_t(i2c_inst_t *i2c));
  MOCK_METHOD1(i2c_get_write_available, size_t(i2c_inst_t *i2c));
  MOCK_METHOD2(i2c_init, uint(i2c_inst_t *i2c, uint baudrate));
  MOCK_METHOD5(i2c_read_blocking, int(i2c_inst_t *i2c, uint8_t addr,
                                      uint8_t *dst, size_t len, bool nostop));
  MOCK_METHOD6(i2c_read_blocking_until,
               int(i2c_inst_t *i2c, uint8_t addr, uint8_t *dst, size_t len,
                   bool nostop, absolute_time_t until));
  MOCK_METHOD1(i2c_read_byte_raw, uint8_t(i2c_inst_t *i2c));
  MOCK_METHOD3(i2c_read_raw_blocking,
               void(i2c_inst_t *i2c, uint8_t *dst, size_t len));
  MOCK_METHOD6(i2c_read_timeout_per_char_us,
               int(i2c_inst_t *i2c, uint8_t addr, uint8_t *dst, size_t len,
                   bool nostop, uint timeout_per_char_us));
  MOCK_METHOD6(i2c_read_timeout_us,
               int(i2c_inst_t *i2c, uint8_t addr, uint8_t *dst, size_t len,
                   bool nostop, uint timeout_us));
  MOCK_METHOD2(i2c_set_baudrate, uint(i2c_inst_t *i2c, uint baudrate));
  MOCK_METHOD3(i2c_set_slave_mode,
               void(i2c_inst_t *i2c, bool slave, uint8_t addr));
  MOCK_METHOD5(i2c_write_blocking,
               int(i2c_inst_t *i2c, uint8_t addr, const uint8_t *src,
                   size_t len, bool nostop));
  MOCK_METHOD6(i2c_write_blocking_until,
               int(i2c_inst_t *i2c, uint8_t addr, const uint8_t *src,
                   size_t len, bool nostop, absolute_time_t until));
  MOCK_METHOD2(i2c_write_byte_raw, void(i2c_inst_t *i2c, uint8_t value));
  MOCK_METHOD3(i2c_write_raw_blocking,
               void(i2c_inst_t *i2c, const uint8_t *src, size_t len));
  MOCK_METHOD6(i2c_write_timeout_per_char_us,
               int(i2c_inst_t *i2c, uint8_t addr, const uint8_t *src,
                   size_t len, bool nostop, uint timeout_per_char_us));
  MOCK_METHOD6(i2c_write_timeout_us,
               int(i2c_inst_t *i2c, uint8_t addr, const uint8_t *src,
                   size_t len, bool nostop, uint timeout_us));
  MOCK_METHOD2(pio_add_program, int(PIO pio, const pio_program_t *program));
  MOCK_METHOD3(pio_add_program_at_offset,
               int(PIO pio, const pio_program_t *program, uint offset));
  MOCK_METHOD3(pio_calculate_clkdiv_from_float,
               void(float div, uint16_t *div_int, uint8_t *div_frac));
  MOCK_METHOD2(pio_can_add_program,
               bool(PIO pio, const pio_program_t *program));
  MOCK_METHOD3(pio_can_add_program_at_offset,
               bool(PIO pio, const pio_program_t *program, uint offset));
  MOCK_METHOD4(pio_claim_free_sm_and_add_program,
               bool(const pio_program_t *program, PIO *pio, uint *sm,
                    uint *offset));
  MOCK_METHOD7(pio_claim_free_sm_and_add_program_for_gpio_range,
               bool(const pio_program_t *program, PIO *pio, uint *sm,
                    uint *offset, uint gpio_base, uint gpio_count,
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
  MOCK_METHOD0(pio_get_default_sm_config, pio_sm_config(void));
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
               void(PIO pio, const pio_program_t *program, uint loaded_offset));
  MOCK_METHOD4(pio_remove_program_and_unclaim_sm,
               void(const pio_program_t *program, PIO pio, uint sm,
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
                                const pio_sm_config *config));
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
               int(PIO pio, uint sm, const pio_sm_config *config));
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
  MOCK_METHOD2(sm_config_set_clkdiv, void(pio_sm_config *c, float div));
  MOCK_METHOD3(sm_config_set_clkdiv_int_frac,
               void(pio_sm_config *c, uint16_t div_int, uint8_t div_frac));
  MOCK_METHOD2(sm_config_set_fifo_join,
               void(pio_sm_config *c, enum pio_fifo_join join));
  MOCK_METHOD2(sm_config_set_in_pin_base, void(pio_sm_config *c, uint in_base));
  MOCK_METHOD2(sm_config_set_in_pin_count,
               void(pio_sm_config *c, uint in_count));
  MOCK_METHOD2(sm_config_set_in_pins, void(pio_sm_config *c, uint in_base));
  MOCK_METHOD4(sm_config_set_in_shift,
               void(pio_sm_config *c, bool shift_right, bool autopush,
                    uint push_threshold));
  MOCK_METHOD2(sm_config_set_jmp_pin, void(pio_sm_config *c, uint pin));
  MOCK_METHOD3(sm_config_set_mov_status,
               void(pio_sm_config *c, enum pio_mov_status_type status_sel,
                    uint status_n));
  MOCK_METHOD2(sm_config_set_out_pin_base,
               void(pio_sm_config *c, uint out_base));
  MOCK_METHOD2(sm_config_set_out_pin_count,
               void(pio_sm_config *c, uint out_count));
  MOCK_METHOD3(sm_config_set_out_pins,
               void(pio_sm_config *c, uint out_base, uint out_count));
  MOCK_METHOD4(sm_config_set_out_shift,
               void(pio_sm_config *c, bool shift_right, bool autopull,
                    uint pull_threshold));
  MOCK_METHOD4(sm_config_set_out_special,
               void(pio_sm_config *c, bool sticky, bool has_enable_pin,
                    uint enable_pin_index));
  MOCK_METHOD2(sm_config_set_set_pin_base,
               void(pio_sm_config *c, uint set_base));
  MOCK_METHOD2(sm_config_set_set_pin_count,
               void(pio_sm_config *c, uint set_count));
  MOCK_METHOD3(sm_config_set_set_pins,
               void(pio_sm_config *c, uint set_base, uint set_count));
  MOCK_METHOD4(sm_config_set_sideset, void(pio_sm_config *c, uint bit_count,
                                           bool optional, bool pindirs));
  MOCK_METHOD2(sm_config_set_sideset_pin_base,
               void(pio_sm_config *c, uint sideset_base));
  MOCK_METHOD2(sm_config_set_sideset_pins,
               void(pio_sm_config *c, uint sideset_base));
  MOCK_METHOD3(sm_config_set_wrap,
               void(pio_sm_config *c, uint wrap_target, uint wrap));
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
  MOCK_METHOD0(gpio_debug_pins_init, void(void));
  MOCK_METHOD1(gpio_deinit, void(uint gpio));
  MOCK_METHOD1(gpio_disable_pulls, void(uint gpio));
  MOCK_METHOD1(gpio_get, bool(uint gpio));
  MOCK_METHOD0(gpio_get_all, uint32_t(void));
  MOCK_METHOD0(gpio_get_all64, uint64_t(void));
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
  MOCK_METHOD4(check_sys_clock_hz,
               bool(uint32_t freq_hz, uint *vco_freq_out, uint *post_div1_out,
                    uint *post_div2_out));
  MOCK_METHOD4(check_sys_clock_khz,
               bool(uint32_t freq_khz, uint *vco_freq_out, uint *post_div1_out,
                    uint *post_div2_out));
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
  MOCK_METHOD0(set_sys_clock_48mhz, void(void));
  MOCK_METHOD2(set_sys_clock_hz, bool(uint32_t freq_hz, bool required));
  MOCK_METHOD2(set_sys_clock_khz, bool(uint32_t freq_khz, bool required));
  MOCK_METHOD3(set_sys_clock_pll,
               void(uint32_t vco_freq, uint post_div1, uint post_div2));
}  // class MockSdkWrapper : public SdkWrapper
;
#endif  // __has_include(<gmock/gmock.h>)

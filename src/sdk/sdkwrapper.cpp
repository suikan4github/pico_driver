
#include "sdkwrapper.hpp"
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

#include "pico_sdk_headers.h"
// --------------------------------------------------
extern "C"       void i2c_deinit ( i2c_inst_t *i2c );
__attribute__((weak))     void i2c_deinit ( i2c_inst_t *i2c )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint i2c_get_dreq ( i2c_inst_t *i2c, bool is_tx );
__attribute__((weak))       uint i2c_get_dreq ( i2c_inst_t *i2c, bool is_tx )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         i2c_hw_t* i2c_get_hw ( i2c_inst_t *i2c );
__attribute__((weak))       i2c_hw_t* i2c_get_hw ( i2c_inst_t *i2c )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint i2c_get_index ( i2c_inst_t *i2c );
__attribute__((weak))       uint i2c_get_index ( i2c_inst_t *i2c )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         i2c_inst_t* i2c_get_instance ( uint num );
__attribute__((weak))       i2c_inst_t* i2c_get_instance ( uint num )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         size_t i2c_get_read_available ( i2c_inst_t *i2c );
__attribute__((weak))       size_t i2c_get_read_available ( i2c_inst_t *i2c )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         size_t i2c_get_write_available ( i2c_inst_t *i2c );
__attribute__((weak))       size_t i2c_get_write_available ( i2c_inst_t *i2c )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       uint i2c_init ( i2c_inst_t *i2c, uint baudrate );
__attribute__((weak))     uint i2c_init ( i2c_inst_t *i2c, uint baudrate )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       int i2c_read_blocking ( i2c_inst_t *i2c, uint8_t addr, uint8_t *dst, size_t len, bool nostop );
__attribute__((weak))     int i2c_read_blocking ( i2c_inst_t *i2c, uint8_t addr, uint8_t *dst, size_t len, bool nostop )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       int i2c_read_blocking_until ( i2c_inst_t *i2c, uint8_t addr, uint8_t *dst, size_t len, bool nostop, absolute_time_t until );
__attribute__((weak))     int i2c_read_blocking_until ( i2c_inst_t *i2c, uint8_t addr, uint8_t *dst, size_t len, bool nostop, absolute_time_t until )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint8_t i2c_read_byte_raw ( i2c_inst_t *i2c );
__attribute__((weak))       uint8_t i2c_read_byte_raw ( i2c_inst_t *i2c )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void i2c_read_raw_blocking ( i2c_inst_t *i2c, uint8_t *dst, size_t len );
__attribute__((weak))       void i2c_read_raw_blocking ( i2c_inst_t *i2c, uint8_t *dst, size_t len )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       int i2c_read_timeout_per_char_us ( i2c_inst_t *i2c, uint8_t addr, uint8_t *dst, size_t len, bool nostop, uint timeout_per_char_us );
__attribute__((weak))     int i2c_read_timeout_per_char_us ( i2c_inst_t *i2c, uint8_t addr, uint8_t *dst, size_t len, bool nostop, uint timeout_per_char_us )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         int i2c_read_timeout_us ( i2c_inst_t *i2c, uint8_t addr, uint8_t *dst, size_t len, bool nostop, uint timeout_us );
__attribute__((weak))       int i2c_read_timeout_us ( i2c_inst_t *i2c, uint8_t addr, uint8_t *dst, size_t len, bool nostop, uint timeout_us )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       uint i2c_set_baudrate ( i2c_inst_t *i2c, uint baudrate );
__attribute__((weak))     uint i2c_set_baudrate ( i2c_inst_t *i2c, uint baudrate )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void i2c_set_slave_mode ( i2c_inst_t *i2c, bool slave, uint8_t addr );
__attribute__((weak))     void i2c_set_slave_mode ( i2c_inst_t *i2c, bool slave, uint8_t addr )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       int i2c_write_blocking ( i2c_inst_t *i2c, uint8_t addr, const uint8_t *src, size_t len, bool nostop );
__attribute__((weak))     int i2c_write_blocking ( i2c_inst_t *i2c, uint8_t addr, const uint8_t *src, size_t len, bool nostop )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       int i2c_write_blocking_until ( i2c_inst_t *i2c, uint8_t addr, const uint8_t *src, size_t len, bool nostop, absolute_time_t until );
__attribute__((weak))     int i2c_write_blocking_until ( i2c_inst_t *i2c, uint8_t addr, const uint8_t *src, size_t len, bool nostop, absolute_time_t until )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void i2c_write_byte_raw ( i2c_inst_t *i2c, uint8_t value );
__attribute__((weak))       void i2c_write_byte_raw ( i2c_inst_t *i2c, uint8_t value )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void i2c_write_raw_blocking ( i2c_inst_t *i2c, const uint8_t *src, size_t len );
__attribute__((weak))       void i2c_write_raw_blocking ( i2c_inst_t *i2c, const uint8_t *src, size_t len )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       int i2c_write_timeout_per_char_us ( i2c_inst_t *i2c, uint8_t addr, const uint8_t *src, size_t len, bool nostop, uint timeout_per_char_us );
__attribute__((weak))     int i2c_write_timeout_per_char_us ( i2c_inst_t *i2c, uint8_t addr, const uint8_t *src, size_t len, bool nostop, uint timeout_per_char_us )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         int i2c_write_timeout_us ( i2c_inst_t *i2c, uint8_t addr, const uint8_t *src, size_t len, bool nostop, uint timeout_us );
__attribute__((weak))       int i2c_write_timeout_us ( i2c_inst_t *i2c, uint8_t addr, const uint8_t *src, size_t len, bool nostop, uint timeout_us )
{
    assert( false && "Error : The hardware_i2c library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       int pio_add_program ( PIO pio, const pio_program_t *program );
__attribute__((weak))     int pio_add_program ( PIO pio, const pio_program_t *program )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       int pio_add_program_at_offset ( PIO pio, const pio_program_t *program, uint offset );
__attribute__((weak))     int pio_add_program_at_offset ( PIO pio, const pio_program_t *program, uint offset )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_calculate_clkdiv_from_float ( float div, uint16_t *div_int, uint8_t *div_frac );
__attribute__((weak))       void pio_calculate_clkdiv_from_float ( float div, uint16_t *div_int, uint8_t *div_frac )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       bool pio_can_add_program ( PIO pio, const pio_program_t *program );
__attribute__((weak))     bool pio_can_add_program ( PIO pio, const pio_program_t *program )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       bool pio_can_add_program_at_offset ( PIO pio, const pio_program_t *program, uint offset );
__attribute__((weak))     bool pio_can_add_program_at_offset ( PIO pio, const pio_program_t *program, uint offset )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       bool pio_claim_free_sm_and_add_program ( const pio_program_t *program, PIO *pio, uint *sm, uint *offset );
__attribute__((weak))     bool pio_claim_free_sm_and_add_program ( const pio_program_t *program, PIO *pio, uint *sm, uint *offset )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       bool pio_claim_free_sm_and_add_program_for_gpio_range ( const pio_program_t *program, PIO *pio, uint *sm, uint *offset, uint gpio_base, uint gpio_count, bool set_gpio_base );
__attribute__((weak))     bool pio_claim_free_sm_and_add_program_for_gpio_range ( const pio_program_t *program, PIO *pio, uint *sm, uint *offset, uint gpio_base, uint gpio_count, bool set_gpio_base )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void pio_claim_sm_mask ( PIO pio, uint sm_mask );
__attribute__((weak))     void pio_claim_sm_mask ( PIO pio, uint sm_mask )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       int pio_claim_unused_sm ( PIO pio, bool required );
__attribute__((weak))     int pio_claim_unused_sm ( PIO pio, bool required )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void pio_clear_instruction_memory ( PIO pio );
__attribute__((weak))     void pio_clear_instruction_memory ( PIO pio )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_clkdiv_restart_sm_mask ( PIO pio, uint32_t mask );
__attribute__((weak))       void pio_clkdiv_restart_sm_mask ( PIO pio, uint32_t mask )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_clkdiv_restart_sm_multi_mask ( PIO pio, uint32_t mask_prev, uint32_t mask, uint32_t mask_next );
__attribute__((weak))       void pio_clkdiv_restart_sm_multi_mask ( PIO pio, uint32_t mask_prev, uint32_t mask, uint32_t mask_next )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_enable_sm_mask_in_sync ( PIO pio, uint32_t mask );
__attribute__((weak))       void pio_enable_sm_mask_in_sync ( PIO pio, uint32_t mask )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_enable_sm_multi_mask_in_sync ( PIO pio, uint32_t mask_prev, uint32_t mask, uint32_t mask_next );
__attribute__((weak))       void pio_enable_sm_multi_mask_in_sync ( PIO pio, uint32_t mask_prev, uint32_t mask, uint32_t mask_next )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         pio_sm_config pio_get_default_sm_config ( void );
__attribute__((weak))       pio_sm_config pio_get_default_sm_config ( void )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint pio_get_dreq ( PIO pio, uint sm, bool is_tx );
__attribute__((weak))       uint pio_get_dreq ( PIO pio, uint sm, bool is_tx )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint pio_get_funcsel ( PIO pio );
__attribute__((weak))       uint pio_get_funcsel ( PIO pio )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint pio_get_gpio_base ( PIO pio );
__attribute__((weak))       uint pio_get_gpio_base ( PIO pio )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint pio_get_index ( PIO pio );
__attribute__((weak))       uint pio_get_index ( PIO pio )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         PIO pio_get_instance ( uint instance );
__attribute__((weak))       PIO pio_get_instance ( uint instance )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         int pio_get_irq_num ( PIO pio, uint irqn );
__attribute__((weak))       int pio_get_irq_num ( PIO pio, uint irqn )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         pio_interrupt_source_t pio_get_rx_fifo_not_empty_interrupt_source ( uint sm );
__attribute__((weak))       pio_interrupt_source_t pio_get_rx_fifo_not_empty_interrupt_source ( uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         pio_interrupt_source_t pio_get_tx_fifo_not_full_interrupt_source ( uint sm );
__attribute__((weak))       pio_interrupt_source_t pio_get_tx_fifo_not_full_interrupt_source ( uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_gpio_init ( PIO pio, uint pin );
__attribute__((weak))       void pio_gpio_init ( PIO pio, uint pin )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_interrupt_clear ( PIO pio, uint pio_interrupt_num );
__attribute__((weak))       void pio_interrupt_clear ( PIO pio, uint pio_interrupt_num )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool pio_interrupt_get ( PIO pio, uint pio_interrupt_num );
__attribute__((weak))       bool pio_interrupt_get ( PIO pio, uint pio_interrupt_num )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void pio_remove_program ( PIO pio, const pio_program_t *program, uint loaded_offset );
__attribute__((weak))     void pio_remove_program ( PIO pio, const pio_program_t *program, uint loaded_offset )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void pio_remove_program_and_unclaim_sm ( const pio_program_t *program, PIO pio, uint sm, uint offset );
__attribute__((weak))     void pio_remove_program_and_unclaim_sm ( const pio_program_t *program, PIO pio, uint sm, uint offset )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_restart_sm_mask ( PIO pio, uint32_t mask );
__attribute__((weak))       void pio_restart_sm_mask ( PIO pio, uint32_t mask )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       int pio_set_gpio_base ( PIO pio, uint gpio_base );
__attribute__((weak))     int pio_set_gpio_base ( PIO pio, uint gpio_base )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_set_irq0_source_enabled ( PIO pio, pio_interrupt_source_t source, bool enabled );
__attribute__((weak))       void pio_set_irq0_source_enabled ( PIO pio, pio_interrupt_source_t source, bool enabled )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_set_irq0_source_mask_enabled ( PIO pio, uint32_t source_mask, bool enabled );
__attribute__((weak))       void pio_set_irq0_source_mask_enabled ( PIO pio, uint32_t source_mask, bool enabled )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_set_irq1_source_enabled ( PIO pio, pio_interrupt_source_t source, bool enabled );
__attribute__((weak))       void pio_set_irq1_source_enabled ( PIO pio, pio_interrupt_source_t source, bool enabled )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_set_irq1_source_mask_enabled ( PIO pio, uint32_t source_mask, bool enabled );
__attribute__((weak))       void pio_set_irq1_source_mask_enabled ( PIO pio, uint32_t source_mask, bool enabled )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_set_irqn_source_enabled ( PIO pio, uint irq_index, pio_interrupt_source_t source, bool enabled );
__attribute__((weak))       void pio_set_irqn_source_enabled ( PIO pio, uint irq_index, pio_interrupt_source_t source, bool enabled )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_set_irqn_source_mask_enabled ( PIO pio, uint irq_index, uint32_t source_mask, bool enabled );
__attribute__((weak))       void pio_set_irqn_source_mask_enabled ( PIO pio, uint irq_index, uint32_t source_mask, bool enabled )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_set_sm_mask_enabled ( PIO pio, uint32_t mask, bool enabled );
__attribute__((weak))       void pio_set_sm_mask_enabled ( PIO pio, uint32_t mask, bool enabled )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_set_sm_multi_mask_enabled ( PIO pio, uint32_t mask_prev, uint32_t mask, uint32_t mask_next, bool enabled );
__attribute__((weak))       void pio_set_sm_multi_mask_enabled ( PIO pio, uint32_t mask_prev, uint32_t mask, uint32_t mask_next, bool enabled )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void pio_sm_claim ( PIO pio, uint sm );
__attribute__((weak))     void pio_sm_claim ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_clear_fifos ( PIO pio, uint sm );
__attribute__((weak))       void pio_sm_clear_fifos ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_clkdiv_restart ( PIO pio, uint sm );
__attribute__((weak))       void pio_sm_clkdiv_restart ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void pio_sm_drain_tx_fifo ( PIO pio, uint sm );
__attribute__((weak))     void pio_sm_drain_tx_fifo ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_exec ( PIO pio, uint sm, uint instr );
__attribute__((weak))       void pio_sm_exec ( PIO pio, uint sm, uint instr )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_exec_wait_blocking ( PIO pio, uint sm, uint instr );
__attribute__((weak))       void pio_sm_exec_wait_blocking ( PIO pio, uint sm, uint instr )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint32_t pio_sm_get ( PIO pio, uint sm );
__attribute__((weak))       uint32_t pio_sm_get ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint32_t pio_sm_get_blocking ( PIO pio, uint sm );
__attribute__((weak))       uint32_t pio_sm_get_blocking ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint8_t pio_sm_get_pc ( PIO pio, uint sm );
__attribute__((weak))       uint8_t pio_sm_get_pc ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint pio_sm_get_rx_fifo_level ( PIO pio, uint sm );
__attribute__((weak))       uint pio_sm_get_rx_fifo_level ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint pio_sm_get_tx_fifo_level ( PIO pio, uint sm );
__attribute__((weak))       uint pio_sm_get_tx_fifo_level ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       int pio_sm_init ( PIO pio, uint sm, uint initial_pc, const pio_sm_config *config );
__attribute__((weak))     int pio_sm_init ( PIO pio, uint sm, uint initial_pc, const pio_sm_config *config )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       bool pio_sm_is_claimed ( PIO pio, uint sm );
__attribute__((weak))     bool pio_sm_is_claimed ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool pio_sm_is_exec_stalled ( PIO pio, uint sm );
__attribute__((weak))       bool pio_sm_is_exec_stalled ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool pio_sm_is_rx_fifo_empty ( PIO pio, uint sm );
__attribute__((weak))       bool pio_sm_is_rx_fifo_empty ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool pio_sm_is_rx_fifo_full ( PIO pio, uint sm );
__attribute__((weak))       bool pio_sm_is_rx_fifo_full ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool pio_sm_is_tx_fifo_empty ( PIO pio, uint sm );
__attribute__((weak))       bool pio_sm_is_tx_fifo_empty ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool pio_sm_is_tx_fifo_full ( PIO pio, uint sm );
__attribute__((weak))       bool pio_sm_is_tx_fifo_full ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_put ( PIO pio, uint sm, uint32_t data );
__attribute__((weak))       void pio_sm_put ( PIO pio, uint sm, uint32_t data )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_put_blocking ( PIO pio, uint sm, uint32_t data );
__attribute__((weak))       void pio_sm_put_blocking ( PIO pio, uint sm, uint32_t data )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_restart ( PIO pio, uint sm );
__attribute__((weak))       void pio_sm_restart ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_set_clkdiv ( PIO pio, uint sm, float div );
__attribute__((weak))       void pio_sm_set_clkdiv ( PIO pio, uint sm, float div )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_set_clkdiv_int_frac ( PIO pio, uint sm, uint16_t div_int, uint8_t div_frac );
__attribute__((weak))       void pio_sm_set_clkdiv_int_frac ( PIO pio, uint sm, uint16_t div_int, uint8_t div_frac )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         int pio_sm_set_config ( PIO pio, uint sm, const pio_sm_config *config );
__attribute__((weak))       int pio_sm_set_config ( PIO pio, uint sm, const pio_sm_config *config )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       int pio_sm_set_consecutive_pindirs ( PIO pio, uint sm, uint pins_base, uint pin_count, bool is_out );
__attribute__((weak))     int pio_sm_set_consecutive_pindirs ( PIO pio, uint sm, uint pins_base, uint pin_count, bool is_out )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_set_enabled ( PIO pio, uint sm, bool enabled );
__attribute__((weak))       void pio_sm_set_enabled ( PIO pio, uint sm, bool enabled )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_set_in_pins ( PIO pio, uint sm, uint in_base );
__attribute__((weak))       void pio_sm_set_in_pins ( PIO pio, uint sm, uint in_base )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_set_jmp_pin ( PIO pio, uint sm, uint pin );
__attribute__((weak))       void pio_sm_set_jmp_pin ( PIO pio, uint sm, uint pin )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_set_out_pins ( PIO pio, uint sm, uint out_base, uint out_count );
__attribute__((weak))       void pio_sm_set_out_pins ( PIO pio, uint sm, uint out_base, uint out_count )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void pio_sm_set_pindirs_with_mask ( PIO pio, uint sm, uint32_t pin_dirs, uint32_t pin_mask );
__attribute__((weak))     void pio_sm_set_pindirs_with_mask ( PIO pio, uint sm, uint32_t pin_dirs, uint32_t pin_mask )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void pio_sm_set_pins ( PIO pio, uint sm, uint32_t pin_values );
__attribute__((weak))     void pio_sm_set_pins ( PIO pio, uint sm, uint32_t pin_values )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void pio_sm_set_pins_with_mask ( PIO pio, uint sm, uint32_t pin_values, uint32_t pin_mask );
__attribute__((weak))     void pio_sm_set_pins_with_mask ( PIO pio, uint sm, uint32_t pin_values, uint32_t pin_mask )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_set_set_pins ( PIO pio, uint sm, uint set_base, uint set_count );
__attribute__((weak))       void pio_sm_set_set_pins ( PIO pio, uint sm, uint set_base, uint set_count )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_set_sideset_pins ( PIO pio, uint sm, uint sideset_base );
__attribute__((weak))       void pio_sm_set_sideset_pins ( PIO pio, uint sm, uint sideset_base )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void pio_sm_set_wrap ( PIO pio, uint sm, uint wrap_target, uint wrap );
__attribute__((weak))       void pio_sm_set_wrap ( PIO pio, uint sm, uint wrap_target, uint wrap )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void pio_sm_unclaim ( PIO pio, uint sm );
__attribute__((weak))     void pio_sm_unclaim ( PIO pio, uint sm )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_clkdiv ( pio_sm_config *c, float div );
__attribute__((weak))       void sm_config_set_clkdiv ( pio_sm_config *c, float div )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_clkdiv_int_frac ( pio_sm_config *c, uint16_t div_int, uint8_t div_frac );
__attribute__((weak))       void sm_config_set_clkdiv_int_frac ( pio_sm_config *c, uint16_t div_int, uint8_t div_frac )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_fifo_join ( pio_sm_config *c, enum pio_fifo_join join );
__attribute__((weak))       void sm_config_set_fifo_join ( pio_sm_config *c, enum pio_fifo_join join )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_in_pin_base ( pio_sm_config *c, uint in_base );
__attribute__((weak))       void sm_config_set_in_pin_base ( pio_sm_config *c, uint in_base )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_in_pin_count ( pio_sm_config *c, uint in_count );
__attribute__((weak))       void sm_config_set_in_pin_count ( pio_sm_config *c, uint in_count )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_in_pins ( pio_sm_config *c, uint in_base );
__attribute__((weak))       void sm_config_set_in_pins ( pio_sm_config *c, uint in_base )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_in_shift ( pio_sm_config *c, bool shift_right, bool autopush, uint push_threshold );
__attribute__((weak))       void sm_config_set_in_shift ( pio_sm_config *c, bool shift_right, bool autopush, uint push_threshold )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_jmp_pin ( pio_sm_config *c, uint pin );
__attribute__((weak))       void sm_config_set_jmp_pin ( pio_sm_config *c, uint pin )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_mov_status ( pio_sm_config *c, enum pio_mov_status_type status_sel, uint status_n );
__attribute__((weak))       void sm_config_set_mov_status ( pio_sm_config *c, enum pio_mov_status_type status_sel, uint status_n )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_out_pin_base ( pio_sm_config *c, uint out_base );
__attribute__((weak))       void sm_config_set_out_pin_base ( pio_sm_config *c, uint out_base )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_out_pin_count ( pio_sm_config *c, uint out_count );
__attribute__((weak))       void sm_config_set_out_pin_count ( pio_sm_config *c, uint out_count )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_out_pins ( pio_sm_config *c, uint out_base, uint out_count );
__attribute__((weak))       void sm_config_set_out_pins ( pio_sm_config *c, uint out_base, uint out_count )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_out_shift ( pio_sm_config *c, bool shift_right, bool autopull, uint pull_threshold );
__attribute__((weak))       void sm_config_set_out_shift ( pio_sm_config *c, bool shift_right, bool autopull, uint pull_threshold )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_out_special ( pio_sm_config *c, bool sticky, bool has_enable_pin, uint enable_pin_index );
__attribute__((weak))       void sm_config_set_out_special ( pio_sm_config *c, bool sticky, bool has_enable_pin, uint enable_pin_index )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_set_pin_base ( pio_sm_config *c, uint set_base );
__attribute__((weak))       void sm_config_set_set_pin_base ( pio_sm_config *c, uint set_base )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_set_pin_count ( pio_sm_config *c, uint set_count );
__attribute__((weak))       void sm_config_set_set_pin_count ( pio_sm_config *c, uint set_count )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_set_pins ( pio_sm_config *c, uint set_base, uint set_count );
__attribute__((weak))       void sm_config_set_set_pins ( pio_sm_config *c, uint set_base, uint set_count )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_sideset ( pio_sm_config *c, uint bit_count, bool optional, bool pindirs );
__attribute__((weak))       void sm_config_set_sideset ( pio_sm_config *c, uint bit_count, bool optional, bool pindirs )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_sideset_pin_base ( pio_sm_config *c, uint sideset_base );
__attribute__((weak))       void sm_config_set_sideset_pin_base ( pio_sm_config *c, uint sideset_base )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_sideset_pins ( pio_sm_config *c, uint sideset_base );
__attribute__((weak))       void sm_config_set_sideset_pins ( pio_sm_config *c, uint sideset_base )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void sm_config_set_wrap ( pio_sm_config *c, uint wrap_target, uint wrap );
__attribute__((weak))       void sm_config_set_wrap ( pio_sm_config *c, uint wrap_target, uint wrap )
{
    assert( false && "Error : The hardware_pio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_acknowledge_irq ( uint gpio, uint32_t event_mask );
__attribute__((weak))     void gpio_acknowledge_irq ( uint gpio, uint32_t event_mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_add_raw_irq_handler ( uint gpio, irq_handler_t handler );
__attribute__((weak))       void gpio_add_raw_irq_handler ( uint gpio, irq_handler_t handler )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_add_raw_irq_handler_masked ( uint32_t gpio_mask, irq_handler_t handler );
__attribute__((weak))     void gpio_add_raw_irq_handler_masked ( uint32_t gpio_mask, irq_handler_t handler )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_add_raw_irq_handler_masked64 ( uint64_t gpio_mask, irq_handler_t handler );
__attribute__((weak))     void gpio_add_raw_irq_handler_masked64 ( uint64_t gpio_mask, irq_handler_t handler )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_add_raw_irq_handler_with_order_priority ( uint gpio, irq_handler_t handler, uint8_t order_priority );
__attribute__((weak))       void gpio_add_raw_irq_handler_with_order_priority ( uint gpio, irq_handler_t handler, uint8_t order_priority )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_add_raw_irq_handler_with_order_priority_masked ( uint32_t gpio_mask, irq_handler_t handler, uint8_t order_priority );
__attribute__((weak))     void gpio_add_raw_irq_handler_with_order_priority_masked ( uint32_t gpio_mask, irq_handler_t handler, uint8_t order_priority )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_add_raw_irq_handler_with_order_priority_masked64 ( uint64_t gpio_mask, irq_handler_t handler, uint8_t order_priority );
__attribute__((weak))     void gpio_add_raw_irq_handler_with_order_priority_masked64 ( uint64_t gpio_mask, irq_handler_t handler, uint8_t order_priority )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_assign_to_ns ( uint gpio, bool ns );
__attribute__((weak))       void gpio_assign_to_ns ( uint gpio, bool ns )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_clr_mask ( uint32_t mask );
__attribute__((weak))       void gpio_clr_mask ( uint32_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_clr_mask64 ( uint64_t mask );
__attribute__((weak))       void gpio_clr_mask64 ( uint64_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_clr_mask_n ( uint n, uint32_t mask );
__attribute__((weak))       void gpio_clr_mask_n ( uint n, uint32_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"        void gpio_debug_pins_init ( void );
__attribute__((weak))      void gpio_debug_pins_init ( void )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_deinit ( uint gpio );
__attribute__((weak))     void gpio_deinit ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_disable_pulls ( uint gpio );
__attribute__((weak))       void gpio_disable_pulls ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool gpio_get ( uint gpio );
__attribute__((weak))       bool gpio_get ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint32_t gpio_get_all ( void );
__attribute__((weak))       uint32_t gpio_get_all ( void )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint64_t gpio_get_all64 ( void );
__attribute__((weak))       uint64_t gpio_get_all64 ( void )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint gpio_get_dir ( uint gpio );
__attribute__((weak))       uint gpio_get_dir ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       enum gpio_drive_strength gpio_get_drive_strength ( uint gpio );
__attribute__((weak))     enum gpio_drive_strength gpio_get_drive_strength ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       gpio_function_t gpio_get_function ( uint gpio );
__attribute__((weak))     gpio_function_t gpio_get_function ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         uint32_t gpio_get_irq_event_mask ( uint gpio );
__attribute__((weak))       uint32_t gpio_get_irq_event_mask ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool gpio_get_out_level ( uint gpio );
__attribute__((weak))       bool gpio_get_out_level ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       enum gpio_slew_rate gpio_get_slew_rate ( uint gpio );
__attribute__((weak))     enum gpio_slew_rate gpio_get_slew_rate ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_init ( uint gpio );
__attribute__((weak))     void gpio_init ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_init_mask ( uint gpio_mask );
__attribute__((weak))     void gpio_init_mask ( uint gpio_mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool gpio_is_dir_out ( uint gpio );
__attribute__((weak))       bool gpio_is_dir_out ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       bool gpio_is_input_hysteresis_enabled ( uint gpio );
__attribute__((weak))     bool gpio_is_input_hysteresis_enabled ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool gpio_is_pulled_down ( uint gpio );
__attribute__((weak))       bool gpio_is_pulled_down ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool gpio_is_pulled_up ( uint gpio );
__attribute__((weak))       bool gpio_is_pulled_up ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_pull_down ( uint gpio );
__attribute__((weak))       void gpio_pull_down ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_pull_up ( uint gpio );
__attribute__((weak))       void gpio_pull_up ( uint gpio )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_put ( uint gpio, bool value );
__attribute__((weak))       void gpio_put ( uint gpio, bool value )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_put_all ( uint32_t value );
__attribute__((weak))       void gpio_put_all ( uint32_t value )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_put_all64 ( uint64_t value );
__attribute__((weak))       void gpio_put_all64 ( uint64_t value )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_put_masked ( uint32_t mask, uint32_t value );
__attribute__((weak))       void gpio_put_masked ( uint32_t mask, uint32_t value )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_put_masked64 ( uint64_t mask, uint64_t value );
__attribute__((weak))       void gpio_put_masked64 ( uint64_t mask, uint64_t value )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_put_masked_n ( uint n, uint32_t mask, uint32_t value );
__attribute__((weak))       void gpio_put_masked_n ( uint n, uint32_t mask, uint32_t value )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_remove_raw_irq_handler ( uint gpio, irq_handler_t handler );
__attribute__((weak))       void gpio_remove_raw_irq_handler ( uint gpio, irq_handler_t handler )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_remove_raw_irq_handler_masked ( uint32_t gpio_mask, irq_handler_t handler );
__attribute__((weak))     void gpio_remove_raw_irq_handler_masked ( uint32_t gpio_mask, irq_handler_t handler )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_remove_raw_irq_handler_masked64 ( uint64_t gpio_mask, irq_handler_t handler );
__attribute__((weak))     void gpio_remove_raw_irq_handler_masked64 ( uint64_t gpio_mask, irq_handler_t handler )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_set_dir ( uint gpio, bool out );
__attribute__((weak))       void gpio_set_dir ( uint gpio, bool out )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_set_dir_all_bits ( uint32_t values );
__attribute__((weak))       void gpio_set_dir_all_bits ( uint32_t values )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_set_dir_all_bits64 ( uint64_t values );
__attribute__((weak))       void gpio_set_dir_all_bits64 ( uint64_t values )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_set_dir_in_masked ( uint32_t mask );
__attribute__((weak))       void gpio_set_dir_in_masked ( uint32_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_set_dir_in_masked64 ( uint64_t mask );
__attribute__((weak))       void gpio_set_dir_in_masked64 ( uint64_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_set_dir_masked ( uint32_t mask, uint32_t value );
__attribute__((weak))       void gpio_set_dir_masked ( uint32_t mask, uint32_t value )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_set_dir_masked64 ( uint64_t mask, uint64_t value );
__attribute__((weak))       void gpio_set_dir_masked64 ( uint64_t mask, uint64_t value )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_set_dir_out_masked ( uint32_t mask );
__attribute__((weak))       void gpio_set_dir_out_masked ( uint32_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_set_dir_out_masked64 ( uint64_t mask );
__attribute__((weak))       void gpio_set_dir_out_masked64 ( uint64_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_dormant_irq_enabled ( uint gpio, uint32_t event_mask, bool enabled );
__attribute__((weak))     void gpio_set_dormant_irq_enabled ( uint gpio, uint32_t event_mask, bool enabled )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_drive_strength ( uint gpio, enum gpio_drive_strength drive );
__attribute__((weak))     void gpio_set_drive_strength ( uint gpio, enum gpio_drive_strength drive )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_function ( uint gpio, gpio_function_t fn );
__attribute__((weak))     void gpio_set_function ( uint gpio, gpio_function_t fn )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_function_masked ( uint32_t gpio_mask, gpio_function_t fn );
__attribute__((weak))     void gpio_set_function_masked ( uint32_t gpio_mask, gpio_function_t fn )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_function_masked64 ( uint64_t gpio_mask, gpio_function_t fn );
__attribute__((weak))     void gpio_set_function_masked64 ( uint64_t gpio_mask, gpio_function_t fn )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_inover ( uint gpio, uint value );
__attribute__((weak))     void gpio_set_inover ( uint gpio, uint value )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_input_enabled ( uint gpio, bool enabled );
__attribute__((weak))     void gpio_set_input_enabled ( uint gpio, bool enabled )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_input_hysteresis_enabled ( uint gpio, bool enabled );
__attribute__((weak))     void gpio_set_input_hysteresis_enabled ( uint gpio, bool enabled )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_irq_callback ( gpio_irq_callback_t callback );
__attribute__((weak))     void gpio_set_irq_callback ( gpio_irq_callback_t callback )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_irq_enabled ( uint gpio, uint32_t event_mask, bool enabled );
__attribute__((weak))     void gpio_set_irq_enabled ( uint gpio, uint32_t event_mask, bool enabled )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_irq_enabled_with_callback ( uint gpio, uint32_t event_mask, bool enabled, gpio_irq_callback_t callback );
__attribute__((weak))     void gpio_set_irq_enabled_with_callback ( uint gpio, uint32_t event_mask, bool enabled, gpio_irq_callback_t callback )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_irqover ( uint gpio, uint value );
__attribute__((weak))     void gpio_set_irqover ( uint gpio, uint value )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_set_mask ( uint32_t mask );
__attribute__((weak))       void gpio_set_mask ( uint32_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_set_mask64 ( uint64_t mask );
__attribute__((weak))       void gpio_set_mask64 ( uint64_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_set_mask_n ( uint n, uint32_t mask );
__attribute__((weak))       void gpio_set_mask_n ( uint n, uint32_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_oeover ( uint gpio, uint value );
__attribute__((weak))     void gpio_set_oeover ( uint gpio, uint value )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_outover ( uint gpio, uint value );
__attribute__((weak))     void gpio_set_outover ( uint gpio, uint value )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_pulls ( uint gpio, bool up, bool down );
__attribute__((weak))     void gpio_set_pulls ( uint gpio, bool up, bool down )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void gpio_set_slew_rate ( uint gpio, enum gpio_slew_rate slew );
__attribute__((weak))     void gpio_set_slew_rate ( uint gpio, enum gpio_slew_rate slew )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_xor_mask ( uint32_t mask );
__attribute__((weak))       void gpio_xor_mask ( uint32_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_xor_mask64 ( uint64_t mask );
__attribute__((weak))       void gpio_xor_mask64 ( uint64_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void gpio_xor_mask_n ( uint n, uint32_t mask );
__attribute__((weak))       void gpio_xor_mask_n ( uint n, uint32_t mask )
{
    assert( false && "Error : The hardware_gpio library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       bool check_sys_clock_hz ( uint32_t freq_hz, uint *vco_freq_out, uint *post_div1_out, uint *post_div2_out );
__attribute__((weak))     bool check_sys_clock_hz ( uint32_t freq_hz, uint *vco_freq_out, uint *post_div1_out, uint *post_div2_out )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       bool check_sys_clock_khz ( uint32_t freq_khz, uint *vco_freq_out, uint *post_div1_out, uint *post_div2_out );
__attribute__((weak))     bool check_sys_clock_khz ( uint32_t freq_khz, uint *vco_freq_out, uint *post_div1_out, uint *post_div2_out )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       bool clock_configure ( clock_handle_t clock, uint32_t src, uint32_t auxsrc, uint32_t src_freq, uint32_t freq );
__attribute__((weak))     bool clock_configure ( clock_handle_t clock, uint32_t src, uint32_t auxsrc, uint32_t src_freq, uint32_t freq )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       bool clock_configure_gpin ( clock_handle_t clock, uint gpio, uint32_t src_freq, uint32_t freq );
__attribute__((weak))     bool clock_configure_gpin ( clock_handle_t clock, uint gpio, uint32_t src_freq, uint32_t freq )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void clock_configure_int_divider ( clock_handle_t clock, uint32_t src, uint32_t auxsrc, uint32_t src_freq, uint32_t int_divider );
__attribute__((weak))     void clock_configure_int_divider ( clock_handle_t clock, uint32_t src, uint32_t auxsrc, uint32_t src_freq, uint32_t int_divider )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void clock_configure_undivided ( clock_handle_t clock, uint32_t src, uint32_t auxsrc, uint32_t src_freq );
__attribute__((weak))     void clock_configure_undivided ( clock_handle_t clock, uint32_t src, uint32_t auxsrc, uint32_t src_freq )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       uint32_t clock_get_hz ( clock_handle_t clock );
__attribute__((weak))     uint32_t clock_get_hz ( clock_handle_t clock )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         void clock_gpio_init ( uint gpio, uint src, float div );
__attribute__((weak))       void clock_gpio_init ( uint gpio, uint src, float div )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void clock_gpio_init_int_frac ( uint gpio, uint src, uint32_t div_int, uint8_t div_frac );
__attribute__((weak))     void clock_gpio_init_int_frac ( uint gpio, uint src, uint32_t div_int, uint8_t div_frac )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void clock_set_reported_hz ( clock_handle_t clock, uint hz );
__attribute__((weak))     void clock_set_reported_hz ( clock_handle_t clock, uint hz )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void clock_stop ( clock_handle_t clock );
__attribute__((weak))     void clock_stop ( clock_handle_t clock )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void clocks_enable_resus ( resus_callback_t resus_callback );
__attribute__((weak))     void clocks_enable_resus ( resus_callback_t resus_callback )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       uint32_t frequency_count_khz ( uint src );
__attribute__((weak))     uint32_t frequency_count_khz ( uint src )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         float frequency_count_mhz ( uint src );
__attribute__((weak))       float frequency_count_mhz ( uint src )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void set_sys_clock_48mhz ( void );
__attribute__((weak))     void set_sys_clock_48mhz ( void )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool set_sys_clock_hz ( uint32_t freq_hz, bool required );
__attribute__((weak))       bool set_sys_clock_hz ( uint32_t freq_hz, bool required )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"         bool set_sys_clock_khz ( uint32_t freq_khz, bool required );
__attribute__((weak))       bool set_sys_clock_khz ( uint32_t freq_khz, bool required )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}
// --------------------------------------------------
extern "C"       void set_sys_clock_pll ( uint32_t vco_freq, uint post_div1, uint post_div2 );
__attribute__((weak))     void set_sys_clock_pll ( uint32_t vco_freq, uint post_div1, uint post_div2 )
{
    assert( false && "Error : The hardware_clocks library is missing in the link phase.");
}

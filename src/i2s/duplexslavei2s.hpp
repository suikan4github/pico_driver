#ifndef PICO_DRIVER_SRC_I2S_DUPLEXSLAVEI2S_HPP_
#define PICO_DRIVER_SRC_I2S_DUPLEXSLAVEI2S_HPP_

#if __has_include(<hardware/pio.h>)
#include "hardware/pio.h"
#else
// Alternate definition for unit test.
#define duplex_slave_i2s_program_get_default_config(config) 1
#define clk_sys 51
#endif  //__has_include(<hardware/i2c.h>)

#if __has_include(<gmock/gmock.h>)
#include <gmock/gmock.h>
#endif

#include "sdkwrapper.hpp"

namespace rpp_driver {
/**
 * @brief Duplex Slave I2S controller class.
 * @details
 * This class support the duplex communication of the I2S on the PIO port of the
 * RP2040/2350 SoC MCU.
 *
 * The timing signal (BCLK and WS) of the I2S must be provided from the external
 * device. This class support up to 192kHz Fs if the MCU system clock is higher
 * than 120MHz.
 *
 * The I2S pins can be mapped on the GPIO. This mapping is based on the
 * pin_base parameter of the constructors.
 *
 * The pin_base parameter of the constructors is the first pin of 4 I2S signals.
 * The signals must be consecutive on the GPIO pins as like :
 * -# SDOUT
 * -# SDIN
 * -# BCLK
 * -# WS
 *
 * To start and stop the I2S transfer, call the Start() and the Stop() member
 * functions respectively.
 *
 * The audio sample in and out are through the GetFIFOBlocking() and the
 * PutFIFOBlocking() member function, respectively. These are blocking function.
 * That mean, program will wait until the data is ready, or FIFO has room for
 * data.
 *
 * This class assumes polling based data transfer instead of interrupt / DMA
 * based data transfer.
 */
class DuplexSlaveI2s {
 private:
  ::rpp_driver::SdkWrapper &sdk_;
  PIO pio_;
  const uint32_t sm_;    // State machine ( 0..3 )
  const uint pin_base_;  // first GPIO pin number of the I2S signal.

 public:
  DuplexSlaveI2s(/* args */) = delete;
  /**
   * @brief Construct a new Duplex Slave I 2 S object
   *
   * @param sdk SDK wrapper class injection.
   * @param pio PIO to use.
   * @param pin_base The GPIO pin number of SDOUT signal.
   * @details
   * The state machine number is not specified in this constructor.
   * Internally, the state machine will be allocate from the unused one.
   *
   */
  DuplexSlaveI2s(::rpp_driver::SdkWrapper &sdk, PIO pio, uint pin_base);
  /**
   * @brief Construct a new Duplex Slave I 2 S object
   *
   * @param sdk SDK wrapper class injection.
   * @param pio PIO to use.
   * @param sm State machine to use.
   * @param pin_base The GPIO pin number of SDOUT signal.
   * @details
   */
  DuplexSlaveI2s(::rpp_driver::SdkWrapper &sdk, PIO pio, uint32_t sm,
                 uint pin_base);

  /**
   * @brief Stop the state machine and make FIFO empty.
   */
  ~DuplexSlaveI2s();

  /**
   * @brief Initialize the I2S port, and run.
   * @details
   * Assign the GPIO, configure them, load the PIO program, configure the state
   * machine and run.
   */
  virtual void Start();
  /**
   * @brief Stop the I2S port and disable the PIO state machine in use.
   * @details
   * Make FIFOs empty.
   *
   */
  virtual void Stop();
  /**
   * @brief Get the State Machine object
   *
   * @return uint32_t The number of the state machine which is claimed.
   * @details
   * This is convenient if the state machine is assigned internally.
   */
  virtual uint32_t GetStateMachine();
  /**
   * @brief Get one audio data from RX FIFO.
   *
   * @return int32_t An audio data.
   * @details
   * To get one stere sample, call this member function twice. The left data
   * will be given and then, right data.
   *
   * This function is blocking. That mean, program will wait until the data has
   * been received.
   */
  virtual int32_t GetFIFOBlocking();
  /**
   * @brief Put one audio data to TX FIFO.
   *
   * @param value An audio data to send.
   * To put one stere sample, call this member function twice. The left data
   * must be put and then, right data.
   *
   */
  virtual void PutFIFOBlocking(int32_t value);
};

#if __has_include(<gmock/gmock.h>)

class MockDuplexSlaveI2s : public DuplexSlaveI2s {
 public:
  MOCK_METHOD0(GetStateMachine, uint32_t(void));
  MOCK_METHOD0(Start, void(void));
  MOCK_METHOD0(Stop, void(void));
  MOCK_METHOD1(PutFIFOBlocking, void(int32_t value));
  MOCK_METHOD0(GetFIFOBlocking, int32_t());
};
#endif  // __has_include(<gmock/gmock.h>)

}  // namespace rpp_driver

#endif  // PICO_DRIVER_SRC_I2S_DUPLEXSLAVEI2S_HPP_
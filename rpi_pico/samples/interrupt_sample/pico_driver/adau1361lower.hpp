/**
 * @file adau1361.hpp
 *
 * @date 2018/05/11
 * @author: Seiichi "Suikan" Horie
 */

#ifndef _ADAU1361LOWER_HPP_
#define _ADAU1361LOWER_HPP_

#include "i2cmaster.hpp"
/**
 * @brief lower part of the ADAU1361 CODEC.
 * @details
 * To initialize codec, follow the sequence
 * @li InitializeCore()
 * @li DisablePLL()
 * @li ConfigurePll()
 * @li WaitPllLock()
 * @li EnableCore()
 * @li ConfigureSRC()
 * @li InitializeRegisters()
 * @li ConfigureSignalPath()
 *
 * After these initialization, the ADC, DAC, Mixer and ISC are alive.
 * Note, all volumes are muted.
 */
class Adau1361Lower {
 public:
  Adau1361Lower(pico_driver::I2CMasterInterface& controller,
                unsigned int i2c_device_addr)
      : i2c_(controller), device_addr_(i2c_device_addr) {};
  Adau1361Lower() = delete;
  virtual ~Adau1361Lower() {}
  /**
   *  Service function for the ADAu1361 board implementer.
   *
   * \brief send one command to ADAU1361.
   * \param command command data array. It have to have register addess of
   * ADAU1361 in first two bytes.
   * \param size number of bytes in the command,
   * including the regsiter address.
   * \details Send one complete command to
   * ADAU3161 by I2C. In the typical case, the command length is 3.
   * \li command[0] : USB of the register address. 0x40.
   * \li command[1] : LSB of the register address.
   * \li command[2] : Value to right the register.
   */
  virtual void SendCommand(const uint8_t command[], int size);
  /**
   * \brief send one command to ADAU1361.
   * \param table command table. All commands are stored in one row. Each row
   * has only 1 byte data after reg address.
   * \param rows number of the rows in
   * the table.
   * \details Service function for the ADAu1361 board implementer.
   *
   * Send a list of command to ADAU1361. All commands has 3 bytes length.
   * That mean, after two byte register address, only 1 byte data pay load is
   * allowed. Commadns are sent by I2C
   */
  virtual void SendCommandTable(const uint8_t table[][3], int rows);

  /**
   * \brief Check whether I2C device exist or not.
   * \return true if device exist. false if not exist.
   */
  virtual bool IsI2CDeivceExisting();

  /**
   * @brief Reset the core for fresh procedure.
   * @details
   * Must call at first when initialize codec.
   */
  virtual void InitializeCore();

  /**
   * @brief stop PLL to re-proguram.
   * @details
   * Must call after InitializeCore().
   */
  virtual void DisablePLL();

  /**
   * \brief wait until PLL locks.
   * \details
   *   Service function for the ADAu1361 board implementer.
   *
   *   Read the PLL status and repeat it until the PLL locks.
   */

  virtual void WaitPllLock(void);

  /**
   * @brief Initialize the PLL with given fs and master clock.
   * @param fs Sampling Frequency [Hz].
   * @param master_clock Master Clock innput to the CODEC [Hz].
   * @details
   * At first, initialize the PLL based on the given fst and master clock.
   * Then, setup the Converter sampling rate.
   *
   * Must call after DisablePLL().
   */
  virtual void ConfigurePll(unsigned int fs, unsigned int master_clock);

  /**
   * @brief Initialize the SRC with given fs clock.
   * @details
   * Must call after EnableCore().
   */
  virtual void ConfigureSRC(unsigned int fs);

  /**
   * @brief Initialize the core part of the ADAU1361A.
   * @details
   * Must call after ConfigurePLL(), followings WailtPLLLock().
   */
  virtual void EnableCore();

  /**
   * @brief Initialize registers for the chip operation.
   * @details This is is board independent initialization.
   *
   *  The, gain, ADC, Mixer and I2S are set in this routine.
   * Clock must working well before calling this routine.
   *
   * This function clean-up.
   * Need to call after ConfigureSRC() and before InitializeSignalPath()
   */
  virtual void InitializeRegisters();

  /**
   * @brief Initialize registers for the signal routing.
   * @details
   * This is baord dependent initialization.
   *
   * Need to call after InitializeRegisters().
   */
  virtual void ConfigureSignalPath();

  /**
   * \brief Set the line input gain and enable the relevant mixer.
   * \param left_gain Gain by dB. [6 .. -12],  The gain value outside of the
   * acceptable range will be saturated. \param right_gain Gain by dB. [6 ..
   * -12], The gain value outside of the acceptable range will be saturated.
   * \param mute set true to mute
   * \details
   *   This gain control function uses the single-end
   * negative input only. Other input signal of the line in like positive
   * signal or diff signal are killed.
   *
   *   Other input line like aux are not killed. To kill it, user have to mute
   * them explicitly.
   */
  virtual void SetLineInputGain(float left_gain, float right_gain,
                                bool mute = false);
  /**
   * \brief Set the aux input gain and enable the relevant mixer.
   * \param left_gain Gain by dB. [6 .. -12], The gain value outside of the
   * acceptable range will be saturated. \param right_gain Gain by dB. [6 ..
   * -12], The gain value outside of the acceptable range will be saturated.
   * \param mute set true to mute
   * \details
   *   Other input lines are not killed. To kill it, user have to mute them
   * explicitly.
   */
  virtual void SetAuxInputGain(float left_gain, float right_gain,
                               bool mute = false);

  /**
   * \brief Set the line output gain and enable the relevant mixer.
   * \param left_gain Gain by dB. [6 .. -12], The gain value outside of the
   * acceptable range will be saturated. \param right_gain Gain by dB. [6 ..
   * -12], The gain value outside of the acceptable range will be saturated.
   * \param mute set true to mute
   * \details
   *   Other output lines are not killed. To kill it, user have to mute them
   * explicitly.
   *
   */
  virtual void SetLineOutputGain(float left_gain, float right_gain,
                                 bool mute = false);

  /**
   * \brief Set the headphone output gain and enable the relevant mixer.
   * \param left_gain Gain by dB. [6 .. -12], The gain value outside of the
   * acceptable range will be saturated. \param right_gain Gain by dB. [6 ..
   * -12], The gain value outside of the acceptable range will be saturated.
   * \param mute set true to mute
   * \details
   *   Other out line like line in are not killed. To kill it, user have to
   * mute them explicitly.
   */
  virtual void SetHpOutputGain(float left_gain, float right_gain,
                               bool mute = false);

 protected:
  pico_driver::I2CMasterInterface& i2c_;
  const unsigned int device_addr_;
};

#if __has_include(<gmock/gmock.h>)

class MockAdau1361Lower : public Adau1361Lower {
 public:
  explicit MockAdau1361Lower(pico_driver::I2CMasterInterface& controller)
      : Adau1361Lower(controller, 31) {};
  MOCK_METHOD2(SendCommand, void(const uint8_t command[], int size));
  MOCK_METHOD2(SendCommandTable, void(const uint8_t table[][3], int rows));
  MOCK_METHOD0(IsI2CDeivceExisting, bool());
  MOCK_METHOD0(InitializeCore, void());
  MOCK_METHOD0(DisablePLL, void());
  MOCK_METHOD0(WaitPllLock, void());
  MOCK_METHOD2(ConfigurePll, void(unsigned int fs, unsigned int master_clock));
  MOCK_METHOD1(ConfigureSRC, void(unsigned int fs));
  MOCK_METHOD0(EnableCore, void());
  MOCK_METHOD0(InitializeRegisters, void());
  MOCK_METHOD0(ConfigureSignalPath, void());
  MOCK_METHOD3(SetLineInputGain,
               void(float left_gain, float right_gain, bool mute));
  MOCK_METHOD3(SetAuxInputGain,
               void(float left_gain, float right_gain, bool mute));
  MOCK_METHOD3(SetLineOutputGain,
               void(float left_gain, float right_gain, bool mute));
  MOCK_METHOD3(SetHpOutputGain,
               void(float left_gain, float right_gain, bool mute));
};
#endif  //  __has_include(<gmock/gmock>)

#endif /* _ADAU1361LOWER_HPP_ */
/**
 * @file adau1361.hpp
 *
 * @date 2018/05/11
 * @author: Seiichi "Suikan" Horie
 */

#ifndef _ADAU1361LOWER_HPP_
#define _ADAU1361LOWER_HPP_

#include "i2cmaster.hpp"

class Adau1361Lower {
 public:
  Adau1361Lower(I2CMasterInterface& controller, unsigned int i2c_device_addr)
      : i2c_(controller), device_addr_(i2c_device_addr) {};
  Adau1361Lower() = delete;
  virtual ~Adau1361Lower() {}
  /**
   *  Service function for the ADAu1361 board implementer.
   *
   * \brief send one command to ADAU1361.
   * \param command command data array. It have to have register addess of
   * ADAU1361 in first two bytes. \param size number of bytes in the command,
   * including the regsiter address. \details Send one complete command to
   * ADAU3161 by I2C. In the typical case, the command length is 3. \li
   * command[0] : USB of the register address. 0x40. \li command[1] : LSB of
   * the register address. \li command[2] : Value to right the register.
   */
  virtual void SendCommand(const uint8_t command[], int size);
  /**
   * \brief send one command to ADAU1361.
   * \param table command table. All commands are stored in one row. Each row
   * has only 1 byte data after reg address. \param rows number of the rows in
   * the table. \details Service function for the ADAu1361 board implementer.
   *
   *   Send a list of command to ADAU1361. All commands has 3 bytes length.
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
   */
  virtual void InitializeCore();

  /**
   * @brief stop PLL to re-proguram.
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
   */
  virtual void ConfigurePll(unsigned int fs, unsigned int master_clock);

  /**
   * @brief Initialize the SRC with given fs clock.
   * @details
   * This routine must be called after :
   * @li ConfigurePll()
   * @li WaitPllLock()
   * @li InitializeCore.
   *
   * And then
   *
   * @li ConfigurePll()
   */
  virtual void ConfigureSRC(unsigned int fs);

  /**
   * @brief Initialize the core part of the ADAU1361A.
   */
  virtual void EnableCore();

  /**
   * @brief Initialize registers for the chip operation.
   * @details This is is board independent initialization.
   *
   * Need to call before InitializeSignalPath()
   */
  virtual void InitializeRegisters();

  /**
   * @brief Initialize registers for the signal routing.
   * @details THis is baord dependent initialization.
   *
   * Need to call after InitializeRegisters.
   */
  virtual void ConfigureSignalPath();

  /**
   * \brief Set the line input gain and enable the relevant mixer.
   * \param left_gain Gain by dB. [6 .. -12],  The gain value outside of the
   * acceptable range will be saturated. \param right_gain Gain by dB. [6 ..
   * -12], The gain value outside of the acceptable range will be saturated.
   * \param mute set true to mute
   * \details
   *   As same as start(), this gain control function uses the single-end
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

 private:
  I2CMasterInterface& i2c_;
  const unsigned int device_addr_;
};

#endif /* _ADAU1361LOWER_HPP_ */
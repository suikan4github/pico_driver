/**
 * @file adau1361.hpp
 *
 * @date 2018/05/11
 * @author: Seiichi "Suikan" Horie
 */

#ifndef MURASAKI_TP_ADAU1361_HPP_
#define MURASAKI_TP_ADAU1361_HPP_

#include <i2cmasterinterface.hpp>

#include "adau1361lower.hpp"
namespace codec {

class Adau1361 {
 public:
  enum CodecChannel { LineInput, AuxInput, LineOutput, HeadphoneOutput };

  /**
   * \brief constructor.
   * \param fs Sampling frequency[Hz]
   * @param master_clock Input master clock frequency to the MCLK pin[Hz]
   * \details
   *   initialize the internal variables.
   *   This constructor assumes the codec receive a master clock from outside.
   * And output the I2C clocks as clock master.
   *
   *   The fs parameter is the sampling frequency of the CODEC in Hz. This
   * parameter is limited as one of the following :
   *   @li 24000
   *   @li 32000
   *   @li 48000
   *   @li 96000
   *   @li 22050
   *   @li 44100
   *   @li 88200
   *
   *   The master_clock parameter is the MCLK input to the ADAU1361 in Hz.
   *   This parameter must be one of followings :
   *   @li  8000000
   *   @li 12000000
   *   @li 13000000
   *   @li 14400000
   *   @li 19200000
   *   @li 19680000
   *   @li 19800000
   *   @li 24000000
   *   @li 26000000
   *   @li 27000000
   *   @li 12288000
   *   @li 24576000
   *
   *   Note : Due to the limitation of the MCLOCK of hardware and PLL,
   *   only 8, 12, 13, 14.4, 12.288, 19.2MHz are tested
   *
   *   The analog signals are routed as following :
   *   @li Line In  : LINN/RINN single ended.
   *   @li Aux In : LAUX/RAUX input
   *   @li LINE out : LOUTP/ROUTP single ended
   *   @li HP out   : LHP/RHP
   */
  explicit Adau1361(unsigned int fs, unsigned int master_clock,
                    Adau1361Lower& adau1361_lower);
  Adau1361() = delete;
  /**
   * \brief Set up the ADAU1361 codec,  and then, start the codec.
   * \details
   *   This method starts the ADAU1361 AD/DA conversion and I2S communication.
   *
   *   The line in is configured to use the Single-End negative input. This is
   * funny but ADAU1361 datasheet specifies to do it. The positive in and diff
   * in are killed. All biases are set as "normal".
   *
   *   The CODEC is configured as master mode. That mean, bclk and WS are
   * given from ADAU1361 to the micro processor.
   *
   *   At initial state, ADAU1361 is set as :
   *   @li All input and output channels are set as 0.0dB and muted.
   */
  virtual void Start(void);
  /**
   * @brief Set channel gain
   * @param channel CODEC input output channels like line-in, line-out,
   * aux-in, headphone-out
   * @param left_gain Gain by dB. [6 .. -12],  The gain value outside of the
   * acceptable range will be saturated.
   * @param right_gain Gain by dB. [6 .. -12],  The gain value outside of the
   * acceptable range will be saturated.
   */
  virtual void SetGain(CodecChannel channel, float left_gain, float right_gain);

  /**
   * @brief Mute the specific channel.
   * @param channel Channel to mute on / off
   * @param mute On if true, off if false.
   */
  virtual void Mute(CodecChannel channel, bool mute = true);

 private:
  const unsigned int fs_;
  const unsigned int master_clock_;
  Adau1361Lower& adau1361_lower_;

  float line_input_left_gain_;
  float line_input_right_gain_;
  float aux_input_left_gain_;
  float aux_input_right_gain_;
  float line_output_left_gain_;
  float line_output_right_gain_;
  float hp_output_left_gain_;  // headphone
  float hp_output_right_gain_;

  bool line_input_mute_;
  bool aux_input_mute_;
  bool line_output_mute_;
  bool hp_output_mute_;  // headphone
};
}  // namespace codec

#endif /* MURASAKI_TP_ADAU1361_HPP_ */
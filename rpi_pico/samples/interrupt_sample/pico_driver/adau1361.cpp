/*
 * adau1361.cpp
 *
 *  Created on: 2018/05/11
 *      Author: Seiichi "Suikan" Horie
 */

#include "adau1361.hpp"

#include <assert.h>

#include "i2cmasterinterface.hpp"

// Macro for easy-to-read
#define CODEC_SYSLOG(fmt, ...) \
  //  MURASAKI_SYSLOG(this, kfaAudioCodec, kseDebug, fmt, ##__VA_ARGS__)

// Core clock setting
static const uint8_t init_core[] = {
    0x40, 0x00, 0x00};  // R0:Clock control. Core clock disabled. PLL off.

// PLL Disable.
// R1 : Must write 6 byte at once.
static const uint8_t disable_pll[] = {0x40, 0x02, 0x00, 0xFD,
                                      0x00, 0x0C, 0x10, 0x00};

// Set UMB_ADAU1361A. No mono output, No cross channel Mix, No analog path
// through.
static const uint8_t config_UMB_ADAU1361A[][3] = {
    // Configuration for UMB-ADAU1361-A http://dsps.shop-pro.jp/?pid=82798273
    {0x40, 0x0a, 0x0B},  // R4: Rec Mixer Left 0,  Mixer enable, LINNG 0dB
    {0x40, 0x0c, 0x0B},  // R6: Rec Mixer Right 0, Mixer enable, RINNG 0dB
    {0x40, 0x15,
     0x01},  // R15:Serial Port control, Set code as Master mode I2S.
    {0x40, 0x19,
     0x63},  // R19:ADC Control. Enable ADC, Both Cannel ADC on, HPF on
    {0x40, 0x29,
     0x03},  // R35:Left Right Play back enable. Play back power Management
    {0x40, 0x2a, 0x03},  // R36:DAC Control 0. Enable DAC. Both channels on.
    {0x40, 0x1c, 0x21},  // R22:MIXER 3, Left DAC Mixer (set L DAC to L Mixer )
    {0x40, 0x1e, 0x41},  // R24:MIXER 4, Right DAC Mixer (set R DAC to R Mixer )
    {0x40, 0x20, 0x03},  // R26:MIXER 5, Left out mixer. L out MIX5G3 and enable
    {0x40, 0x21,
     0x09},  // R27:MIXER 6, Right out mixer. R out MIX6G4 and enable.
};

// Set non clock registers as default
static const uint8_t config_Adau1361[][3] = {
    // R0,1, are set by init_freq_xxx table
    {0x40, 0x08, 0x00},  // R2: Digital Mic
    {0x40, 0x09, 0x00},  // R3: Rec Power Management
    {0x40, 0x0a, 0x00},  // R4: Rec Mixer Left 0
    {0x40, 0x0b, 0x00},  // R5: Rec Mixer Left 1
    {0x40, 0x0c, 0x00},  // R6: Rec Mixer Right 0
    {0x40, 0x0d, 0x00},  // R7: Rec Mixer Right 1
    {0x40, 0x0e, 0x00},  // R8: Left diff input vol
    {0x40, 0x0f, 0x00},  // R9: Right diff input vol
    {0x40, 0x10, 0x00},  // R10: Rec mic bias
    {0x40, 0x11, 0x00},  // R11: ALC0
    {0x40, 0x12, 0x00},  // R12: ALC1
    {0x40, 0x13, 0x00},  // R13: ALC2
    {0x40, 0x14, 0x00},  // R14: ALC3
    {0x40, 0x15, 0x00},  // R15: Serial Port 0
    {0x40, 0x16, 0x00},  // R16: Serial Port 1
    // R17 is set by config_src_xx table
    {0x40, 0x18, 0x00},  // R18: Converter 1
    {0x40, 0x19, 0x10},  // R19:ADC Control.
    {0x40, 0x1a, 0x00},  // R20: Left digital volume
    {0x40, 0x1b, 0x00},  // R21: Rignt digital volume
    {0x40, 0x1c, 0x00},  // R22: Play Mixer Left 0
    {0x40, 0x1d, 0x00},  // R23: Play Mixer Left 1
    {0x40, 0x1e, 0x00},  // R24: Play Mixer Right 0
    {0x40, 0x1f, 0x00},  // R25: Play Mixer Right 1
    {0x40, 0x20, 0x00},  // R26: Play L/R mixer left
    {0x40, 0x21, 0x00},  // R27: Play L/R mixer right
    {0x40, 0x22, 0x00},  // R28: Play L/R mixer monot
    {0x40, 0x23, 0x03},  // R29: Play HP Left vol : Mute, Enable
    {0x40, 0x24, 0x03},  // R30: Play HP Right vol : Mute, HP Mode
    {0x40, 0x25, 0x02},  // R31: Line output Left vol : Mute, Line out mode
    {0x40, 0x26, 0x02},  // R32: Line output Right vol : Mute, Line out mode
    {0x40, 0x27, 0x02},  // R33: Play Mono output
    {0x40, 0x28, 0x00},  // R34: Pop surpress
    {0x40, 0x29, 0x00},  // R35: Play Power Management
    {0x40, 0x2a, 0x00},  // R36: DAC Control 0
    {0x40, 0x2b, 0x00},  // R37: DAC Control 1
    {0x40, 0x2c, 0x00},  // R38: DAC control 2
    {0x40, 0x2d, 0xaa},  // R39: Seial port Pad
    {0x40, 0x2f, 0xaa},  // R40: Control Pad 1
    {0x40, 0x30, 0x00},  // R41: Control Pad 2
    {0x40, 0x31, 0x08},  // R42: Jack detect
    {0x40, 0x36, 0x03}   // R67: Dejitter control
};

void Adau1361::Start(void) {
  CODEC_SYSLOG("Enter.")

  // Check if target device exist.
  // send no payload. Just enquire address.
  assert(adau1361_lower_.DoesI2CDeivceExist());

  // then, start of configuration as register address order
  adau1361_lower_.SendCommand(init_core, sizeof(init_core));
  // And then, stop PLL explicitly.
  adau1361_lower_.SendCommand(disable_pll, sizeof(disable_pll));
  // Now, start PLL again as desired frequency.
  adau1361_lower_.ConfigurePll();

  // Set all registers.
  adau1361_lower_.SendCommandTable(
      config_Adau1361,
      sizeof(config_Adau1361) / 3);  // init Adau1361 as default state.

  // Set certain signal pass. If it doen't fit to your system, override it by
  // adau1361_lower_.SendCommand()
  adau1361_lower_.SendCommandTable(
      config_UMB_ADAU1361A,
      sizeof(config_UMB_ADAU1361A) / 3);  // init UMB-ADAU1361 as default state.

  // Before calling mute() function, set the gain as appropriate value.
  // The value is not problem if it is in the appropriate range.
  // This value is not be able to set by SetGain() member function, because at
  // this moment, Mute is not clealy specified.
  line_input_left_gain_ = 0.0;
  line_input_right_gain_ = 0.0;
  aux_input_left_gain_ = 0.0;
  aux_input_right_gain_ = 0.0;
  line_output_left_gain_ = 0.0;
  line_output_right_gain_ = 0.0;
  hp_output_left_gain_ = 0.0;  // headphone
  hp_output_right_gain_ = 0.0;

  // Mute all channels.
  Mute(LineInput);
  Mute(AuxInput);
  Mute(LineOutput);
  Mute(HeadphoneOutput);

  CODEC_SYSLOG("Leave.")
}

/*
 * Set gain of the specific input channel.
 * The mute status is not affected.
 */
void Adau1361::SetGain(CodecChannel channel, float left_gain,
                       float right_gain) {
  CODEC_SYSLOG("Enter. %d, %f, %f ", channel, left_gain, right_gain)

  switch (channel) {
    case LineInput:
      line_input_left_gain_ = left_gain;
      line_input_right_gain_ = right_gain;
      adau1361_lower_.SetLineInputGain(
          line_input_left_gain_, line_input_right_gain_, line_input_mute_);
      break;
    case AuxInput:
      aux_input_left_gain_ = left_gain;
      aux_input_right_gain_ = right_gain;
      adau1361_lower_.SetAuxInputGain(aux_input_left_gain_,
                                      aux_input_right_gain_, aux_input_mute_);
      break;
    case LineOutput:
      line_output_left_gain_ = left_gain;
      line_output_right_gain_ = right_gain;
      adau1361_lower_.SetLineOutputGain(
          line_output_left_gain_, line_output_right_gain_, line_output_mute_);
      break;

    case HeadphoneOutput:
      hp_output_left_gain_ = left_gain;
      hp_output_right_gain_ = right_gain;
      adau1361_lower_.SetHpOutputGain(hp_output_left_gain_,
                                      hp_output_right_gain_, hp_output_mute_);
      break;
    default:
      assert(false);
      break;
  }
  CODEC_SYSLOG("Leave.")
}

/*
 * Set mute status of specific channels.
 * Channel gains are not affected.
 */
void Adau1361::Mute(CodecChannel channel, bool mute) {
  CODEC_SYSLOG("Enter. %d, %s ", channel, mute ? "true" : "false")

  switch (channel) {
    case LineInput:
      line_input_mute_ = mute;
      adau1361_lower_.SetLineInputGain(
          line_input_left_gain_, line_input_right_gain_, line_input_mute_);
      break;
    case AuxInput:
      aux_input_mute_ = mute;
      adau1361_lower_.SetAuxInputGain(aux_input_left_gain_,
                                      aux_input_right_gain_, aux_input_mute_);
      break;
    case LineOutput:
      line_output_mute_ = mute;
      adau1361_lower_.SetLineOutputGain(
          line_output_left_gain_, line_output_right_gain_, line_output_mute_);
      break;

    case HeadphoneOutput:
      hp_output_mute_ = mute;
      adau1361_lower_.SetHpOutputGain(hp_output_left_gain_,
                                      hp_output_right_gain_, hp_output_mute_);
      break;
    default:
      assert(false);
      break;
  }
  CODEC_SYSLOG("Leave.")
}

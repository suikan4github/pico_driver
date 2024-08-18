#include "adau1361lower.hpp"

/*
 *  Send single command
 *  table : command table :
 *  size : size of table.
 */
void Adau1361Lower::SendCommand(const uint8_t command[], int size) {
  /*
   * Send the given table to the I2C slave device at device_addr
   */
  i2c_.i2c_write_blocking(device_addr_, table, size, false);
}

/*
 * Send entire command table
 */

void Adau1361Lower::SendCommandTable(const uint8_t table[][3], int rows) {
  /*
   * Send all rows of command table.
   */
  for (int i = 0; i < rows; i++) adau1361_lower_.SendCommand(table[i], 3);
}

static const uint8_t lock_status_address[] = {0x40,
                                              0x02};  // R1 : 6 byte register.

bool Adau1361Lower::DoesI2CDeivceExist() {
  int status;
  status = i2c_.i2c_write_blocking(device_addr_, init_core, 0, false);
  return (status != PICO_ERROR_GENERIC);
}

// loop while the PLL is not locked.
void Adau1361::WaitPllLock(void) {
  uint8_t status[6];

  int count = 0;

  do {
    // Obtain PLL status
    // Write the lock status address and then, read the status by
    // repeated-stard.
    i2c_.i2c_write_blocking(device_addr_, lock_status_address,
                            sizeof(lock_status_address),
                            true);  // true for repeated start.
    i2c_.i2c_read_blocking(device_addr_, status, sizeof(status), false);

    CODEC_SYSLOG("Status : %02x, %02x, %02x, %02x, %02x, %02x", status[0],
                 status[1], status[2], status[3], status[4], status[5])

    // Check byte 5 of the control registers.
    // If bit 1 is 1, locked. If it is 0, unlocked.
    // if locked, terminate the loop.
  } while (!(status[5] & (1 << 1)));
}

// Configure PLL and start. Then, initiate the core and set the CODEC Fs.
void Adau1361::ConfigurePll(void) {
  CODEC_SYSLOG("Enter.")

  if (fs_ == 24000 || fs_ == 32000 || fs_ == 48000 || fs_ == 96000) {
    // Configure the PLL. Target PLL out is 49.152MHz = 1024xfs
    // Regarding X, R, M, N, check ADAU1361 Datasheet register R1.
    // In the following code, the config_pll[0] and config_pll[1] contains
    // regsiter address of R1.

    switch (master_clock_) {
      case 8000000: {
        /**
         * X : 1
         * R : 6
         * M : 125
         * N : 18
         * PLL = ( MCLK / X ) * ( R + N/M ) = 49.152MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x00, 0x7D, 0x00, 0x12, 0x31, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 12000000: {
        /**
         * X : 1
         * R : 4
         * M : 125
         * N : 12
         * PLL = ( MCLK / X ) * ( R + N/M ) = 49.152MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x00, 0x7D, 0x00, 0x0C, 0x21, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 13000000: {
        /**
         * X : 1
         * R : 3
         * M : 1625
         * N : 1269
         * PLL = ( MCLK / X ) * ( R + N/M ) = 49.152MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x06, 0x59, 0x04, 0xF5, 0x19, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 14400000: {
        /**
         * X : 2
         * R : 6
         * M : 75
         * N : 62
         * PLL = ( MCLK / X ) * ( R + N/M ) = 49.152MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x00, 0x4B, 0x00, 0x3E, 0x33, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 19200000: {
        /**
         * X : 2
         * R : 4
         * M : 25
         * N : 3
         * PLL = ( MCLK / X ) * ( R + N/M ) = 49.152MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x00, 0x19, 0x00, 0x03, 0x2B, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 19680000: {
        /**
         * X : 2
         * R : 4
         * M : 205
         * N : 204
         * PLL = ( MCLK / X ) * ( R + N/M ) = 49.152MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x00, 0xCD, 0x00, 0xCC, 0x23, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 19800000: {
        /**
         * X : 2
         * R : 4
         * M : 825
         * N : 796
         * PLL = ( MCLK / X ) * ( R + N/M ) = 49.152MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x03, 0x39, 0x03, 0x1C, 0x23, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 24000000: {
        /**
         * X : 2
         * R : 4
         * M : 125
         * N : 12
         * PLL = ( MCLK / X ) * ( R + N/M ) = 49.152MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x00, 0x7D, 0x00, 0x0C, 0x23, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 26000000: {
        /**
         * X : 2
         * R : 3
         * M : 1625
         * N : 1269
         * PLL = ( MCLK / X ) * ( R + N/M ) = 49.152MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x06, 0x59, 0x04, 0xF5, 0x1B, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 27000000: {
        /**
         * X : 2
         * R : 3
         * M : 1125
         * N : 721
         * PLL = ( MCLK / X ) * ( R + N/M ) = 49.152MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x04, 0x65, 0x02, 0xD1, 0x1B, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 12288000: {
        /**
         * X : 1
         * R : 4
         * M : Don't care
         * N : Don't care
         * PLL = ( MCLK / X ) * ( R + N/M ) = 49.152MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x04, 0x65, 0x02, 0xD1, 0x20, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 24576000: {
        /**
         * X : 1
         * R : 4
         * M : Don't care
         * N : Don't care
         * PLL = ( MCLK / X ) * ( R + N/M ) = 49.152MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x04, 0x65, 0x02, 0xD1, 0x10, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      default:
        assert(false);
    }

  } else if (fs_ == 22050 || fs_ == 44100 || fs_ == 88200) {
    // Configure the PLL. Target PLL out is 45.1584MHz = 1024xfs

    switch (master_clock_) {
      case 8000000: {
        /**
         * X : 1
         * R : 5
         * M : 625
         * N : 403
         * PLL = ( MCLK / X ) * ( R + N/M ) = 45.1584MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x02, 0x71, 0x01, 0x93, 0x29, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 12000000: {
        /**
         * X : 1
         * R : 3
         * M : 625
         * N : 477
         * PLL = ( MCLK / X ) * ( R + N/M ) = 45.1584MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x02, 0x71, 0x01, 0xDD, 0x19, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 13000000: {
        /**
         * X : 1
         * R : 3
         * M : 8125
         * N : 3849
         * PLL = ( MCLK / X ) * ( R + N/M ) = 45.1584MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x1F, 0xBD, 0x0F, 0x09, 0x19, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 14400000: {
        /**
         * X : 2
         * R : 6
         * M : 125
         * N : 34
         * PLL = ( MCLK / X ) * ( R + N/M ) = 45.1584MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x00, 0x7D, 0x00, 0x22, 0x33, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 19200000: {
        /**
         * X : 2
         * R : 4
         * M : 125
         * N : 88
         * PLL = ( MCLK / X ) * ( R + N/M ) = 45.1584MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x00, 0x7D, 0x00, 0x58, 0x23, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 19680000: {
        /**
         * X : 2
         * R : 4
         * M : 1025
         * N : 604
         * PLL = ( MCLK / X ) * ( R + N/M ) = 45.1584MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x04, 0x01, 0x02, 0x5C, 0x23, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 19800000: {
        /**
         * X : 2
         * R : 4
         * M : 1375
         * N : 772
         * PLL = ( MCLK / X ) * ( R + N/M ) = 45.1584MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x05, 0x5F, 0x03, 0x04, 0x23, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 24000000: {
        /**
         * X : 2
         * R : 3
         * M : 625
         * N : 477
         * PLL = ( MCLK / X ) * ( R + N/M ) = 45.1584MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x02, 0x71, 0x01, 0xDD, 0x1B, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 26000000: {
        /**
         * X : 1
         * R : 3
         * M : 8125
         * N : 3849
         * PLL = ( MCLK / X ) * ( R + N/M ) = 45.1584MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x1F, 0xBD, 0x0F, 0x09, 0x1B, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 27000000: {
        /**
         * X : 2
         * R : 3
         * M : 1875
         * N : 647
         * PLL = ( MCLK / X ) * ( R + N/M ) = 45.1584MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x07, 0x53, 0x02, 0x87, 0x1B, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 12288000: {
        /**
         * X : 1
         * R : 3
         * M : 1000
         * N : 675
         * PLL = ( MCLK / X ) * ( R + N/M ) = 45.1584MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x03, 0xE8, 0x02, 0xA3, 0x19, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      case 24576000: {
        /**
         * X : 2
         * R : 3
         * M : 1000
         * N : 675
         * PLL = ( MCLK / X ) * ( R + N/M ) = 45.1584MHz
         */
        uint8_t config_pll[] = {0x40, 0x02, 0x03, 0xE8, 0x02, 0xA3, 0x1B, 0x01};

        adau1361_lower_.SendCommand(config_pll, sizeof(config_pll));
        break;
      }

      default:
        assert(false);
    }

  } else {  // if the required Fs is unknown, it is critical error.
    assert(false);
  }

  // Waiting for the PLL lock.
  adau1361_lower_.WaitPllLock();

  // Enable core.
  adau1361_lower_.SendCommand(config_core, sizeof(config_core));

  // Set the converter clock.
  switch (fs_) {
    case 22050:
    case 24000: {
      // R17: Converter 0, SRC = 1/2 * core clock
      const uint8_t config_src[] = {0x40, 0x17, 0x04};

      adau1361_lower_.SendCommand(config_src, sizeof(config_src));
      break;
    }
    case 32000: {
      // R17: Converter 0, SRC = 2/3 * core clock
      const uint8_t config_src[] = {0x40, 0x17, 0x05};

      adau1361_lower_.SendCommand(config_src, sizeof(config_src));
      break;
    }
    case 44100:
    case 48000: {
      // R17: Converter 0, SRC = 1 * core clock
      const uint8_t config_src[] = {0x40, 0x17, 0x00};

      adau1361_lower_.SendCommand(config_src, sizeof(config_src));
      break;
    }
    case 88200:
    case 96000: {
      // R17: Converter 0, SRC = 2 * core clock
      const uint8_t config_src[] = {0x40, 0x17, 0x06};

      adau1361_lower_.SendCommand(config_src, sizeof(config_src));
      break;
    }
    default:
      assert(false);
  }

  CODEC_SYSLOG("Leave.")
}  // ConfigurePlll

#define DATA 2 /* data payload of register */
#define ADDL 1 /* lower address of register */
#define ADDH 0 /* upper address of register */

#define SET_INPUT_GAIN(x, mute) ((mute) ? 0x00 : (x << 1))
/*
 * This function assumes the single-end input. The gain control is LINNG.
 * See Figure 31 "Record Signal Path" in the ADAU1361 data sheet
 *
 */
void Adau1361::SetLineInputGain(float left_gain, float right_gain, bool mute) {
  uint8_t txbuf[3];
  uint8_t rxbuf[1];
  int left, right;

  CODEC_SYSLOG("Enter. %d, %d, %d", (int)left_gain, (int)right_gain, mute)

  // set left gain
  left = std::max(left, -12);
  left = std::min(left, 6);
  left = (left_gain + 15) / 3;  // See table 31 LINNG

  // set right gain
  right = std::max(right, -12);
  right = std::min(right, 6);
  right = (right_gain + 15) / 3;  // See table 31 LINNG

  /*
   *  *************** Read Modify light the Left Channel Gain
   * *********************
   */
  // R4 : Record Mixer Left
  txbuf[ADDH] = 0x40;  // Upper address of register
  txbuf[ADDL] = 0x0a;

  // Obtain the Register
  i2c_.i2c_write_blocking(device_addr_, txbuf, 2, true);  // repeated start.
  i2c_.i2c_read_blocking(device_addr_, rxbuf, 1, false);
  CODEC_SYSLOG("R4 : 0x%02x", rxbuf[0]);
  // Create a register value
  txbuf[DATA] = (rxbuf[0] & 0xF1) | SET_INPUT_GAIN(left, mute);
  CODEC_SYSLOG("Transmitting %02x, %02x, %02x", txbuf[0], txbuf[1], txbuf[2]);

  // Set the R4.
  adau1361_lower_.SendCommand(txbuf, 3);

  /*
   *  *************** Read Modify light the Right Channel Gain
   * *********************
   */
  // R6 : Record Mixer 2
  txbuf[ADDH] = 0x40;  // Upper address of register
  txbuf[ADDL] = 0x0c;

  // Obtain the Register
  i2c_.i2c_write_blocking(device_addr_, txbuf, 2, true);  // repeated start.
  i2c_.i2c_read_blocking(device_addr_, rxbuf, 1, false);

  CODEC_SYSLOG("R6 : 0x%02x", rxbuf[0]);
  // Create a register value
  txbuf[DATA] = (rxbuf[0] & 0xF1) | SET_INPUT_GAIN(right, mute);
  CODEC_SYSLOG("Transmitting %02x, %02x, %02x", txbuf[0], txbuf[1], txbuf[2]);

  // Set the R4.
  adau1361_lower_.SendCommand(txbuf, 3);

  CODEC_SYSLOG("Leave.")
}

#define SET_AUX_GAIN(x, mute) ((mute) ? 0x00 : x)

/*
 * This function assumes the input is the single end. Then,
 */
void Adau1361::SetAuxInputGain(float left_gain, float right_gain, bool mute) {
  uint8_t txbuf[3];
  uint8_t rxbuf[1];
  int left, right;

  CODEC_SYSLOG("Enter. %d, %d, %d", (int)left_gain, (int)right_gain, mute)

  // set left gain LDBOOST is muted.
  left = std::max(left, -12);
  left = std::min(left, 6);
  left = (left_gain + 15) / 3;  // See table 32 MX1AUGXG
  // set right gain. LDBOOST is muted.
  right = std::max(right, -12);
  right = std::min(right, 6);
  right = (right_gain + 15) / 3;  // See table 34 MX1AUGXG

  /*
   *  *************** Read Modify light the Left Channel Gain
   * *********************
   */
  // R5 : Record Mixer Left Control 1
  txbuf[ADDH] = 0x40;  // Upper address of register
  txbuf[ADDL] = 0x0b;

  // Obtain the Register
  i2c_.i2c_write_blocking(device_addr_, txbuf, 2, true);  // repeated start.
  i2c_.i2c_read_blocking(device_addr_, rxbuf, 1, false);

  CODEC_SYSLOG("Obtain R5 : 0x%02x", rxbuf[0]);
  // Create a register value
  txbuf[DATA] = (rxbuf[0] & 0xF8) | SET_AUX_GAIN(left, mute);
  CODEC_SYSLOG("Transmitting %02x, %02x, %02x", txbuf[0], txbuf[1], txbuf[2]);
  // Set the R5.
  adau1361_lower_.SendCommand(txbuf, 3);

  /*
   *  *************** Read Modify light the Right Channel Gain
   * *********************
   */
  // R7 : Record Mixer Right Control 1
  txbuf[ADDH] = 0x40;  // Upper address of register
  txbuf[ADDL] = 0x0d;

  // Obtain the Register
  i2c_.i2c_write_blocking(device_addr_, txbuf, 2, true);  // repeated start.
  i2c_.i2c_read_blocking(device_addr_, rxbuf, 1, false);

  CODEC_SYSLOG("Obtain R7 : 0x%02x", rxbuf[0]);
  // Create a register value
  txbuf[DATA] = (rxbuf[0] & 0xF8) | SET_AUX_GAIN(left, mute);
  CODEC_SYSLOG("Transmitting %02x, %02x, %02x", txbuf[0], txbuf[1], txbuf[2]);
  // Set the R7.
  adau1361_lower_.SendCommand(txbuf, 3);

  CODEC_SYSLOG("Leave.")
}

#define SET_LO_GAIN(x, unmute, headphone) \
  ((x << 2) | (unmute << 1) | (headphone))

// Read modify right the R31 and R32
void Adau1361::SetLineOutputGain(float left_gain, float right_gain, bool mute) {
  uint8_t txbuf[3];
  uint8_t rxbuf[1];
  int left, right;

  CODEC_SYSLOG("Enter. %d, %d, %d", (int)left_gain, (int)right_gain, mute)

  // set 0 if mute, set 1 if unmute;
  int unmute_flag = mute ? 0 : 1;

  // Calc left gain setting.
  // LOUTVOL[5:0] = 0  ; -57dB
  // LOUTVOL[5:0] = 63 ; 6dB
  left = left_gain + 57;
  left = std::max(left, 0);
  left = std::min(left, 63);

  // Calc left gain setting.
  // ROUTVOL[5:0] = 0  ; -57dB
  // ROUTVOL[5:0] = 63 ; 6dB
  right = right_gain + 57;
  right = std::max(right, 0);
  right = std::min(right, 63);

  /*
   *  *************** Read Modify light the Left Channel Gain
   * *********************
   */
  txbuf[ADDH] = 0x40;  // Upper address of register
  txbuf[ADDL] = 0x25;  // R31: LOUTVOL

  // Obtain the R31
  i2c_.i2c_write_blocking(device_addr_, txbuf, 2, true);  // repeated start.
  i2c_.i2c_read_blocking(device_addr_, rxbuf, 1, false);

  CODEC_SYSLOG("R31 : 0x%02x", rxbuf[0]);

  // Set line out of Left
  txbuf[DATA] = SET_LO_GAIN(left,          /* GAIN */
                            unmute_flag,   /* UNMUTE */
                            rxbuf[0] & 1); /* LOMODE of R31*/
  CODEC_SYSLOG("Transmitting %02x, %02x, %02x", txbuf[0], txbuf[1], txbuf[2]);
  // Set LOUTVOL : R31
  adau1361_lower_.SendCommand(txbuf, 3);

  /*
   *  *************** Read Modify light the Right Channel Gain
   * *********************
   */
  txbuf[ADDH] = 0x40;  // Upper address of register
  txbuf[ADDL] = 0x26;  // R32: ROUTVOL

  // Obtain the R32
  i2c_.i2c_write_blocking(device_addr_, txbuf, 2, true);  // repeated start.
  i2c_.i2c_read_blocking(device_addr_, rxbuf, 1, false);

  CODEC_SYSLOG("R32 : 0x%02x", rxbuf[0]);

  txbuf[DATA] = SET_LO_GAIN(right,         /* GAIN */
                            unmute_flag,   /* UNMUTE */
                            rxbuf[0] & 1); /* ROMODE of R32 */
  CODEC_SYSLOG("Transmitting %02x, %02x, %02x", txbuf[0], txbuf[1], txbuf[2]);
  // Set ROUTVOL : R32
  adau1361_lower_.SendCommand(txbuf, 3);

  CODEC_SYSLOG("Leave.")
}

#define SET_HP_GAIN(x, unmute, headphone) \
  ((x << 2) | (unmute << 1) | (headphone))

// Read modify right the R29 and R30

void Adau1361::SetHpOutputGain(float left_gain, float right_gain, bool mute) {
  uint8_t txbuf[3];
  uint8_t rxbuf[1];
  int left, right;

  CODEC_SYSLOG("Enter. %d, %d, %d", (int)left_gain, (int)right_gain, mute)

  // set 0 if mute, set 1 if unmute;
  int unmute_flag = mute ? 0 : 1;

  // Calc left gain setting.
  // LHPVOL[5:0] = 0  ; -57dB
  // LHPVOL[5:0] = 63 ; 6dB
  left = left_gain + 57;
  left = std::max(left, 0);
  left = std::min(left, 63);

  // Calc left gain setting.
  // RHPVOL[5:0] = 0  ; -57dB
  // RHPVOL[5:0] = 63 ; 6dB
  right = right_gain + 57;
  right = std::max(right, 0);
  right = std::min(right, 63);

  /*
   *  *************** Read Modify light the Left Channel Gain
   * *********************
   */
  // R29: LHPVOL
  txbuf[ADDH] = 0x40;  // Upper address of register
  txbuf[ADDL] = 0x23;

  // Obtain R29
  i2c_.i2c_write_blocking(device_addr_, txbuf, 2, true);  // repeated start.
  i2c_.i2c_read_blocking(device_addr_, rxbuf, 1, false);

  CODEC_SYSLOG("R29 : 0x%02x", rxbuf[0]);

  // HP left out control data
  txbuf[DATA] = SET_HP_GAIN(left,          /* GAIN */
                            unmute_flag,   /* UNMUTE */
                            rxbuf[0] & 1); /* HPEN of R29*/
  CODEC_SYSLOG("Transmitting %02x, %02x, %02x", txbuf[0], txbuf[1], txbuf[2]);
  // SET LHPVOL : R29
  adau1361_lower_.SendCommand(txbuf, 3);

  /*
   *  *************** Read Modify light the Left Channel Gain
   * *********************
   */
  // R30 : RHPVOL address
  txbuf[ADDH] = 0x40;  // Upper address of register
  txbuf[ADDL] = 0x24;

  // Obtain R30
  i2c_.i2c_write_blocking(device_addr_, txbuf, 2, true);  // repeated start.
  i2c_.i2c_read_blocking(device_addr_, rxbuf, 1, false);

  CODEC_SYSLOG("R30 : 0x%02x", rxbuf[0]);

  // HP right out control data
  txbuf[DATA] = SET_HP_GAIN(right,         /* GAIN */
                            unmute_flag,   /* UNMUTE */
                            rxbuf[0] & 1); /* HPMODE of R30*/
  CODEC_SYSLOG("Transmitting %02x, %02x, %02x", txbuf[0], txbuf[1], txbuf[2]);
  // SET RHPVOL : R30
  adau1361_lower_.SendCommand(txbuf, 3);

  CODEC_SYSLOG("Leave.")
}

// Include local definition
#include <stdio.h>

#include "adau1361.hpp"
#include "adau1361lower.hpp"
#include "i2cmaster.hpp"
#include "picowrapper.hpp"

int main() {
  const unsigned int adau1361_i2c_address = 0x38;
  const unsigned int i2c_clock = 100 * 1000;  // Hz.
  const unsigned int i2c_scl_pin = 7;
  const unsigned int i2c_sda_pin = 6;
  const unsigned int mclock = 12'000'000;  // Hz
  const unsigned int fs = 48'000;          // Hz

  ::pico_driver::SDKWrapper sdk;

  // Init USB-Serial port by 9600bps, 1stop bit, 8bit.
  // add following lines to CMakeLists.txt
  // to enable usb-seial and disable serial.
  //     pico_enable_stdio_usb($ { PROJECT_NAME } 1)
  //     pico_enable_stdio_uart($ { PROJECT_NAME } 0)
  sdk.stdio_init_all();

  ::pico_driver::I2CMaster i2c(sdk, *i2c1, i2c_clock, i2c_scl_pin, i2c_sda_pin);
  ::codec::Adau1361Lower codec_lower(i2c, adau1361_i2c_address);
  ::codec::Adau1361 codec(fs, mclock, codec_lower);
#if 0
  sdk.sleep_ms(5000);

  printf("Check CODEC exsistense\n");
  if (i2c.IsDeviceExisting(adau1361_i2c_address))
    printf("CODEC exist at address 0x%02x\n", adau1361_i2c_address);
  else
    printf("CODEC doesn't exist at address 0x%02x\n", adau1361_i2c_address);
  printf("Start CODEC\n");
#endif
  codec.Start();
  codec.Mute(codec::Adau1361::LineInput, false);        // unmute
  codec.Mute(codec::Adau1361::HeadphoneOutput, false);  // unmute

  // Use RasPi Pico on-board LED.
  // 1=> Turn on, 0 => Turn pff.
  const uint LED_PIN = PICO_DEFAULT_LED_PIN;
  sdk.gpio_init(LED_PIN);
  sdk.gpio_set_dir(LED_PIN, true);

  while (true) {
    // Turn LED on
    printf("Hello, ");
    sdk.gpio_put(LED_PIN, true);
    sdk.sleep_ms(200);
    // Turn LED off
    printf("world!\n");
    sdk.gpio_put(LED_PIN, false);
    sdk.sleep_ms(800);
  }
}

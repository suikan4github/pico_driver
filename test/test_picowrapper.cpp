
//    "Copyright 2024 Seiichi Horie
/**
 * @file
 */

#include <gtest/gtest.h>

#include "fff.h"

// Include for test
#include <stdint.h>

// Dummy data type for test.
typedef int i2c_inst_t;

// Preparation for fff
DEFINE_FFF_GLOBALS;

// Create Test Spies
FAKE_VOID_FUNC(gpio_init, uint);
FAKE_VOID_FUNC(gpio_set_dir, uint, bool);
FAKE_VOID_FUNC(gpio_put, uint, bool);
FAKE_VALUE_FUNC(bool, gpio_get, uint);
FAKE_VOID_FUNC(gpio_pull_up, uint);
FAKE_VALUE_FUNC(uint, i2c_init, i2c_inst_t *, uint);
FAKE_VALUE_FUNC(int, i2c_read_blocking, i2c_inst_t *, uint8_t, uint8_t *,
                size_t, bool);
FAKE_VALUE_FUNC(int, i2c_write_blocking, i2c_inst_t *, uint8_t, const uint8_t *,
                size_t, bool);

// The header file of the library to test.
#include "../samples/interrupt_sample/pico_driver/picowrapper.hpp"
// The cpp file of the library to test.
#include "../samples/interrupt_sample/pico_driver/picowrapper.cpp"

TEST(PicoWrapper, gpio_init) {
  PicoWrapper pico;
  uint gpio = 17;

  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_init);

  pico.gpio_init(gpio);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(gpio_init_fake.call_count, 1);

  // Check the data from test spy. Call order.
  ASSERT_EQ(fff.call_history[0], (void *)gpio_init);

  // Check the data from test spy. DrawRelative Parameters.
  ASSERT_EQ(gpio_init_fake.arg0_history[0], gpio);

  // Try another parameter
  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_init);

  gpio = 11;
  pico.gpio_init(gpio);

  // Check the data from test spy. DrawRelative Parameters.
  ASSERT_EQ(gpio_init_fake.arg0_history[0], gpio);
}

TEST(PicoWrapper, gpio_set_dir) {
  PicoWrapper pico;
  uint gpio = 17;
  bool dir = true;

  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_set_dir);

  pico.gpio_set_dir(gpio, dir);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(gpio_set_dir_fake.call_count, 1);

  // Check the data from test spy. Call order.
  ASSERT_EQ(fff.call_history[0], (void *)gpio_set_dir);

  // Check the data from test spy. DrawRelative Parameters.
  ASSERT_EQ(gpio_set_dir_fake.arg0_history[0], gpio);
  ASSERT_EQ(gpio_set_dir_fake.arg1_history[0], dir);

  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_set_dir);

  // Test another parameters.
  gpio = 11;
  dir = false;

  pico.gpio_set_dir(gpio, dir);

  // Check the data from test spy. DrawRelative Parameters.
  ASSERT_EQ(gpio_set_dir_fake.arg0_history[0], gpio);
  ASSERT_EQ(gpio_set_dir_fake.arg1_history[0], dir);
}

TEST(PicoWrapper, gpio_put) {
  PicoWrapper pico;
  uint gpio = 17;
  bool value = true;

  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_put);

  pico.gpio_put(gpio, value);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(gpio_put_fake.call_count, 1);

  // Check the data from test spy. Call order.
  ASSERT_EQ(fff.call_history[0], (void *)gpio_put);

  // Check the data from test spy. DrawRelative Parameters.
  ASSERT_EQ(gpio_put_fake.arg0_history[0], gpio);
  ASSERT_EQ(gpio_put_fake.arg1_history[0], value);

  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_put);

  // Test another parameters.
  gpio = 11;
  value = false;

  pico.gpio_put(gpio, value);

  // Check the data from test spy. DrawRelative Parameters.
  ASSERT_EQ(gpio_put_fake.arg0_history[0], gpio);
  ASSERT_EQ(gpio_put_fake.arg1_history[0], value);
}

TEST(PicoWrapper, gpio_get) {
  PicoWrapper pico;
  uint gpio = 17;

  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_get);

  bool myReturnVals[] = {true, false};
  SET_RETURN_SEQ(gpio_get, myReturnVals, sizeof(myReturnVals) / sizeof(bool));

  ASSERT_EQ(pico.gpio_get(gpio), myReturnVals[0]);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(gpio_get_fake.call_count, 1);

  // Check the data from test spy. Call order.
  ASSERT_EQ(fff.call_history[0], (void *)gpio_get);

  gpio = 11;

  // Check the data from test spy. DrawRelative Parameters.
  ASSERT_EQ(pico.gpio_get(gpio), myReturnVals[1]);
}

TEST(PicoWrapper, gpio_pull_up) {
  PicoWrapper pico;
  uint gpio = 17;

  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_init);

  pico.gpio_pull_up(gpio);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(gpio_pull_up_fake.call_count, 1);

  // Check the data from test spy. Call order.
  ASSERT_EQ(fff.call_history[0], (void *)gpio_pull_up);

  // Check the data from test spy. DrawRelative Parameters.
  ASSERT_EQ(gpio_pull_up_fake.arg0_history[0], gpio);

  // Try another parameter
  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_pull_up);

  gpio = 11;
  pico.gpio_pull_up(gpio);

  // Check the data from test spy. DrawRelative Parameters.
  ASSERT_EQ(gpio_pull_up_fake.arg0_history[0], gpio);
}

// FAKE_VALUE_FUNC(uint, i2c_init, i2c_inst_t *, uint);
TEST(PicoWrapper, i2c_init) {
  PicoWrapper pico;
  i2c_inst_t i2c = 17;
  const uint baud[] = {3, 100000};

  FFF_RESET_HISTORY();
  RESET_FAKE(i2c_init);

  uint myReturnVals[] = {1, 2};
  SET_RETURN_SEQ(i2c_init, myReturnVals, sizeof(myReturnVals) / sizeof(bool));

  ASSERT_EQ(pico.i2c_init(&i2c, baud[0]), myReturnVals[0]);
  ASSERT_EQ(pico.i2c_init(&i2c, baud[1]), myReturnVals[1]);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(i2c_init_fake.call_count, 2);

  // Check the data from test spy. Call order.
  ASSERT_EQ(fff.call_history[0], (void *)i2c_init);
  ASSERT_EQ(fff.call_history[1], (void *)i2c_init);

  // Check the data from test spy. DrawRelative Parameters.
  ASSERT_EQ(i2c_init_fake.arg0_history[0], &i2c);
  ASSERT_EQ(i2c_init_fake.arg1_history[0], baud[0]);
  ASSERT_EQ(i2c_init_fake.arg0_history[1], &i2c);
  ASSERT_EQ(i2c_init_fake.arg1_history[1], baud[1]);
}

// FAKE_VALUE_FUNC(int, i2c_read_blocking, i2c_inst_t *, uint8_t, uint8_t *,
//                  size_t, bool);
TEST(PicoWrapper, i2c_read_blocking) {
  PicoWrapper pico;
  i2c_inst_t i2c = 17;
  uint8_t buf[10];
  uint8_t addrs[8] = {3, 3, 3, 3, 5, 5, 5, 5};
  size_t bufsize[8] = {6, 6, 7, 7, 6, 6, 7, 7};
  bool nostop[8] = {true, false, true, false, true, false, true, false};
  int myReturnVals[] = {1, 2, 3, 4, 5, 6, 7, 8};

  FFF_RESET_HISTORY();
  RESET_FAKE(i2c_read_blocking);

  SET_RETURN_SEQ(i2c_read_blocking, myReturnVals,
                 sizeof(myReturnVals) / sizeof(bool));

  for (int i = 0; i < 8; i++) {
    ASSERT_EQ(
        pico.i2c_read_blocking(&i2c, addrs[i], buf, bufsize[i], nostop[i]),
        myReturnVals[i]);
  }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(i2c_read_blocking_fake.call_count, 8);

  for (int i = 0; i < 8; i++) {
    // Check the data from test spy. Call order.
    ASSERT_EQ(fff.call_history[i], (void *)i2c_read_blocking);
    // Check the data from test spy. DrawRelative Parameters.
    ASSERT_EQ(i2c_read_blocking_fake.arg0_history[i], &i2c);
    ASSERT_EQ(i2c_read_blocking_fake.arg1_history[i], addrs[i]);
    ASSERT_EQ(i2c_read_blocking_fake.arg2_history[i], buf);
    ASSERT_EQ(i2c_read_blocking_fake.arg3_history[i], bufsize[i]);
    ASSERT_EQ(i2c_read_blocking_fake.arg4_history[i], nostop[i]);
  }
}

// FAKE_VALUE_FUNC(int, i2c_write_blocking, i2c_inst_t *, uint8_t, const uint8_t
// *,
//                size_t, bool);
TEST(PicoWrapper, i2c_write_blocking) {
  PicoWrapper pico;
  i2c_inst_t i2c = 17;
  uint8_t buf[10];
  uint8_t addrs[8] = {3, 3, 3, 3, 5, 5, 5, 5};
  size_t bufsize[8] = {6, 6, 7, 7, 6, 6, 7, 7};
  bool nostop[8] = {true, false, true, false, true, false, true, false};
  int myReturnVals[] = {1, 2, 3, 4, 5, 6, 7, 8};

  FFF_RESET_HISTORY();
  RESET_FAKE(i2c_write_blocking);

  SET_RETURN_SEQ(i2c_write_blocking, myReturnVals,
                 sizeof(myReturnVals) / sizeof(bool));

  for (int i = 0; i < 8; i++) {
    ASSERT_EQ(
        pico.i2c_write_blocking(&i2c, addrs[i], buf, bufsize[i], nostop[i]),
        myReturnVals[i]);
  }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(i2c_write_blocking_fake.call_count, 8);

  for (int i = 0; i < 8; i++) {
    // Check the data from test spy. Call order.
    ASSERT_EQ(fff.call_history[i], (void *)i2c_write_blocking);
    // Check the data from test spy. DrawRelative Parameters.
    ASSERT_EQ(i2c_write_blocking_fake.arg0_history[i], &i2c);
    ASSERT_EQ(i2c_write_blocking_fake.arg1_history[i], addrs[i]);
    ASSERT_EQ(i2c_write_blocking_fake.arg2_history[i], buf);
    ASSERT_EQ(i2c_write_blocking_fake.arg3_history[i], bufsize[i]);
    ASSERT_EQ(i2c_write_blocking_fake.arg4_history[i], nostop[i]);
  }
}


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
FAKE_VOID_FUNC(sleep_ms, uint32_t);
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
#include "../rpi_pico/samples/interrupt_sample/pico_driver/picowrapper.hpp"
// The cpp file of the library to test.
#include "../rpi_pico/samples/interrupt_sample/pico_driver/picowrapper.cpp"

TEST(PicoWrapper, sleep_ms) {
  PicoWrapper pico;
  uint ms_array[] = {17, 11};

  FFF_RESET_HISTORY();
  RESET_FAKE(sleep_ms);

  for (auto &&ms : ms_array) {
    pico.sleep_ms(ms);
  }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(sleep_ms_fake.call_count, std::size(ms_array));

  int index = 0;
  for (auto &&ms : ms_array) {
    // Check the data from test spy. Call order.
    ASSERT_EQ(fff.call_history[index], (void *)sleep_ms);
    // Check the data from test spy. DrawRelative Parameters.
    ASSERT_EQ(sleep_ms_fake.arg0_history[index], ms);
    index++;
  }
}

TEST(PicoWrapper, gpio_init) {
  PicoWrapper pico;
  uint gpioarray[] = {17, 11};

  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_init);

  for (auto &&gpio : gpioarray) {
    pico.gpio_init(gpio);
  }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(gpio_init_fake.call_count, std::size(gpioarray));

  int index = 0;
  for (auto &&gpio : gpioarray) {
    // Check the data from test spy. Call order.
    ASSERT_EQ(fff.call_history[index], (void *)gpio_init);
    // Check the data from test spy. DrawRelative Parameters.
    ASSERT_EQ(gpio_init_fake.arg0_history[index], gpio);
    index++;
  }
}

TEST(PicoWrapper, gpio_set_dir) {
  PicoWrapper pico;
  uint gpioarray[] = {17, 11};
  bool dirarray[] = {true, false};

  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_set_dir);

  for (auto &&gpio : gpioarray) {
    for (auto &&dir : dirarray) {
      pico.gpio_set_dir(gpio, dir);
    }
  }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(gpio_set_dir_fake.call_count,
            std::size(gpioarray) * std::size(dirarray));

  uint index = 0;
  for (auto &&gpio : gpioarray) {
    for (auto &&dir : dirarray) {
      // Check the data from test spy. Call order.
      ASSERT_EQ(fff.call_history[index], (void *)gpio_set_dir);
      // Check the data from test spy. DrawRelative Parameters.
      ASSERT_EQ(gpio_set_dir_fake.arg0_history[index], gpio);
      ASSERT_EQ(gpio_set_dir_fake.arg1_history[index], dir);
      index++;
    }
  }
}

TEST(PicoWrapper, gpio_put) {
  PicoWrapper pico;
  uint gpioarray[] = {17, 11};
  bool valuearray[] = {true, false};

  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_put);

  for (auto &&gpio : gpioarray) {
    for (auto &&value : valuearray) {
      pico.gpio_put(gpio, value);
    }
  }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(gpio_put_fake.call_count,
            std::size(gpioarray) * std::size(valuearray));

  // Test all combination of the parameter.
  uint index = 0;
  for (auto &&gpio : gpioarray) {
    for (auto &&value : valuearray) {
      // Check the data from test spy. Call order.
      ASSERT_EQ(fff.call_history[index], (void *)gpio_put);
      // Check the data from test spy. DrawRelative Parameters.
      ASSERT_EQ(gpio_put_fake.arg0_history[index], gpio);
      ASSERT_EQ(gpio_put_fake.arg1_history[index], value);
      index++;
    }
  }
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
  uint8_t addrs_array[] = {3, 5};
  size_t bufsize_array[2] = {2, 7};
  bool nostop_array[2] = {true, false};
  int myReturnVals_array[8] = {1, 2, 3, 4, 5, 6, 7, 8};

  FFF_RESET_HISTORY();
  RESET_FAKE(i2c_read_blocking);

  SET_RETURN_SEQ(i2c_read_blocking, myReturnVals_array,
                 std::size(myReturnVals_array));

  // Check wether return value is correct.
  int index = 0;
  for (auto &&addrs : addrs_array) {
    for (auto &&bufsize : bufsize_array) {
      for (auto &&nostop : nostop_array) {
        ASSERT_EQ(pico.i2c_read_blocking(&i2c, addrs, buf, bufsize, nostop),
                  myReturnVals_array[index]);
        index++;
      }
    }
  }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(i2c_read_blocking_fake.call_count, 8);

  // Check wether parameters are passed collectly.
  index = 0;
  for (auto &&addrs : addrs_array) {
    for (auto &&bufsize : bufsize_array) {
      for (auto &&nostop : nostop_array) {
        // Check the data from test spy. Call order.
        ASSERT_EQ(fff.call_history[index], (void *)i2c_read_blocking);
        // Check the data from test spy. DrawRelative Parameters.
        ASSERT_EQ(i2c_read_blocking_fake.arg0_history[index], &i2c);
        ASSERT_EQ(i2c_read_blocking_fake.arg1_history[index], addrs);
        ASSERT_EQ(i2c_read_blocking_fake.arg2_history[index], buf);
        ASSERT_EQ(i2c_read_blocking_fake.arg3_history[index], bufsize);
        ASSERT_EQ(i2c_read_blocking_fake.arg4_history[index], nostop);
        index++;
      }
    }
  }
}

// FAKE_VALUE_FUNC(int, i2c_write_blocking, i2c_inst_t *, uint8_t,
// const uint8_t *,  size_t, bool);
TEST(PicoWrapper, i2c_write_blocking) {
  PicoWrapper pico;
  i2c_inst_t i2c = 17;
  uint8_t buf[10];
  uint8_t addrs_array[] = {3, 5};
  size_t bufsize_array[2] = {2, 7};
  bool nostop_array[2] = {true, false};
  int myReturnVals_array[8] = {1, 2, 3, 4, 5, 6, 7, 8};

  FFF_RESET_HISTORY();
  RESET_FAKE(i2c_write_blocking);

  SET_RETURN_SEQ(i2c_write_blocking, myReturnVals_array,
                 std::size(myReturnVals_array));

  // Check wether return value is correct.
  int index = 0;
  for (auto &&addrs : addrs_array) {
    for (auto &&bufsize : bufsize_array) {
      for (auto &&nostop : nostop_array) {
        ASSERT_EQ(pico.i2c_write_blocking(&i2c, addrs, buf, bufsize, nostop),
                  myReturnVals_array[index]);
        index++;
      }
    }
  }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(i2c_write_blocking_fake.call_count, 8);

  // Check wether parameters are passed collectly.
  index = 0;
  for (auto &&addrs : addrs_array) {
    for (auto &&bufsize : bufsize_array) {
      for (auto &&nostop : nostop_array) {
        // Check the data from test spy. Call order.
        ASSERT_EQ(fff.call_history[index], (void *)i2c_write_blocking);
        // Check the data from test spy. DrawRelative Parameters.
        ASSERT_EQ(i2c_write_blocking_fake.arg0_history[index], &i2c);
        ASSERT_EQ(i2c_write_blocking_fake.arg1_history[index], addrs);
        ASSERT_EQ(i2c_write_blocking_fake.arg2_history[index], buf);
        ASSERT_EQ(i2c_write_blocking_fake.arg3_history[index], bufsize);
        ASSERT_EQ(i2c_write_blocking_fake.arg4_history[index], nostop);
        index++;
      }
    }
  }
}

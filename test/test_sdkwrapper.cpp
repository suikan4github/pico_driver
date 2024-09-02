
//    "Copyright 2024 Seiichi Horie
/**
 * @file
 */
#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "fff.h"

// Include for test
#include <stdint.h>

// Preparation for fff
DEFINE_FFF_GLOBALS;

// The header file of the library to test.
#include "../rpi_pico/samples/interrupt_sample/pico_driver/sdkwrapper.hpp"

// Create Test Spies
FAKE_VALUE_FUNC(bool, stdio_init_all);
FAKE_VOID_FUNC(sleep_ms, uint32_t);
FAKE_VALUE_FUNC(uint32_t, clock_get_hz, clock_handle_t);

FAKE_VOID_FUNC(gpio_init, uint);
FAKE_VOID_FUNC(gpio_set_function, uint, gpio_function_t);
FAKE_VOID_FUNC(gpio_set_dir, uint, bool);
FAKE_VOID_FUNC(gpio_put, uint, bool);
FAKE_VALUE_FUNC(bool, gpio_get, uint);
FAKE_VOID_FUNC(gpio_pull_up, uint);
FAKE_VALUE_FUNC(uint, i2c_init, i2c_inst_t *, uint);

FAKE_VOID_FUNC(i2c_deinit, i2c_inst_t *);
FAKE_VALUE_FUNC(int, i2c_read_blocking, i2c_inst_t *, uint8_t, uint8_t *,
                size_t, bool);
FAKE_VALUE_FUNC(int, i2c_write_blocking, i2c_inst_t *, uint8_t, const uint8_t *,
                size_t, bool);

FAKE_VALUE_FUNC(int, pio_sm_set_consecutive_pindirs, PIO, uint, uint, uint,
                bool);
FAKE_VOID_FUNC(pio_gpio_init, PIO, uint);
FAKE_VOID_FUNC(sm_config_set_out_pins, pio_sm_config *, uint, uint);
FAKE_VOID_FUNC(sm_config_set_in_pin_base, pio_sm_config *, uint);
FAKE_VOID_FUNC(sm_config_set_in_pin_count, pio_sm_config *, uint);
FAKE_VOID_FUNC(sm_config_set_clkdiv, pio_sm_config *, float);
FAKE_VOID_FUNC(sm_config_set_in_shift, pio_sm_config *, bool, bool, uint);
FAKE_VOID_FUNC(sm_config_set_out_shift, pio_sm_config *, bool, bool, uint);
FAKE_VALUE_FUNC(int, pio_sm_init, PIO, uint, uint, const pio_sm_config *);
FAKE_VOID_FUNC(pio_sm_put, PIO, uint, uint32_t);
FAKE_VOID_FUNC(pio_sm_set_enabled, PIO, uint, bool);
FAKE_VALUE_FUNC(int, pio_add_program, PIO, const pio_program_t *);

// The cpp file of the library to test.
#include "../rpi_pico/samples/interrupt_sample/pico_driver/sdkwrapper.cpp"

TEST(PicoWrapper, stdio_init_all) {
  ::pico_driver::SDKWrapper pico;

  FFF_RESET_HISTORY();
  RESET_FAKE(stdio_init_all);

  bool myReturnVals[] = {true, false};
  SET_RETURN_SEQ(stdio_init_all, myReturnVals,
                 sizeof(myReturnVals) / sizeof(bool));

  ASSERT_EQ(pico.stdio_init_all(), myReturnVals[0]);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(stdio_init_all_fake.call_count, 1);

  // Check the data from test spy. Call order.
  ASSERT_EQ(fff.call_history[0], (void *)stdio_init_all);

  // Check the data from test spy. : Parameters.
  ASSERT_EQ(pico.stdio_init_all(), myReturnVals[1]);
}  // stdio_init_all

TEST(PicoWrapper, sleep_ms) {
  ::pico_driver::SDKWrapper pico;
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
    // Check the data from test spy. : Parameters.
    ASSERT_EQ(sleep_ms_fake.arg0_history[index], ms);
    index++;
  }
}

TEST(PicoWrapper, gpio_init) {
  ::pico_driver::SDKWrapper pico;
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
    // Check the data from test spy. : Parameters.
    ASSERT_EQ(gpio_init_fake.arg0_history[index], gpio);
    index++;
  }
}

TEST(PicoWrapper, gpio_set_function) {
  ::pico_driver::SDKWrapper pico;
  uint gpioarray[] = {17, 11};
  int functionarray[] = {7, 13};

  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_set_function);

  for (auto &&gpio : gpioarray) {
    for (auto &&fn : functionarray) {
      pico.gpio_set_function(gpio, fn);
    }
  }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(gpio_set_function_fake.call_count,
            std::size(gpioarray) * std::size(functionarray));

  uint index = 0;
  for (auto &&gpio : gpioarray) {
    for (auto &&fn : functionarray) {
      // Check the data from test spy. Call order.
      ASSERT_EQ(fff.call_history[index], (void *)gpio_set_function);
      // Check the data from test spy.  Parameters.
      ASSERT_EQ(gpio_set_function_fake.arg0_history[index], gpio);
      ASSERT_EQ(gpio_set_function_fake.arg1_history[index], fn);
      index++;
    }
  }
}  // gpio_set_function

TEST(PicoWrapper, gpio_set_dir) {
  ::pico_driver::SDKWrapper pico;
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
      // Check the data from test spy. : Parameters.
      ASSERT_EQ(gpio_set_dir_fake.arg0_history[index], gpio);
      ASSERT_EQ(gpio_set_dir_fake.arg1_history[index], dir);
      index++;
    }
  }
}

TEST(PicoWrapper, gpio_put) {
  ::pico_driver::SDKWrapper pico;
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
      // Check the data from test spy. : Parameters.
      ASSERT_EQ(gpio_put_fake.arg0_history[index], gpio);
      ASSERT_EQ(gpio_put_fake.arg1_history[index], value);
      index++;
    }
  }
}

TEST(PicoWrapper, gpio_get) {
  ::pico_driver::SDKWrapper pico;
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

  // Check the data from test spy. : Parameters.
  ASSERT_EQ(pico.gpio_get(gpio), myReturnVals[1]);
}

TEST(PicoWrapper, gpio_pull_up) {
  ::pico_driver::SDKWrapper pico;
  uint gpio = 17;

  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_init);

  pico.gpio_pull_up(gpio);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(gpio_pull_up_fake.call_count, 1);

  // Check the data from test spy. Call order.
  ASSERT_EQ(fff.call_history[0], (void *)gpio_pull_up);

  // Check the data from test spy. : Parameters.
  ASSERT_EQ(gpio_pull_up_fake.arg0_history[0], gpio);

  // Try another parameter
  FFF_RESET_HISTORY();
  RESET_FAKE(gpio_pull_up);

  gpio = 11;
  pico.gpio_pull_up(gpio);

  // Check the data from test spy. : Parameters.
  ASSERT_EQ(gpio_pull_up_fake.arg0_history[0], gpio);
}

// FAKE_VALUE_FUNC(uint, i2c_init, i2c_inst_t *, uint);
TEST(PicoWrapper, i2c_init) {
  ::pico_driver::SDKWrapper pico;
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

  // Check the data from test spy. : Parameters.
  ASSERT_EQ(i2c_init_fake.arg0_history[0], &i2c);
  ASSERT_EQ(i2c_init_fake.arg1_history[0], baud[0]);
  ASSERT_EQ(i2c_init_fake.arg0_history[1], &i2c);
  ASSERT_EQ(i2c_init_fake.arg1_history[1], baud[1]);
}

// FAKE_VOID_FUNC(i2c_deinit, i2c_inst_t *);
TEST(PicoWrapper, i2c_deinit) {
  ::pico_driver::SDKWrapper pico;
  i2c_inst_t i2c = 17;
  const uint baud[] = {3, 100000};

  FFF_RESET_HISTORY();
  RESET_FAKE(i2c_deinit);

  pico.i2c_deinit(&i2c);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(i2c_deinit_fake.call_count, 1);

  // Check the data from test spy. Call order.
  ASSERT_EQ(fff.call_history[0], (void *)i2c_deinit);

  // Check the data from test spy. : Parameters.
  ASSERT_EQ(i2c_deinit_fake.arg0_history[0], &i2c);
}

// FAKE_VALUE_FUNC(int, i2c_read_blocking, i2c_inst_t *, uint8_t, uint8_t *,
//                  size_t, bool);
TEST(PicoWrapper, i2c_read_blocking) {
  ::pico_driver::SDKWrapper pico;
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
        // Check the data from test spy. : Parameters.
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
  ::pico_driver::SDKWrapper pico;
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
        // Check the data from test spy. : Parameters.
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

TEST(PicoWrapper, pio_sm_set_consecutive_pindirs) {
  ::pico_driver::SDKWrapper pico;
  PIO pio_array[] = {11, 13};
  uint sm_array[] = {17, 23};
  uint pins_base_array[] = {3, 5};
  uint pin_count_array[] = {2, 7};
  bool is_out_array[2] = {true, false};
  int myReturnVals_array[32] = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8,
                                1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8};

  FFF_RESET_HISTORY();
  RESET_FAKE(pio_sm_set_consecutive_pindirs);

  SET_RETURN_SEQ(pio_sm_set_consecutive_pindirs, myReturnVals_array,
                 std::size(myReturnVals_array));

  // Check wether return value is correct.
  int index = 0;
  for (auto &&pio : pio_array)
    for (auto &&sm : sm_array)
      for (auto &&pins : pins_base_array)
        for (auto &&pin_count : pin_count_array)
          for (auto &&is_out : is_out_array) {
            ASSERT_EQ(pico.pio_sm_set_consecutive_pindirs(pio, sm, pins,
                                                          pin_count, is_out),
                      myReturnVals_array[index]);
            index++;
          }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(pio_sm_set_consecutive_pindirs_fake.call_count, 32);

  // Check wether parameters are passed collectly.
  index = 0;
  for (auto &&pio : pio_array)
    for (auto &&sm : sm_array)
      for (auto &&pins : pins_base_array)
        for (auto &&pin_count : pin_count_array)
          for (auto &&is_out : is_out_array) {
            // Check the data from test spy. Call order.
            ASSERT_EQ(fff.call_history[index],
                      (void *)pio_sm_set_consecutive_pindirs);
            // Check the data from test spy. : Parameters.
            ASSERT_EQ(pio_sm_set_consecutive_pindirs_fake.arg0_history[index],
                      pio);
            ASSERT_EQ(pio_sm_set_consecutive_pindirs_fake.arg1_history[index],
                      sm);
            ASSERT_EQ(pio_sm_set_consecutive_pindirs_fake.arg2_history[index],
                      pins);
            ASSERT_EQ(pio_sm_set_consecutive_pindirs_fake.arg3_history[index],
                      pin_count);
            ASSERT_EQ(pio_sm_set_consecutive_pindirs_fake.arg4_history[index],
                      is_out);
            index++;
          }
}  // TEST(PicoWrapper, pio_sm_set_consecutive_pindirs)

TEST(PicoWrapper, pio_gpio_init) {
  ::pico_driver::SDKWrapper pico;
  PIO pio_array[] = {11, 13};
  uint pin_array[] = {3, 5};

  FFF_RESET_HISTORY();
  RESET_FAKE(pio_gpio_init);

  // Trial call.
  for (auto &&pio : pio_array)
    for (auto &&pin : pin_array) pico.pio_gpio_init(pio, pin);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(pio_gpio_init_fake.call_count, 4);

  // Check wether parameters are passed collectly.
  int index = 0;
  for (auto &&pio : pio_array)
    for (auto &&pin : pin_array) {
      // Check the data from test spy. Call order.
      ASSERT_EQ(fff.call_history[index], (void *)pio_gpio_init);
      // Check the data from test spy. : Parameters.
      ASSERT_EQ(pio_gpio_init_fake.arg0_history[index], pio);
      ASSERT_EQ(pio_gpio_init_fake.arg1_history[index], pin);
      index++;
    }
}  // TEST(PicoWrapper, pio_gpio_init)

TEST(PicoWrapper, sm_config_set_out_pins) {
  ::pico_driver::SDKWrapper pico;
  PIO pio_array[] = {11, 13};
  uint length_array[] = {3, 5};
  pio_sm_config config;

  FFF_RESET_HISTORY();
  RESET_FAKE(sm_config_set_out_pins);

  // Trial call.
  for (auto &&pio : pio_array)
    for (auto &&length : length_array)
      pico.sm_config_set_out_pins(&config, pio, length);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(sm_config_set_out_pins_fake.call_count, 4);

  // Check wether parameters are passed collectly.
  int index = 0;
  for (auto &&pio : pio_array)
    for (auto &&length : length_array) {
      // Check the data from test spy. Call order.
      ASSERT_EQ(fff.call_history[index], (void *)sm_config_set_out_pins);
      // Check the data from test spy. : Parameters.
      ASSERT_EQ(sm_config_set_out_pins_fake.arg0_history[index], &config);
      ASSERT_EQ(sm_config_set_out_pins_fake.arg1_history[index], pio);
      ASSERT_EQ(sm_config_set_out_pins_fake.arg2_history[index], length);
      index++;
    }
}  // TEST(PicoWrapper, sm_config_set_out_pins)

TEST(PicoWrapper, sm_config_set_in_pin_base) {
  ::pico_driver::SDKWrapper pico;
  uint base_array[] = {11, 13};
  pio_sm_config config;

  FFF_RESET_HISTORY();
  RESET_FAKE(sm_config_set_in_pin_base);

  // Trial call.
  for (auto &&base : base_array) pico.sm_config_set_in_pin_base(&config, base);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(sm_config_set_in_pin_base_fake.call_count, 2);

  // Check wether parameters are passed collectly.
  int index = 0;
  for (auto &&base : base_array) {
    // Check the data from test spy. Call order.
    ASSERT_EQ(fff.call_history[index], (void *)sm_config_set_in_pin_base);
    // Check the data from test spy. : Parameters.
    ASSERT_EQ(sm_config_set_in_pin_base_fake.arg0_history[index], &config);
    ASSERT_EQ(sm_config_set_in_pin_base_fake.arg1_history[index], base);
    index++;
  }
}  // TEST(PicoWrapper, sm_config_set_in_pin_base)

TEST(PicoWrapper, sm_config_set_in_pin_count) {
  ::pico_driver::SDKWrapper pico;
  PIO count_array[] = {11, 13};
  pio_sm_config config;

  FFF_RESET_HISTORY();
  RESET_FAKE(sm_config_set_in_pin_base);

  // Trial call.
  for (auto &&count : count_array)
    pico.sm_config_set_in_pin_count(&config, count);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(sm_config_set_in_pin_count_fake.call_count, 2);

  // Check wether parameters are passed collectly.
  int index = 0;
  for (auto &&count : count_array) {
    // Check the data from test spy. Call order.
    ASSERT_EQ(fff.call_history[index], (void *)sm_config_set_in_pin_count);
    // Check the data from test spy. : Parameters.
    ASSERT_EQ(sm_config_set_in_pin_count_fake.arg0_history[index], &config);
    ASSERT_EQ(sm_config_set_in_pin_count_fake.arg1_history[index], count);
    index++;
  }
}  // TEST(PicoWrapper, sm_config_set_in_pin_count)

TEST(PicoWrapper, clock_get_hz) {
  ::pico_driver::SDKWrapper pico;
  clock_handle_t clock_handle_array[] = {11, 13};
  uint32_t myReturnVals_array[] = {1, 2};

  FFF_RESET_HISTORY();
  RESET_FAKE(clock_get_hz);

  SET_RETURN_SEQ(clock_get_hz, myReturnVals_array,
                 std::size(myReturnVals_array));

  // Check whether call matches.
  uint index = 0;

  for (auto &&clock_handle : clock_handle_array) {
    ASSERT_EQ(pico.clock_get_hz(clock_handle), myReturnVals_array[index]);
    index++;
  }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(clock_get_hz_fake.call_count, 2);

  // Check wether parameters are passed collectly.
  index = 0;
  for (auto &&clock_handle : clock_handle_array) {
    // Check the data from test spy. Call order.
    ASSERT_EQ(fff.call_history[index], (void *)clock_get_hz);
    // Check the data from test spy. : Parameters.
    ASSERT_EQ(clock_get_hz_fake.arg0_history[index], clock_handle);
    index++;
  }
}  // TEST(PicoWrapper, clock_get_hz)

TEST(PicoWrapper, sm_config_set_clkdiv) {
  ::pico_driver::SDKWrapper pico;
  float div_array[] = {11.0, 13.0};
  pio_sm_config config;

  FFF_RESET_HISTORY();
  RESET_FAKE(sm_config_set_clkdiv);

  // Trial call.
  for (auto &&div : div_array) pico.sm_config_set_clkdiv(&config, div);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(sm_config_set_clkdiv_fake.call_count, 2);

  // Check wether parameters are passed collectly.
  int index = 0;
  for (auto &&div : div_array) {
    // Check the data from test spy. Call order.
    ASSERT_EQ(fff.call_history[index], (void *)sm_config_set_clkdiv);
    // Check the data from test spy. : Parameters.
    ASSERT_EQ(sm_config_set_clkdiv_fake.arg0_history[index], &config);
    ASSERT_EQ(sm_config_set_clkdiv_fake.arg1_history[index], div);
    index++;
  }
}  // TEST(PicoWrapper, sm_config_set_clkdiv)

TEST(PicoWrapper, sm_config_set_in_shift) {
  ::pico_driver::SDKWrapper pico;
  pio_sm_config config;

  bool shift_right_array[] = {true, false};
  bool autopush_array[] = {true, false};
  uint push_threshold_array[] = {3, 5};

  FFF_RESET_HISTORY();
  RESET_FAKE(sm_config_set_in_shift);

  // Trial call.
  for (auto &&shift_right : shift_right_array)
    for (auto &&autopush : autopush_array)
      for (auto &&push_threshold : push_threshold_array)
        pico.sm_config_set_in_shift(&config, shift_right, autopush,
                                    push_threshold);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(sm_config_set_in_shift_fake.call_count, 8);

  // Check wether parameters are passed collectly.
  int index = 0;
  for (auto &&shift_right : shift_right_array)
    for (auto &&autopush : autopush_array)
      for (auto &&push_threshold : push_threshold_array) {
        // Check the data from test spy. Call order.
        ASSERT_EQ(fff.call_history[index], (void *)sm_config_set_in_shift);
        // Check the data from test spy. : Parameters.
        ASSERT_EQ(sm_config_set_in_shift_fake.arg0_history[index], &config);
        ASSERT_EQ(sm_config_set_in_shift_fake.arg1_history[index], shift_right);
        ASSERT_EQ(sm_config_set_in_shift_fake.arg2_history[index], autopush);
        ASSERT_EQ(sm_config_set_in_shift_fake.arg3_history[index],
                  push_threshold);
        index++;
      }
}  // TEST(PicoWrapper, sm_config_set_in_shift)

TEST(PicoWrapper, sm_config_set_out_shift) {
  ::pico_driver::SDKWrapper pico;
  pio_sm_config config;

  bool shift_right_array[] = {false, true};
  bool autopull_array[] = {false, true};
  uint push_threshold_array[] = {5, 3};

  FFF_RESET_HISTORY();
  RESET_FAKE(sm_config_set_out_shift);

  // Trial call.
  for (auto &&shift_right : shift_right_array)
    for (auto &&autopull : autopull_array)
      for (auto &&push_threshold : push_threshold_array)
        pico.sm_config_set_out_shift(&config, shift_right, autopull,
                                     push_threshold);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(sm_config_set_out_shift_fake.call_count, 8);

  // Check wether parameters are passed collectly.
  int index = 0;
  for (auto &&shift_right : shift_right_array)
    for (auto &&autopull : autopull_array)
      for (auto &&push_threshold : push_threshold_array) {
        // Check the data from test spy. Call order.
        ASSERT_EQ(fff.call_history[index], (void *)sm_config_set_out_shift);
        // Check the data from test spy. : Parameters.
        ASSERT_EQ(sm_config_set_out_shift_fake.arg0_history[index], &config);
        ASSERT_EQ(sm_config_set_out_shift_fake.arg1_history[index],
                  shift_right);
        ASSERT_EQ(sm_config_set_out_shift_fake.arg2_history[index], autopull);
        ASSERT_EQ(sm_config_set_out_shift_fake.arg3_history[index],
                  push_threshold);
        index++;
      }
}  // TEST(PicoWrapper, sm_config_set_out_shift)

TEST(PicoWrapper, pio_sm_init) {
  ::pico_driver::SDKWrapper pico;
  pio_sm_config config;

  PIO pio_array[] = {11, 13};
  uint sm_array[] = {17, 23};
  uint initial_pc_array[] = {3, 5};
  int myReturnVals_array[32] = {1, 2, 3, 4, 5, 6, 7, 8};

  FFF_RESET_HISTORY();
  RESET_FAKE(pio_sm_init);

  SET_RETURN_SEQ(pio_sm_init, myReturnVals_array,
                 std::size(myReturnVals_array));

  // Check wether return value is correct.
  int index = 0;
  for (auto &&pio : pio_array)
    for (auto &&sm : sm_array)
      for (auto &&initial_pc : initial_pc_array) {
        ASSERT_EQ(pico.pio_sm_init(pio, sm, initial_pc, &config),
                  myReturnVals_array[index]);
        index++;
      }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(pio_sm_init_fake.call_count, 8);

  // Check wether parameters are passed collectly.
  index = 0;
  for (auto &&pio : pio_array)
    for (auto &&sm : sm_array)
      for (auto &&initial_pc : initial_pc_array) {
        // Check the data from test spy. Call order.
        ASSERT_EQ(fff.call_history[index], (void *)pio_sm_init);
        // Check the data from test spy. : Parameters.
        ASSERT_EQ(pio_sm_init_fake.arg0_history[index], pio);
        ASSERT_EQ(pio_sm_init_fake.arg1_history[index], sm);
        ASSERT_EQ(pio_sm_init_fake.arg2_history[index], initial_pc);
        ASSERT_EQ(pio_sm_init_fake.arg3_history[index], &config);
        index++;
      }
}  // TEST(PicoWrapper, pio_sm_init)

TEST(PicoWrapper, pio_sm_put) {
  ::pico_driver::SDKWrapper pico;
  pio_sm_config config;

  PIO pio_array[] = {1, 3};
  uint sm_array[] = {5, 7};
  uint32_t data_array[] = {11, 13};

  FFF_RESET_HISTORY();
  RESET_FAKE(pio_sm_put);

  // Trial call.
  for (auto &&pio : pio_array)
    for (auto &&sm : sm_array)
      for (auto &&data : data_array) pico.pio_sm_put(pio, sm, data);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(pio_sm_put_fake.call_count, 8);

  // Check wether parameters are passed collectly.
  int index = 0;
  for (auto &&pio : pio_array)
    for (auto &&sm : sm_array)
      for (auto &&data : data_array) {
        // Check the data from test spy. Call order.
        ASSERT_EQ(fff.call_history[index], (void *)pio_sm_put);
        // Check the data from test spy. : Parameters.
        ASSERT_EQ(pio_sm_put_fake.arg0_history[index], pio);
        ASSERT_EQ(pio_sm_put_fake.arg1_history[index], sm);
        ASSERT_EQ(pio_sm_put_fake.arg2_history[index], data);
        index++;
      }
}  // TEST(PicoWrapper, pio_sm_put)

TEST(PicoWrapper, pio_sm_set_enabled) {
  ::pico_driver::SDKWrapper pico;
  pio_sm_config config;

  PIO pio_array[] = {1, 3};
  uint sm_array[] = {5, 7};
  bool enabled_array[] = {true, false};

  FFF_RESET_HISTORY();
  RESET_FAKE(pio_sm_set_enabled);

  // Trial call.
  for (auto &&pio : pio_array)
    for (auto &&sm : sm_array)
      for (auto &&enabled : enabled_array)
        pico.pio_sm_set_enabled(pio, sm, enabled);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(pio_sm_set_enabled_fake.call_count, 8);

  // Check wether parameters are passed collectly.
  int index = 0;
  for (auto &&pio : pio_array)
    for (auto &&sm : sm_array)
      for (auto &&enabled : enabled_array) {
        // Check the data from test spy. Call order.
        ASSERT_EQ(fff.call_history[index], (void *)pio_sm_set_enabled);
        // Check the data from test spy. : Parameters.
        ASSERT_EQ(pio_sm_set_enabled_fake.arg0_history[index], pio);
        ASSERT_EQ(pio_sm_set_enabled_fake.arg1_history[index], sm);
        ASSERT_EQ(pio_sm_set_enabled_fake.arg2_history[index], enabled);
        index++;
      }
}  // TEST(PicoWrapper, pio_sm_set_enabled)

TEST(PicoWrapper, pio_add_program) {
  ::pico_driver::SDKWrapper pico;

  PIO pio_array[] = {11, 13};
  pio_program_t dummy_program;
  int myReturnVals_array[32] = {1, 2};

  FFF_RESET_HISTORY();
  RESET_FAKE(pio_add_program);

  SET_RETURN_SEQ(pio_add_program, myReturnVals_array,
                 std::size(myReturnVals_array));

  // Check wether return value is correct.
  int index = 0;
  for (auto &&pio : pio_array) {
    ASSERT_EQ(pico.pio_add_program(pio, &dummy_program),
              myReturnVals_array[index]);
    index++;
  }

  // Check the data from test spy. How many time called?
  ASSERT_EQ(pio_add_program_fake.call_count, 2);

  // Check wether parameters are passed collectly.
  index = 0;
  for (auto &&pio : pio_array) {
    // Check the data from test spy. Call order.
    ASSERT_EQ(fff.call_history[index], (void *)pio_add_program);
    // Check the data from test spy. : Parameters.
    ASSERT_EQ(pio_add_program_fake.arg0_history[index], pio);
    ASSERT_EQ(pio_add_program_fake.arg1_history[index], &dummy_program);
    index++;
  }
}  // TEST(PicoWrapper, pio_add_program)
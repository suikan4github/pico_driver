
//    "Copyright 2024 Seiichi Horie
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
FAKE_VALUE_FUNC(uint, i2c_init, i2c_inst_t*, uint);
FAKE_VALUE_FUNC(int, i2c_read_blocking, i2c_inst_t*, uint8_t, uint8_t*, size_t,
                bool);
FAKE_VALUE_FUNC(int, i2c_write_blocking, i2c_inst_t*, uint8_t, const uint8_t*,
                size_t, bool);

// The header file of the library to test.
#include "../samples/interrupt_sample/pico_driver/pico_wrapper.hpp"
// The cpp file of the library to test.
#include "../samples/interrupt_sample/pico_driver/pico_wrapper.cpp"

TEST(PolygonProtter, Rectangle) {
  /*
  sample::PolygonPlotter poly;

  int x_pos = 3;
  int y_pos = 5;
  int size = 100;

  sample::GetPos_fake.custom_fake = &GetPosStub;

  poly.Rectangle(x_pos, y_pos, size);

  // Check the data from test spy. How many time called?
  ASSERT_EQ(sample::GetPos_fake.call_count, 1);
  ASSERT_EQ(sample::SetPos_fake.call_count, 0);
  ASSERT_EQ(sample::DrawRelative_fake.call_count, 4);

  // Check the data from test spy. Call order.
  ASSERT_EQ(fff.call_history[0], (void *)sample::GetPos);
  ASSERT_EQ(fff.call_history[1], (void *)sample::DrawRelative);
  */
}

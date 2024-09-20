#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <random>

#include "gpiobasic.hpp"
#include "sdkwrapper.hpp"

class GpioBasicTest : public ::testing::Test {
 protected:
  ::pico_driver::MockSdkWrapper sdk_;
  unsigned int gpio_pin_;  // GPIO pin number.
  ::pico_driver::GpioBasic* gpio_under_test_;

  virtual void SetUp() {
    std::random_device rng;
    gpio_pin_ = rng();
    EXPECT_CALL(sdk_, gpio_init(gpio_pin_)).Times(1);
    gpio_under_test_ = new ::pico_driver::GpioBasic(sdk_, gpio_pin_);
  }

  virtual void TearDown() {
    EXPECT_CALL(sdk_, gpio_deinit(gpio_pin_)).Times(1);
    delete (gpio_under_test_);
  }
};

// -----------------------------------------------------------------
//
//                          Constructor and Deconstructor ()
//
// -----------------------------------------------------------------

TEST(GpioBasic, ConstructorDeconstructor) {
  ::pico_driver::MockSdkWrapper sdk;
  std::random_device rng;

  const unsigned int pin = rng();  // GPIO pin number.

  using ::testing::InSequence;
  {
    InSequence dummy;
    EXPECT_CALL(sdk, gpio_init(pin));
    EXPECT_CALL(sdk, gpio_deinit(pin));
  }

  ::pico_driver::GpioBasic* gpio = new ::pico_driver::GpioBasic(sdk, pin);
  delete (gpio);
}  // TEST(GpioBasic, ConstructorDeconstructor)

// -----------------------------------------------------------------
//
//                          Constructor and Deconstructor ()
//
// -----------------------------------------------------------------

TEST_F(GpioBasicTest, foo) {}  // TEST_F(GpioBasicTest, foo)

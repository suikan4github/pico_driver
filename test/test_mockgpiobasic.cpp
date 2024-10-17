/*
 * Test the MockGpioBasic class.
 * Only constructor is tested.
 */

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "gpio/gpiobasic.hpp"
#include "sdk/sdkwrapper.hpp"

using ::testing::_;
class MockGpioBasicTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    EXPECT_CALL(sdk_, gpio_init(_));
    gpio = new rpp_driver::MockGpioBasic(sdk_);
  }

  virtual void TearDown() {
    EXPECT_CALL(sdk_, gpio_deinit(_));
    delete gpio;
  }

  ::rpp_driver::MockSdkWrapper sdk_;
  ::rpp_driver::MockGpioBasic *gpio;
};

/*
 * In this test case, we test teh MockGpioBasic is surely able to compile.
 * So, none of the other methods are tested.
 */
TEST_F(MockGpioBasicTest, Constructor) {}
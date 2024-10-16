/*
 * Test the MockGpioBasic class.
 * Only constructor is tested.
 */

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "gpiobasic.hpp"
#include "sdkwrapper.hpp"

class MockGpioBasicTest : public ::testing::Test {
 protected:
  virtual void SetUp() { gpio = new rpp_driver::MockGpioBasic(sdk_); }

  virtual void TearDown() { delete gpio; }

  ::rpp_driver::MockSdkWrapper sdk_;
  ::rpp_driver::MockGpioBasic *gpio;
};

/*
 * In this test case, we test teh MockGpioBasic is surely able to compile.
 * So, none of the other methods are tested.
 */
TEST_F(MockGpioBasicTest, constructor) {}
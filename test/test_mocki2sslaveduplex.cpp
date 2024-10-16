/*
 * Test the MockI2sSlaveDuplex class.
 * Only constructor is tested.
 */

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "i2sslaveduplex.hpp"
#include "sdkwrapper.hpp"

class MockI2sSlaveDuplexTest : public ::testing::Test {
 protected:
  virtual void SetUp() { i2s = new rpp_driver::MockI2sSlaveDuplex(sdk_); }

  virtual void TearDown() { delete i2s; }

  ::rpp_driver::MockSdkWrapper sdk_;
  ::rpp_driver::MockI2sSlaveDuplex *i2s;
};  // MockI2sSlaveDuplexTest

/*
 * In this test case, we test teh MockI2sSlaveDuplex is surely able to
 * compile. So, none of the other methods are tested.
 */
TEST_F(MockI2sSlaveDuplexTest, Constructor) {}
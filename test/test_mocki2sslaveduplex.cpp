/*
 * Test the MockI2sSlaveDuplex class.
 * Only constructor is tested.
 */

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "i2sslaveduplex.hpp"
#include "sdkwrapper.hpp"

using ::testing::_;
class MockI2sSlaveDuplexTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    EXPECT_CALL(sdk_, pio_claim_unused_sm(_, _));
    i2s = new rpp_driver::MockI2sSlaveDuplex(sdk_);
  }

  virtual void TearDown() {
    EXPECT_CALL(sdk_, pio_sm_unclaim(_, _));
    delete i2s;
  }

  ::rpp_driver::MockSdkWrapper sdk_;
  ::rpp_driver::MockI2sSlaveDuplex *i2s;
};  // MockI2sSlaveDuplexTest

/*
 * In this test case, we test teh MockI2sSlaveDuplex is surely able to
 * compile. So, none of the other methods are tested.
 */
TEST_F(MockI2sSlaveDuplexTest, Constructor) {}
/*
 * Test the MockAdau1361 class.
 * Only constructor is tested.
 */

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "codec/adau1361.hpp"
#include "sdk/sdkwrapper.hpp"

using ::testing::_;
class MockAdau1361Test : public ::testing::Test {
 protected:
  virtual void SetUp() {
    codec_lower_ = new ::rpp_driver::MockAdau1361Lower(i2c_);
    codec_ = new ::rpp_driver::MockAdau1361(*codec_lower_);
  }

  virtual void TearDown() {
    delete codec_;
    delete codec_lower_;
  }

  ::rpp_driver::MockI2cMasterInterface i2c_;
  ::rpp_driver::MockAdau1361Lower *codec_lower_;
  ::rpp_driver::Adau1361 *codec_;
};  // MockAdau1361Test

/*
 * In this test case, we test teh MockAdau1361 is surely able to
 * compile. So, none of the other methods are tested.
 */
TEST_F(MockAdau1361Test, Constructor) {}
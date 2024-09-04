#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "duplexslavei2s.hpp"
#include "sdkwrapper.hpp"

class DuplexSlaveI2STest : public ::testing::Test {
 protected:
  ::pico_driver::MockSDKWrapper sdk_;
  PIO pio_ = 23;
  uint32_t sm_ = 3;
  uint pin_base_ = 53;
  ::pico_driver::DuplexSlaveI2S *i2s_;
};

// Test 4 parameters constructor.
TEST_F(DuplexSlaveI2STest, Constructor4) {
  using ::testing::_;

  EXPECT_CALL(sdk_, pio_sm_claim(pio_, sm_));
  EXPECT_CALL(sdk_, pio_claim_unused_sm(_, _)).Times(0);

  i2s_ = new ::pico_driver::DuplexSlaveI2S(sdk_, pio_, sm_, pin_base_);

  delete (i2s_);

}  // TEST_F(DuplexSlaveI2STest, Constructor)

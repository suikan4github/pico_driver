#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <random>

#include "duplexslavei2s.hpp"
#include "sdkwrapper.hpp"

class DuplexSlaveI2STest : public ::testing::Test {
 protected:
  std::random_device rng;
  ::pico_driver::MockSDKWrapper sdk_;
  PIO pio_ = rng();
  uint32_t sm_ = rng();
  uint pin_base_ = rng();
  ::pico_driver::DuplexSlaveI2S *i2s_;
};

// Test 4 parameters constructor.
TEST_F(DuplexSlaveI2STest, Constructor4) {
  using ::testing::_;

  EXPECT_CALL(sdk_, pio_sm_claim(pio_, sm_));
  EXPECT_CALL(sdk_, pio_claim_unused_sm(_, _)).Times(0);

  i2s_ = new ::pico_driver::DuplexSlaveI2S(sdk_, pio_, sm_, pin_base_);

  // must be muched with Externally given SM.
  EXPECT_EQ(sm_, i2s_->GetStateMachine());

  delete (i2s_);

}  // TEST_F(DuplexSlaveI2STest, Constructor)

// Test 3 parameters constructor.
TEST_F(DuplexSlaveI2STest, Constructor3) {
  using ::testing::_;
  using ::testing::Return;
  const uint ret_val = 3;

  EXPECT_CALL(sdk_, pio_sm_claim(_, _)).Times(0);
  EXPECT_CALL(sdk_, pio_claim_unused_sm(pio_, true)).WillOnce(Return(ret_val));

  i2s_ = new ::pico_driver::DuplexSlaveI2S(sdk_, pio_, pin_base_);

  // must be muched with Internally Registered SM.
  EXPECT_EQ(ret_val, i2s_->GetStateMachine());

  delete (i2s_);

}  // TEST_F(DuplexSlaveI2STest, Constructor3)

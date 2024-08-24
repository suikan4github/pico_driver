#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "adau1361.hpp"
#include "adau1361lower.hpp"
#include "i2cmasterinterface.hpp"

class Adau1361Test : public ::testing::Test {
 protected:
  virtual void SetUp() {
    codec_lower_ = new MockAdau1361Lower(i2c_);
    codec_ = new Adau1361(48000, 12000000, *codec_lower_);
  }

  virtual void TearDown() {
    delete codec_;
    delete codec_lower_;
  }

  MockI2CMasterInterface i2c_;
  MockAdau1361Lower *codec_lower_;
  Adau1361 *codec_;
};

// -----------------------------------------------------------------
//
//                          SetGain()
//
// -----------------------------------------------------------------

TEST_F(Adau1361Test, SetGain_LineInput) {
  using ::testing::_;
  using ::testing::InSequence;
  // Check required function call order.
  {
    InSequence dummy;

    EXPECT_CALL(*codec_lower_, SetLineInputGain(2.0, 3.0, true));
    EXPECT_CALL(*codec_lower_, SetLineInputGain(2.0, 3.0, false));
    EXPECT_CALL(*codec_lower_, SetLineInputGain(3.0, 2.0, false));
  }
  // Check illegal func call is not existing.
  EXPECT_CALL(*codec_lower_, SetLineOutputGain(_, _, _)).Times(0);
  EXPECT_CALL(*codec_lower_, SetAuxInputGain(_, _, _)).Times(0);
  EXPECT_CALL(*codec_lower_, SetHpOutputGain(_, _, _)).Times(0);

  // Test run.
  codec_->SetGain(Adau1361::LineInput, 2.0, 3.0);
  codec_->Mute(Adau1361::LineInput, false);
  codec_->SetGain(Adau1361::LineInput, 3.0, 2.0);

}  // SetGain_LineInput

TEST_F(Adau1361Test, SetGain_LineOutput) {
  using ::testing::_;
  using ::testing::InSequence;
  {
    InSequence dummy;

    EXPECT_CALL(*codec_lower_, SetLineOutputGain(2.0, 3.0, true));
    EXPECT_CALL(*codec_lower_, SetLineOutputGain(2.0, 3.0, false));
    EXPECT_CALL(*codec_lower_, SetLineOutputGain(3.0, 2.0, false));
  }
  // Check illegal func call is not existing.
  EXPECT_CALL(*codec_lower_, SetLineInputGain(_, _, _)).Times(0);
  EXPECT_CALL(*codec_lower_, SetAuxInputGain(_, _, _)).Times(0);
  EXPECT_CALL(*codec_lower_, SetHpOutputGain(_, _, _)).Times(0);

  // Test run
  codec_->SetGain(Adau1361::LineOutput, 2.0, 3.0);
  codec_->Mute(Adau1361::LineOutput, false);
  codec_->SetGain(Adau1361::LineOutput, 3.0, 2.0);
}  // SetGain_LineOutput

TEST_F(Adau1361Test, SetGain_AuxInput) {
  using ::testing::_;
  using ::testing::InSequence;
  {
    InSequence dummy;

    EXPECT_CALL(*codec_lower_, SetAuxInputGain(2.0, 3.0, true));
    EXPECT_CALL(*codec_lower_, SetAuxInputGain(2.0, 3.0, false));
    EXPECT_CALL(*codec_lower_, SetAuxInputGain(3.0, 2.0, false));
  }
  // Check illegal func call is not existing.
  EXPECT_CALL(*codec_lower_, SetLineInputGain(_, _, _)).Times(0);
  EXPECT_CALL(*codec_lower_, SetLineOutputGain(_, _, _)).Times(0);
  EXPECT_CALL(*codec_lower_, SetHpOutputGain(_, _, _)).Times(0);

  // Test run
  codec_->SetGain(Adau1361::AuxInput, 2.0, 3.0);
  codec_->Mute(Adau1361::AuxInput, false);
  codec_->SetGain(Adau1361::AuxInput, 3.0, 2.0);
}  // SetGain_AuxInput

TEST_F(Adau1361Test, SetGain_HeadhphoneOutput) {
  using ::testing::_;
  using ::testing::InSequence;
  {
    InSequence dummy;

    EXPECT_CALL(*codec_lower_, SetHpOutputGain(2.0, 3.0, true));
    EXPECT_CALL(*codec_lower_, SetHpOutputGain(2.0, 3.0, false));
    EXPECT_CALL(*codec_lower_, SetHpOutputGain(3.0, 2.0, false));
  }
  // Check illegal func call is not existing.
  EXPECT_CALL(*codec_lower_, SetLineInputGain(_, _, _)).Times(0);
  EXPECT_CALL(*codec_lower_, SetLineOutputGain(_, _, _)).Times(0);
  EXPECT_CALL(*codec_lower_, SetAuxInputGain(_, _, _)).Times(0);

  // Test run
  codec_->SetGain(Adau1361::HeadphoneOutput, 2.0, 3.0);
  codec_->Mute(Adau1361::HeadphoneOutput, false);
  codec_->SetGain(Adau1361::HeadphoneOutput, 3.0, 2.0);
}  // SetGain_HeadhphoneOutput

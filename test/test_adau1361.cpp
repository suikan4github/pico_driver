#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "adau1361.hpp"
#include "adau1361lower.hpp"
#include "i2cmasterinterface.hpp"

// -----------------------------------------------------------------
//
//                          SetGain()
//
// -----------------------------------------------------------------

TEST(Adau1361, SetGain_LineInput) {
  MockI2CMasterInterface i2c;
  MockAdau1361Lower codec_lower(i2c);
  Adau1361 codec(48000, 12000000, codec_lower);

  using ::testing::_;
  using ::testing::InSequence;
  // Check required function call order.
  {
    InSequence dummy;

    EXPECT_CALL(codec_lower, SetLineInputGain(2.0, 3.0, true));
    EXPECT_CALL(codec_lower, SetLineInputGain(2.0, 3.0, false));
    EXPECT_CALL(codec_lower, SetLineInputGain(3.0, 2.0, false));
  }
  // Check illegal func call is not existing.
  EXPECT_CALL(codec_lower, SetLineOutputGain(_, _, _)).Times(0);
  EXPECT_CALL(codec_lower, SetAuxInputGain(_, _, _)).Times(0);
  EXPECT_CALL(codec_lower, SetHpOutputGain(_, _, _)).Times(0);

  // Test run.
  codec.SetGain(Adau1361::LineInput, 2.0, 3.0);
  codec.Mute(Adau1361::LineInput, false);
  codec.SetGain(Adau1361::LineInput, 3.0, 2.0);

}  // SetGain_LineInput

TEST(Adau1361, SetGain_LineOutput) {
  MockI2CMasterInterface i2c;
  MockAdau1361Lower codec_lower(i2c);
  Adau1361 codec(48000, 12000000, codec_lower);

  using ::testing::_;
  using ::testing::InSequence;
  {
    InSequence dummy;

    EXPECT_CALL(codec_lower, SetLineOutputGain(2.0, 3.0, true));
    EXPECT_CALL(codec_lower, SetLineOutputGain(2.0, 3.0, false));
    EXPECT_CALL(codec_lower, SetLineOutputGain(3.0, 2.0, false));
  }
  // Check illegal func call is not existing.
  EXPECT_CALL(codec_lower, SetLineInputGain(_, _, _)).Times(0);
  EXPECT_CALL(codec_lower, SetAuxInputGain(_, _, _)).Times(0);
  EXPECT_CALL(codec_lower, SetHpOutputGain(_, _, _)).Times(0);

  // Test run
  codec.SetGain(Adau1361::LineOutput, 2.0, 3.0);
  codec.Mute(Adau1361::LineOutput, false);
  codec.SetGain(Adau1361::LineOutput, 3.0, 2.0);
}  // SetGain_LineOutput

TEST(Adau1361, SetGain_AuxInput) {
  MockI2CMasterInterface i2c;
  MockAdau1361Lower codec_lower(i2c);
  Adau1361 codec(48000, 12000000, codec_lower);

  using ::testing::_;
  using ::testing::InSequence;
  {
    InSequence dummy;

    EXPECT_CALL(codec_lower, SetAuxInputGain(2.0, 3.0, true));
    EXPECT_CALL(codec_lower, SetAuxInputGain(2.0, 3.0, false));
    EXPECT_CALL(codec_lower, SetAuxInputGain(3.0, 2.0, false));
  }
  // Check illegal func call is not existing.
  EXPECT_CALL(codec_lower, SetLineInputGain(_, _, _)).Times(0);
  EXPECT_CALL(codec_lower, SetLineOutputGain(_, _, _)).Times(0);
  EXPECT_CALL(codec_lower, SetHpOutputGain(_, _, _)).Times(0);

  // Test run
  codec.SetGain(Adau1361::AuxInput, 2.0, 3.0);
  codec.Mute(Adau1361::AuxInput, false);
  codec.SetGain(Adau1361::AuxInput, 3.0, 2.0);
}  // SetGain_AuxInput

TEST(Adau1361, SetGain_HeadhphoneOutput) {
  MockI2CMasterInterface i2c;
  MockAdau1361Lower codec_lower(i2c);
  Adau1361 codec(48000, 12000000, codec_lower);

  using ::testing::_;
  using ::testing::InSequence;
  {
    InSequence dummy;

    EXPECT_CALL(codec_lower, SetHpOutputGain(2.0, 3.0, true));
    EXPECT_CALL(codec_lower, SetHpOutputGain(2.0, 3.0, false));
    EXPECT_CALL(codec_lower, SetHpOutputGain(3.0, 2.0, false));
  }
  // Check illegal func call is not existing.
  EXPECT_CALL(codec_lower, SetLineInputGain(_, _, _)).Times(0);
  EXPECT_CALL(codec_lower, SetLineOutputGain(_, _, _)).Times(0);
  EXPECT_CALL(codec_lower, SetAuxInputGain(_, _, _)).Times(0);

  // Test run
  codec.SetGain(Adau1361::HeadphoneOutput, 2.0, 3.0);
  codec.Mute(Adau1361::HeadphoneOutput, false);
  codec.SetGain(Adau1361::HeadphoneOutput, 3.0, 2.0);
}  // SetGain_HeadhphoneOutput

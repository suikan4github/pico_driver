#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "adau1361.hpp"
#include "adau1361lower.hpp"

class Adau1361Test : public ::testing::Test {
 protected:
  virtual void SetUp() { codec_ = new Adau1361(48000, 12000000, codec_lower_); }

  MockAdau1361Lower codec_lower_;
  Adau1361 *codec_;
};

typedef Adau1361Test Adau1361DeathTest;

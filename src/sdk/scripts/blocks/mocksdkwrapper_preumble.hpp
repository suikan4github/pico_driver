/*
 * This file is intended to be read from the sdkwrapper.hpp.
 * The user program must not include this file.
 */

#if __has_include(<gmock/gmock.h>)
// GCOVR_EXCL_START
class MockSdkWrapper : public SdkWrapper {
 public:
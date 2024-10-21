# Change log
History of the project development

## [Unreleased] yyyy-mm-zz
The issue #16 changes its public member function. But it is referred internally from ::rpp_driver::Adau1361 class. Not called by user program. Then, the major version number is not needed to change. 

The issue #12 removed public class I2cMasterInterface. But it is referred internal only for Unit test. So, the major version number is not needed to change. 

### Added
- [Issue #13](https://github.com/suikan4github/rpp_driver/issues/13)  Exclude Mock definition from the GCov coverage. 
### Changed
- [Issue #10](https://github.com/suikan4github/rpp_driver/issues/10) Cover APIs of the Raspberry Pi Pico SDK.
- [Issue #15](https://github.com/suikan4github/rpp_driver/issues/15) Remove the redundant parameter check code from ConfigureSRC() 
- [Issue #16](https://github.com/suikan4github/rpp_driver/issues/16) Change the member function name from ConfigureSRC() to ConfigureSrc().
- [Issue #21](https://github.com/suikan4github/rpp_driver/issues/21) Add usege of the mock for each class description.
- [Issue #22](https://github.com/suikan4github/rpp_driver/issues/22) Refactor the test_i2cmaster.cpp to use the fixture.
### Deprecated
- [Issue #12](https://github.com/suikan4github/rpp_driver/issues/12)  Is I2cMasterInterface needed?  
### Removed
### Fixed
- [Issue #11](https://github.com/suikan4github/rpp_driver/issues/11) Fails to compile in MSVC. 
- [Issue #14](https://github.com/suikan4github/rpp_driver/issues/14)  Clean up Internal include directive.   
- [Issue #17](https://github.com/suikan4github/rpp_driver/issues/17) The mock of the GpioBasic has the wrong definition. 
- [Issue #18](https://github.com/suikan4github/rpp_driver/issues/18) The constructor of the MockI2sSlaveDuplex.hpp is missing.
- [Issue #19](https://github.com/suikan4github/rpp_driver/issues/19) The Mock of the rpp_driver::Adau1361 is missing.
- [Issue #20](https://github.com/suikan4github/rpp_driver/issues/20) Redundant section in README.md 
- [Issue #23](https://github.com/suikan4github/rpp_driver/issues/23) Make SdkWrapper member functions and SDK API Stub conditional. 
### Security
### Known Issue

## [v1.0.0] 2024-10-03
### Release note. 
First official release of the rpp_driver ( Raspberry Pi Pico Driver) class library. This release contains : 
- a limited SDK Wrapper class for the basic operation. 
- a basic GPIO class.
- a basic I2C master class.  
- a duplex slave I2S class. 
- an ADAU1361 audio codec class.

### Added
### Changed
- [Issue #4](https://github.com/suikan4github/rpp_driver/issues/4) Add gcov support for x86 build. 
- [Issue #5](https://github.com/suikan4github/rpp_driver/issues/5) Migrate action from hand-made to marketplace.
- [Issue #6](https://github.com/suikan4github/rpp_driver/issues/6) Add comment string to the assertion.
- [Issue #7](https://github.com/suikan4github/rpp_driver/issues/7) Remove default clause of adau1361.cpp and use -Wswitch-enum to detect the coverage error.
- [Issue #8](https://github.com/suikan4github/rpp_driver/issues/8) Remove duplicated assertions in the adau1361lower.cpp.

### Deprecated
### Removed
### Fixed
- [Issue #3](https://github.com/suikan4github/rpp_driver/issues/3) Doxygen warning message. 
### Security
### Known Issue

## [v0.9.0] 2024-09-28
Pre-release version. 

[Unreleased]: https://github.com/suikan4github/rpp_driver/compare/v1.0.0...develop
[v1.0.0]: https://github.com/suikan4github/rpp_driver/compare/v0.9.0...v1.0.0
[v0.9.0]: https://github.com/suikan4github/rpp_driver/compare/v0.0.0...v0.9.0

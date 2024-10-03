# Change log
History of the project development

## [Unreleased] yyyy-mm-zz
### Added
### Changed
### Deprecated
### Removed
### Fixed
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

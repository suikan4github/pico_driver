#!/bin/sh

# usage : 
# generate_body hardware|pico module-name
#
# example :
# generate_body hardware uart

MODULE_PREFIX=$1
MODULE_NAME=$2
MODULE="$MODULE_PREFIX"_"$MODULE_NAME"

# Scratch pad files. 
TEMPLIST=$(mktemp).h

# Composit the source file path in the Raspberry Pi Pico SDK from the module prefix and module name. 
# We assume PICO_SDK_PATH is correctly set. 
TARGET="${PICO_SDK_PATH%/}/src/rp2_common/${MODULE_PREFIX}_${MODULE_NAME}/include/${MODULE_PREFIX}/${MODULE_NAME}.h"

# If the file is not in the rp2_common, set it should be in common
if [ ! -e "$TARGET" ]; then
  TARGET="${PICO_SDK_PATH%/}/src/common/${MODULE_PREFIX}_${MODULE_NAME}/include/${MODULE_PREFIX}/${MODULE_NAME}.h"
fi

if [ "$MODULE_PREFIX" = "pico" ] && [ "$MODULE_NAME" = "sync" ]; then
  # In this case, it should be pico_sync

  # pico_sync/include/pico_critical_section.h
  TARGET="${PICO_SDK_PATH%/}/src/common/${MODULE_PREFIX}_${MODULE_NAME}/include/${MODULE_PREFIX}/critical_section.h"
  # for monitoring
  echo "Target : $TARGET"
  # Format the header file. 
  ./format_header.sh < "$TARGET" > "$TEMPLIST"

  # pico_sync/include/pico_critical_section.h
  TARGET="${PICO_SDK_PATH%/}/src/common/${MODULE_PREFIX}_${MODULE_NAME}/include/${MODULE_PREFIX}/mutex.h"
  # for monitoring
  echo "Target : $TARGET"
  # Format the header file. 
  ./format_header.sh < "$TARGET" >> "$TEMPLIST"

  # pico_sync/include/pico_critical_section.h
  TARGET="${PICO_SDK_PATH%/}/src/common/${MODULE_PREFIX}_${MODULE_NAME}/include/${MODULE_PREFIX}/sem.h"
  # for monitoring
  echo "Target : $TARGET"
  # Format the header file. 
  ./format_header.sh < "$TARGET" >> "$TEMPLIST"
else
  # for monitoring
  echo "Target : $TARGET"

  # Format the header file. 
  ./format_header.sh < "$TARGET" > "$TEMPLIST"

fi

# for debug out.
cat "$TEMPLIST" >> debug.hpp

# Generate include headers. 
echo "#if __has_include(<${MODULE_PREFIX}/${MODULE_NAME}.h>) || __has_include(<gmock/gmock.h>)" >> output/pico_sdk_headers.h
echo "#include <${MODULE_PREFIX}/${MODULE_NAME}.h>"  >> output/pico_sdk_headers.h
echo "#endif //  __has_include(<${MODULE_PREFIX}/${MODULE_NAME}.h>) || __has_include(<gmock/gmock.h>)" >> output/pico_sdk_headers.h
echo "" >> output/pico_sdk_headers.h

# Generate the class delcaration. 
# add "virtual" and ";" to be a right function prototype. 
echo "#if __has_include(<${MODULE_PREFIX}/${MODULE_NAME}.h>) || __has_include(<gmock/gmock.h>)" >> output/sdkwrapper.hpp
sed -e 's/^/virtual /' < "$TEMPLIST" | sed -e 's/$/;/' | sed -e 's/enum_/enum /g'  | sed -e 's/const___/const /g' | sed -e 's/void_/void /g' | sed -e 's/volatile_/volatile /g' >> output/sdkwrapper.hpp
echo "#endif //  __has_include(<${MODULE_PREFIX}/${MODULE_NAME}.h>) || __has_include(<gmock/gmock.h>)" >> output/sdkwrapper.hpp
echo "" >> output/sdkwrapper.hpp

# Generate the class implementation
echo "#if __has_include(<${MODULE_PREFIX}/${MODULE_NAME}.h>) || __has_include(<gmock/gmock.h>)" >> output/sdkwrapper.cpp
awk  -f awk/gen_impl.awk < "$TEMPLIST" | sed -e 's/enum_/enum /g'  | sed -e 's/const___/const /g' | sed -e 's/void_/void /g' | sed -e 's/volatile_/volatile /g' >> output/sdkwrapper.cpp
echo "#endif //  __has_include(<${MODULE_PREFIX}/${MODULE_NAME}.h>) || __has_include(<gmock/gmock.h>)" >> output/sdkwrapper.cpp
echo "" >> output/sdkwrapper.cpp

# Generate the API stub
awk -v module="$MODULE" -f awk/gen_apistub.awk < "$TEMPLIST" | sed -e 's/enum_/enum /g'  | sed -e 's/const___/const /g' | sed -e 's/void_/void /g' | sed -e 's/volatile_/volatile /g' >> output/pico_sdk_apistub.cpp

# Generate the mock declaration
sed -e 's/volatile_//g'  < "$TEMPLIST" | awk  -f awk/gen_mock.awk - | sed -e 's/enum_/enum /g'  | sed -e 's/const___/const /g' | sed -e 's/void_/void /g' >> output/mocksdkwrapper.hpp

# Generate the fff declaration
# awk  -f awk/gen_fff.awk < "$TEMPLIST" | sed -e 's/enum_/enum /g'  | sed -e 's/const___/const /g' | sed -e 's/void_/void /g' | sed -e 's/volatile_/volatile /g' >> output/fffsdkwrapper.hpp

# Remove the scratch pad files. 
trap 'rm -f "$TEMPLIST"' EXIT


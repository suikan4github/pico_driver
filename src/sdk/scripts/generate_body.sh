#!/bin/sh

# usage : 
# generate_body hardware|pico module-name
#
# example :
# generate_body hardware uart

MODULE_PREFIX=$1
MODULE_NAME=$2
MODULE="$MODULE_PREFIX"_"$MODULE_NAME"

# Composit the source file path in the Raspberry Pi Pico SDK from the module prefix and module name. 
# We assume PICO_SDK_PATH is correctly set. 
TARGET="${PICO_SDK_PATH%/}/src/rp2_common/${MODULE_PREFIX}_${MODULE_NAME}/include/${MODULE_PREFIX}/${MODULE_NAME}.h"

# If the file is not in the rp2_common, set it should be in common
if [ ! -e "$TARGET" ]; then
  TARGET="${PICO_SDK_PATH%/}/src/common/${MODULE_PREFIX}_${MODULE_NAME}/include/${MODULE_PREFIX}/${MODULE_NAME}.h"
fi

# for monitoring
echo "Target : $TARGET"

# Scratch pad files. 
TEMPSRC=$(mktemp).h
TEMPLIST=$(mktemp).h

# We gather the prototype without ";" into the $TEMPLIST
# 1. clang-format formats the input file. Prevent line feed at the middle of the line. 
# 2. ctags extracts the function definition line only. 
# 3. sed removes the funcion implementation after "{".
# 4. sed removes the ";" at the end of line. 
# 5. grep removes the lien with "__unused" which is not relevant to user. 
# 6. awk removes the information fields from line. 
# 7. sed removes attribute and modifire of the function header. 
# 8. sed give space before/after "(" and before ")" for easy lexical analysis.
# 9. sed concatenate enum to the following word to handle the type as 1 field in the awk.
# 10. sed concatenate concat to the following word to handle the type as 1 field in the awk.
clang-format "$TARGET" --style="{ColumnLimit: 9999}" > "$TEMPSRC"
ctags -x --c++-kinds=pf "$TEMPSRC"|\
sed -e 's/{.*$//' |\
sed -e 's/\;.*$//' |\
grep -v "__unused" |\
awk '{$1="";$2="";$3="";$4="";print $0}'|\
sed -e 's/__attribute__\(\(always_inline\)\)//'|sed -e 's/static//' | sed -e 's/inline//' | sed -e 's/extern//' | \
sed -e 's/(/ ( /' | sed -e 's/)/ )/' | \
sed -e 's/\(^.*\) +*\*\(.*(\)/\1\* \2/' | \
sed -e 's/enum /enum_/' | \
sed -e 's/const /const_/' \
> "$TEMPLIST"



# for debug out.
cat "$TEMPLIST" >> debug.hpp

# Gnerate include headers. 
echo "#include <../../${MODULE_PREFIX}_${MODULE_NAME}/include/${MODULE_PREFIX}/${MODULE_NAME}.h>"  >> output/pico_sdk_headers.h

# Generate the class delcaration. 
# add "virtual" and ";" to be a right function prototype. 
sed -e 's/^/virtual /' < "$TEMPLIST" | sed -e 's/$/;/' | sed -e 's/enum_/enum /'  | sed -e 's/const_/const /' >> output/sdkwrapper.hpp

# Generate the class implementation
awk  -f awk/gen_impl.awk < "$TEMPLIST" | sed -e 's/enum_/enum /'  | sed -e 's/const_/const /' >> output/sdkwrapper.cpp

# Generate the API stub
awk -v module="$MODULE" -f awk/gen_apistub.awk < "$TEMPLIST" | sed -e 's/enum_/enum /'  | sed -e 's/const_/const /' >> output/apistub.c

# Generate the mock declaration
awk  -f awk/gen_mock.awk < "$TEMPLIST" | sed -e 's/enum_/enum /'  | sed -e 's/const_/const /' >> output/mocksdkwrapper.hpp

# Generate the fff declaration
awk  -f awk/gen_fff.awk < "$TEMPLIST" | sed -e 's/enum_/enum /'  | sed -e 's/const_/const /' >> output/fffsdkwrapper.hpp

# Remove the scratch pad files. 
trap 'rm -f "$TEMPSRC"' EXIT
trap 'rm -f "$TEMPLIST"' EXIT


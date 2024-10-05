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
# 8. sed sed give space after "(" and before ")" for easy lexical analysis.
clang-format "$TARGET" --style="{ColumnLimit: 9999}" > "$TEMPSRC"
ctags -x --c++-kinds=pf "$TEMPSRC"|\
sed s/{.*$// | \
sed s/\;.*$// |\
grep -v "__unused" |\
awk '{$1="";$2="";$3="";$4="";print $0}'|\
sed s/__attribute__\(\(always_inline\)\)//|sed s/static// | sed s/inline// | \
sed -e 's/(/( /' | sed -e 's/)/ )/' \
> "$TEMPLIST"

# for debug out.
cp "$TEMPLIST"  debug.hpp

# Generate the class delcaration. 
# add "virtual" and ";" to be a right function prototype. 
sed -e 's/^/virtual /' < "$TEMPLIST" | sed -e 's/$/;/' > sdkwrapper.hpp

# Generate the API stub
awk -v module="$MODULE" -f gen_apistub.awk < "$TEMPLIST"  > apistub.cpp

# Generate the class implementation
awk  -f gen_impl.awk < "$TEMPLIST"  > sdkwrapper.cpp


# Remove the scratch pad files. 
trap 'rm -f "$TEMPSRC"' EXIT
trap 'rm -f "$TEMPLIST"' EXIT


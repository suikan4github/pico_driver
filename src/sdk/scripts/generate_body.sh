#!/bin/sh

# usage : 
# generate_body hardware|pico module-name
#
# example :
# generate_body hardware uart

MODULE_PREFIX=$1
MODULE_NAME=$2
MODULE="$MODULE_PREFIX"_"$MODULE_NAME"

TARGET="${PICO_SDK_PATH%/}/src/rp2_common/${MODULE_PREFIX}_${MODULE_NAME}/include/${MODULE_PREFIX}/${MODULE_NAME}.h"

TEMPSRC=$(mktemp).h
TEMPLIST=$(mktemp).h

# We gather the prototype without ";" in the $TEMPLIST
clang-format "$TARGET" --style="{ColumnLimit: 9999}" > "$TEMPSRC"
ctags -x --c++-kinds=pf "$TEMPSRC"| sed s/{.*$// | sed s/\;.*$// |\
grep -v "__unused" |
awk '{$1="";$2="";$3="";$4="";print $0}'|\
sed s/__attribute__\(\(always_inline\)\)//|sed s/static// | sed s/inline// | sed -e 's/^ *//' | \
sed -e 's/(/( /' | sed -e 's/)/ )/' \
> "$TEMPLIST"

# Generate the class delcaration. 
sed -e 's/^/virtual /' < "$TEMPLIST" | sed -e 's/$/;/' > sdkwrapper.hpp

# Generate the class body
awk -v module="$MODULE" '{ TMP=$1; $1=""; print TMP, "rpp_driver::SdkWrapper::", $0; print "{"; print "assert( false & \"Error :", module, "library is missing in link phase.\");"; print "}" }' < "$TEMPLIST"  > sdkwrapper.cpp


trap 'rm -f "$TEMPSRC"' EXIT
trap 'rm -f "$TEMPLIST"' EXIT


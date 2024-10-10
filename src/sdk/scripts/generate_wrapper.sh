#!/bin/sh

[ "${PICO_SDK_PATH:+defined}" ] || {
    echo 'Error : environment PICO_SDK_PATH is undefined or empty.'
    exit 1
}
[ "${PICO_SDK_PATH:+defined}" ] && {
    echo "PICO_SDK_PATH : ${PICO_SDK_PATH}"
}

FILE="api_dirs.txt"

cp blocks/sdkwrapper_preumble.hpp output/sdkwrapper.hpp
cp blocks/sdkwrapper_preumble.cpp output/sdkwrapper.cpp
cp blocks/mocksdkwrapper_preumble.hpp output/mocksdkwrapper.hpp
cp blocks/pico_sdk_apistub_preumble.cpp  output/pico_sdk_apistub.cpp
cp blocks/pico_api_alternate_defs.hpp  output/pico_api_alternate_defs.hpp
# echo "" > output/fffsdkwrapper.hpp
echo "" > output/pico_sdk_headers.h
echo "" > debug.hpp

# read FILE
while read -r module name
do 
    ./generate_body.sh "$module" "$name"
done < $FILE

cat blocks/sdkwrapper_afterword.hpp >> output/sdkwrapper.hpp
cat blocks/sdkwrapper_afterword.cpp >> output/sdkwrapper.cpp
cat blocks/mocksdkwrapper_afterword.hpp >> output/mocksdkwrapper.hpp

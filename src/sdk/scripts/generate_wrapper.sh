#!/bin/sh

FILE="api_dirs.txt"

cp blocks/sdkwrapper_prefix.hpp output/sdkwrapper.hpp
cp blocks/sdkwrapper_prefix.cpp output/sdkwrapper.cpp
cp blocks/mocksdkwrapper_prefix.hpp output/mocksdkwrapper.hpp
cp blocks/apistub_prefix.c  output/apistub.c
echo "" > output/fffsdkwrapper.hpp
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

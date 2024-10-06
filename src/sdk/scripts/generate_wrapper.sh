#!/bin/sh

FILE="api_dirs.txt"

echo "" > sdkwrapper.hpp
echo "" > sdkwrapper.cpp
echo "" > mocksdkwrapper.hpp
echo "" > fffsdkwrapper.hpp
echo "" > apistub.c

# read FILE
while read -r module name
do 
    ./generate_body.sh "$module" "$name"
done < $FILE

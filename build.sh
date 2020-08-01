#!/bin/sh
check_success() 
{
    if [[ $status != 0 ]];
    then
        echo "Process finished with error code $status"
        exit $status
    fi
}

echo "Running CMake"
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -S . -B build
status=$?
check_success

mv build/compile_commands.json .

echo "Running Make"
cd build
make VERBOSE=0
status=$?
cd -
check_success

echo "Your build is inside 'build/demo/bin'"
echo "Press R to run or other key to exit..."
read -n 1 input <&1
if [[ $input = r ]];
then
    echo ""
    echo "Running..."
    ./build/demo/bin/demo
fi


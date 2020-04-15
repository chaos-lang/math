#!/bin/bash

out=$(<"test.out")
test=$(chaos test.kaos)
if [ "$test" == "$out" ]
then
    echo "OK"
else
    echo "$test"
    echo "Fail"
    exit 1
fi

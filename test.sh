#!/bin/bash

out=$(<"test.out")
if [ "$#" -gt 0 ] && [ $1 == "compile" ]; then
    chaos -c test.kaos && \
    test=$(build/main)
else
    test=$(chaos test.kaos)
fi

if [ "$test" == "$out" ]; then
    echo "OK"
else
    echo "$test"
    echo "Fail"
    exit 1
fi

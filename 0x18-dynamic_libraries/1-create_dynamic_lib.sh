#!/bin/bash
gcc *.c -c -fPIC
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

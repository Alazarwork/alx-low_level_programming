#!/bin/bash
gcc -fPIC -c -Wall -Werror -Wextra -pedantic *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

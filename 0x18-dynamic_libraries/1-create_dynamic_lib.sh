#!/bin/bash

# Compile the .c files into object files
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c

# Create the dynamic library
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH


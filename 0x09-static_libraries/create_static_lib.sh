#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fno-builtin -c *.c
ar rcs liball.a *.o

# 0x0C - More malloc, free

This project extends the dynamic memory work from 0x0B with the two
standard library functions that sit beside malloc and free — calloc and
realloc — plus the exit function. Three of them are reimplemented from
scratch. The final task is a program that multiplies arbitrarily large
numbers using digit-by-digit arithmetic.

## Tasks

| Task | File | Description |
|------|------|-------------|
| 0 | `0-malloc_checked.c` | malloc wrapper that exits with status 98 on failure |
| 1 | `1-string_nconcat.c` | Concatenates s1 with the first n bytes of s2 |
| 2 | `2-calloc.c` | Reimplementation of calloc using malloc and a zero loop |
| 3 | `3-array_range.c` | Creates an array of ints from min to max inclusive |
| 4 | `100-realloc.c` | Reimplementation of realloc using malloc, copy, and free |
| 5 | `101-mul.c` | Multiplies two positive integers of any size |

## Compilation

Every file compiles with the strict flags:

gcc -Wall -Wextra -Werror -pedantic -std=gnu89

## Memory checks

Tasks involving allocation are verified under Valgrind. No leaks, no
invalid reads or writes.

## Author

SAM

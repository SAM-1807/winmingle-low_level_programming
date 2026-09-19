# 0x0B - Dynamic Memory in C (malloc & free)

This project introduces dynamic memory allocation: how to request memory
from the heap at runtime, how to use it safely, and how to release it
to avoid leaks.

## Tasks

| Task | File | Description |
|------|------|-------------|
| 0 | `0-create_array.c` | Allocates a buffer of size bytes and fills it with a character |
| 1 | `1-strdup.c` | Returns a heap-allocated copy of a string |
| 2 | `2-str_concat.c` | Concatenates two strings into a newly allocated buffer |
| 3 | `3-alloc_grid.c` | Allocates a 2D grid of integers, zero-initialized |
| 4 | `4-free_grid.c` | Frees the 2D grid allocated by `alloc_grid` |
| 5 | `100-argstostr.c` | Concatenates all command-line arguments into one string |
| 6 | `101-strtow.c` | Splits a string into words, each heap-allocated |

## Compilation

Every file compiles with the strict flags:

gcc -Wall -Wextra -Werror -pedantic -std=gnu89

## Memory checks

Every task is verified under Valgrind. No leaks, no invalid reads or
writes, no use-after-free.

## Author

SAM

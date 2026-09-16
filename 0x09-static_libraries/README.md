# 0x09 - Static Libraries

This project covers static libraries in C: how they are created, how they are
used, and how to automate their creation with a shell script.

## Task 0: `libmy.a`

A static library containing the following functions:

`_putchar`, `_islower`, `_isalpha`, `_abs`, `_isupper`, `_isdigit`, `_strlen`,
    `_puts`, `strcpy`, `_atoi`, `strcat`, `strncat`, `strncpy`, `_strcmp`, `memset`,
    `memcpy`, `strchr`, `_strspn`, `strpbrk`, `strstr`.

    All functions are reimplemented versions of the standard C library.
    Prototypes are declared in `main.h`.

## Task 1: `create_static_lib.sh`

    A shell script that compiles every `.c` file in the current directory into
    object files and archives them into a static library called `liball.a`.

### Usage

    ./create_static_lib.sh

### What it does

    1. Compiles each `.c` file with `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -fno-builtin -c`.
    2. Archives all resulting `.o` files into `liball.a` using `ar rcs`.

## Author

    SAM

# 0x04 - More functions, nested loops

This project builds on the previous functions and nested loops module, introducing more complex patterns and logic.

## Learning objectives

- Understand and use nested loops
- Write and use functions with prototypes
- Distinguish between function declaration and definition
- Understand variable scope
- Use header files (`main.h`) with `#include`
- Compile with strict flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 20.04 LTS with `gcc` using the flags above
- Every file must end with a new line
- `README.md` is mandatory in the project root
- No global variables
- No more than 5 functions per file
- No standard library functions (`printf`, `puts`, etc.) — only `_putchar`
- You may use `_putchar`
- You do not need to push `_putchar.c` (WinMingle provides it)
- Do not push any `main.c` test files
- All function prototypes and the `_putchar` prototype must be in `main.h`
- Push `main.h`

## Files in this project

| Task | Filename | Description |
|------|----------|-------------|
| 0 | `0-isupper.c` | Checks for uppercase character |
| 1 | `1-isdigit.c` | Checks for a digit (0 through 9) |
| 2 | `2-mul.c` | Multiplies two integers |
| 3 | `3-print_numbers.c` | Prints numbers 0 to 9 |
| 4 | `4-print_most_numbers.c` | Prints numbers 0 to 9 except 2 and 4 |
| 5 | `5-more_numbers.c` | Prints 0 to 14 ten times |
| 6 | `6-print_line.c` | Draws a straight line of underscores |
| 7 | `7-print_diagonal.c` | Draws a diagonal line of backslashes |
| 8 | `8-print_square.c` | Draws a square of `#` characters |
| 9 | `9-fizz_buzz.c` | FizzBuzz program (prints numbers 1–100 with Fizz, Buzz, FizzBuzz) |
| 10 | `10-print_triangle.c` | Prints a triangle of `#` characters |
| 100 | `100-prime_factor.c` | Finds the largest prime factor of a fixed number |
| 101 | `101-print_number.c` | Prints an integer using only `_putchar` |

## Compilation example

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-isupper.c -o isupper

## Author
SAM

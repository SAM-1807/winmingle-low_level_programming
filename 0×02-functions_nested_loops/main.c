#include "main.h"

int main(void)
{
    int r;

    // Test 1: Uppercase letter 'H' → should return 0
    r = _islower('H');
    _putchar(r + '0');

    // Test 2: Lowercase letter 'o' → should return 1
    r = _islower('o');
    _putchar(r + '0');

    // Test 3: ASCII 108 (which is 'l') → should return 1
    r = _islower(108);
    _putchar(r + '0');

    // Test 4: Digit '5' → should return 0
    r = _islower('5');
    _putchar(r + '0');

    // Test 5: Uppercase 'Z' → should return 0
    r = _islower('Z');
    _putchar(r + '0');

    // Print new line at the end
    _putchar('\n');

    return (0);
}

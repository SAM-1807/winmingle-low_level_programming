// _putchar.c (local test only)
#include <unistd.h>

int _putchar(char c)
{
    return (write(1, &c, 1));
}

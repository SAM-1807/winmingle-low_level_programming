#include <stdio.h>

int main(void)
{
    long n = 612852475143;
    long factor = 2;
    long largest = 1;

    while (factor * factor <= n)
    {
        if (n % factor == 0)
        {
            largest = factor;
            while (n % factor == 0)
                n /= factor;
        }
        factor++;
    }

    if (n > 1)
        largest = n;

    printf("%ld\n", largest);
    return (0);
}


/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints all combinations of two two-digit numbers (00 01 to 98 99)
 */

#include <stdio.h>

int main(void)
{
    int first = 0;
    int second;
    int first_tens;
    int first_ones;
    int second_tens;
    int second_ones;

    while (first <= 98)
    {
        second = first + 1;
        
        while (second <= 99)
        {
            /* Split first number into digits */
            first_tens = first / 10;
            first_ones = first % 10;
            
            /* Split second number into digits */
            second_tens = second / 10;
            second_ones = second % 10;
            
            /* Print first number (two digits) */
            putchar(first_tens + '0');
            putchar(first_ones + '0');
            
            /* Print space between numbers */
            putchar(' ');
            
            /* Print second number (two digits) */
            putchar(second_tens + '0');
            putchar(second_ones + '0');
            
            /* Print comma and space after each pair except the last */
            if (!(first == 98 && second == 99))
            {
                putchar(',');
                putchar(' ');
            }
            
            second++;
        }
        
        first++;
    }
    
    putchar('\n');
    
    return (0);
}

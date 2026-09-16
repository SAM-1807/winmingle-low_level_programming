/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: This is a program that prints all possible different combinations of two digits.
 */

#include <stdio.h>

int main(void)
{
    int first = 0;
    int second;

    while (first <= 8)
    {
        second = first + 1;
        
        while (second <= 9)
        {
            putchar(first + '0');
            putchar(second + '0');
            
            if (!(first == 8 && second == 9))
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

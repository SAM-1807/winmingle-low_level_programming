/**
 * 1-swap - Swaps the values of two integers
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Swaps the integers a and b point to.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

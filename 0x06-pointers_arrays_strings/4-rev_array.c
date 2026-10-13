/**
 * 4-rev_array - Reverses an integer array
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Reverses the contents of an array of integers in place.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * reverse_array - Reverses an integer array
 * @a: The array
 * @n: Number of elements
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int first;
	int last;
	int temp;

	first = 0;
	last = n - 1;
	while (first < last)
	{
		temp = a[first];
		a[first] = a[last];
		a[last] = temp;
		first++;
		last--;
	}
}

/**
 * 2-int_index - Searches for an integer
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Finds the index of the first element for which the cmp
 * function does not return 0.
 *
 * Return: Index of the element, or -1 if not found
 */

#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an integer
 * @array: The array of integers
 * @size: The number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * Return: The index of the first match, or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}

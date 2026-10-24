/**
 * 1-array_iterator - Executes a function on each array element
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Applies a function to each array element.
 *
 * Return: Nothing
 */

#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array of integers
 * @size: The size of the array
 * @action: Pointer to the function to apply
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

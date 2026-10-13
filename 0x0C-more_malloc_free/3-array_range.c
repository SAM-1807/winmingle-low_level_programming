/**
 * 3-array_range - Creates an array of integers
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Creates an array from min to max inclusive.
 *
 * Return: Pointer to the array, or NULL on failure
 */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

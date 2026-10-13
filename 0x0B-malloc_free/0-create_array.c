/**
 * 0-create_array - Creates an array of chars
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Allocates an array filled with a specific char.
 *
 * Return: Pointer to the array, or NULL on failure
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: Size of the array
 * @c: The character to fill the array with
 *
 * Return: Pointer to the array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}

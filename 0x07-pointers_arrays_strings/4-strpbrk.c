/**
 * 4-strpbrk - Searches for any character in a set
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Returns a pointer to the first byte in s that matches accept.
 *
 * Return: Pointer to first match, or NULL
 */

#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string
 * @accept: The set of characters to search for
 *
 * Return: Pointer to first match, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}

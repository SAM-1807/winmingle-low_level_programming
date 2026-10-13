/**
 * 3-strcmp - Compares two strings
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Compares s1 and s2 lexicographically.
 *
 * Return: Difference between first differing characters, or 0 if equal
 */

#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Difference between first differing characters, or 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

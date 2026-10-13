/**
 * 5-string_toupper - Uppercases all letters in a string
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Converts all lowercase letters to uppercase.
 *
 * Return: Pointer to the string
 */

#include "main.h"

/**
 * string_toupper - Uppercases all letters in a string
 * @s: The string
 *
 * Return: Pointer to the string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

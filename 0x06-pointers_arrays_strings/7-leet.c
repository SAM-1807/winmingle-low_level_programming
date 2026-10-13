/**
 * 7-leet - Encodes a string in leet speak
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Encodes letters into 1337 equivalents.
 *
 * Return: Pointer to the string
 */

#include "main.h"

/**
 * leet - Encodes a string in leet speak
 * @s: The string
 *
 * Return: Pointer to the string
 */
char *leet(char *s)
{
	int i;
	int j;
	char letters[] = "aeotlAEOTL";
	char numbers[] = "4307143071";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
			j++;
		}
		i++;
	}
	return (s);
}

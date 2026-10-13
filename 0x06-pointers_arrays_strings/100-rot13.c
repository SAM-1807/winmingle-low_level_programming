/**
 * 100-rot13 - Encodes a string using rot13
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Encodes a string using the rot13 cipher.
 *
 * Return: Pointer to the string
 */

#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: The string
 *
 * Return: Pointer to the string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char in[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char out[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (in[j] != '\0')
		{
			if (s[i] == in[j])
			{
				s[i] = out[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}

/**
 * 2-strlen - Returns the length of a string
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Returns the length of a string.
 *
 * Return: Length of s
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

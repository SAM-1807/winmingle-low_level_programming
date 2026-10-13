/**
 * 0-isupper - Checks for uppercase character
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Returns 1 if c is uppercase, 0 otherwise.
 *
 * Return: 1 if uppercase, 0 otherwise
 */

#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: The character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

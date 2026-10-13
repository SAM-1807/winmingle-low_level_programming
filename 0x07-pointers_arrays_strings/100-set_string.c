/**
 * 100-set_string - Sets the value of a pointer
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Sets the value of a char pointer to point to another string.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to the pointer
 * @to: The string to point to
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}

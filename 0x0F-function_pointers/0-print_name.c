/**
 * 0-print_name - Prints a name using a function pointer
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Calls a function pointer to print a given name.
 *
 * Return: Nothing
 */

#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name
 * @name: The name to print
 * @f: Pointer to the printing function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

/**
 * 2-args - Prints all arguments passed to it
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints each command-line argument on its own line.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

/**
 * main - Prints each argument on its own line
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

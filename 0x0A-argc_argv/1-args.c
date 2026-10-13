/**
 * 1-args - Prints the number of arguments
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints the number of arguments passed, excluding the name.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

/**
 * main - Prints the number of arguments passed
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

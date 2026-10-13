/**
 * 0-whatsmyname - Prints the program name
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints the name of the program.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

/**
 * 2-main.c - Prints the name of the source file
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints the name of the file it was compiled from.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

/**
 * main - prints the source file name
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

/**
 * 100-change - Prints the minimum number of coins
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints minimum coins needed to make change.
 *
 * Return: Always 0 (Success), or 1 on error
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins to make change
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success), or 1 on error
 */
int main(int argc, char *argv[])
{
	int cents;
	int count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	count = 0;
	count += cents / 25;
	cents %= 25;
	count += cents / 10;
	cents %= 10;
	count += cents / 5;
	cents %= 5;
	count += cents / 2;
	cents %= 2;
	count += cents;
	printf("%d\n", count);
	return (0);
}

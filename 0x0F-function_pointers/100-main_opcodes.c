/**
 * 100-main_opcodes - Prints the opcodes of its own main function
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints the opcodes of the main function in hexadecimal.
 *
 * Return: Always 0 (Success), or exits with 1 or 2 on error
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of the main function
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;
	while (i < num_bytes)
	{
		printf("%02x", *((unsigned char *)main + i));
		if (i < num_bytes - 1)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}

/**
 * 101-keygen - Generates a random valid password
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Generates a random valid password for the crackme.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char password[84];
	int i;
	int sum;

	i = 0;
	sum = 0;
	srand(time(0));
	while (sum < 2772)
	{
		password[i] = 33 + rand() % 93;
		sum += password[i];
		i++;
	}
	password[i] = '\0';
	printf("%s\n", password);
	return (0);
}

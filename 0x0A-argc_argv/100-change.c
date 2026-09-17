#include "main.h"

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int cents;
	int count = 0;
	int i;

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

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents = cents - coins[i];
			count++;
		}
	}

	printf("%d\n", count);
	return (0);
}

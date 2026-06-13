#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char password[84];
	int i = 0;
	int sum = 0;

	srand(time(0));
	while(sum < 2772)    {
		password[i] = 33 + rand() % 93;
		sum = sum + password[i];
		i++;
	}
	password[i] = '\0';
	printf("%s\n", password);
	return(0);
}

#include <stdio.h>
#include "main.h"

int main(void)
{
	int month, day, year;

	/* Test case 1: Normal year */
	month = 2;
	day = 28;
	year = 2019;
	printf("Date: %02d/%02d/%04d\n", month, day, year);
	print_remaining_days(month, day, year);

	/* Test case 2: Leap year */
	month = 2;
	day = 29;
	year = 2020;
	printf("Date: %02d/%02d/%04d\n", month, day, year);
	print_remaining_days(month, day, year);

	/* Test case 3: Invalid date */
	month = 2;
	day = 30;
	year = 2020;
	printf("Date: %02d/%02d/%04d\n", month, day, year);
	print_remaining_days(month, day, year);

	return (0);
}

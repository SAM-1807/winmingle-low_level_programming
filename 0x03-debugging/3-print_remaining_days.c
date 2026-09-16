#include <stdio.h>
#include "main.h"

void print_remaining_days(int month, int day, int year)
{
	int day_of_year = convert_day(month, day);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month >= 3)
			day_of_year++;
		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", 366 - day_of_year);
	}
	else
	{
		if (month == 2 && day == 29)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else
		{
			printf("Day of the year: %d\n", day_of_year);
			printf("Remaining days: %d\n", 365 - day_of_year);
		}
	}
}

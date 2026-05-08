#include "main.h"

int convert_day(int month, int day)
{
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int day_of_year = 0;
	int i;

	for (i = 0; i < month - 1; i++)
	{
		day_of_year += days_in_month[i];
	}

	day_of_year += day;

	return (day_of_year);
}

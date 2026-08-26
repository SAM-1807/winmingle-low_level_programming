#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];                 /* main diagonal */
		sum2 += a[i * size + (size - 1 - i)];    /* anti-diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}

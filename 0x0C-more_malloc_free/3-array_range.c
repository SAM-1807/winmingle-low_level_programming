#include "main.h"

int *array_range(int min, int max)
{
	int *result;
	int count;
	int i;

	if (min > max)
		return (NULL);

	count = max - min + 1;

	result = malloc(count * sizeof(int));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		result[i] = min + i;

	return (result);
}

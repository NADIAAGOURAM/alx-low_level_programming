#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @max:maximum
 * @min:minimum
 * Return:pointer to array
 */

int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (0);
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		a[i] = min++;

	return (a);
}


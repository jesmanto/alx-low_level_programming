#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an arr of int in range
 * @min: mininmum value
 * @max: maximum value
 * Return: inte\ pointer
 */
int *array_range(int min, int max)
{
	int *pt;
	int i;

	if (min > max)
		return (NULL);
	pt = malloc(sizeof(int) * (max - min) * sizeof(int));

	if (pt == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		pt[i] = min;
		i++;
		min++;
	}

	return (pt);
}

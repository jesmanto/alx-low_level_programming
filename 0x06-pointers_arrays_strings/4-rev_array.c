#include "main.h"

/**
 * reverse_array - reverse an int array
 * @a: int array
 * @n: length of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int a1[100];
	int i, j, k;

	k = 0;
	i = n - 1;
	j = 0;
	while (k < n)
	{
		a1[k] = a[k];
		k++;
	}
	while (i >= 0)
	{
		a[j] = a1[i];
		i--;
		j++;
	}
}

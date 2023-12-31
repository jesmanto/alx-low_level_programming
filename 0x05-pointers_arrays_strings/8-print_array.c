#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - prints the elements of an array
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
	{
		putchar('\n');
	}
	else if (n > 0)
	{
		while (i < n)
		{
			if (i == n - 1)
				printf("%d\n", a[i]);
			else
				printf("%d, ", a[i]);
			i++;
		}
	}
}

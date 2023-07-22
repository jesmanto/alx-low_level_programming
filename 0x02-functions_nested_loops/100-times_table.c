#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints times table
 * @n: number
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
		putchar('\n');
	else if (n == 0)
		putchar(48);
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;

				if (j == 0)
					printf("%d", product);
				else
				{
					if (product < 10)
						printf(",   %d", product);
					else if (product > 99)
						printf(", %d", product);
					else
						printf(",  %d", product);
				}

				if (j == n)
					putchar('\n');
			}
		}
	}
}

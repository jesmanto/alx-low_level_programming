#include "main.h"

/**
 * times_table
 *
 * Return: void
 */
void times_table(void)
{
	int r, c, t, product, o;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			product = r * c;
			tens = product / 10;
			ones = product % 10;
			if (c == 0)
			{
				_putchar('0');
			}
			else if (product > 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}

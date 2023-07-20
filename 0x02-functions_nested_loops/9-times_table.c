#include "main.h"

/**
 * times_table - prints times tablee
 *
 * Return: void
 */
void times_table(void)
{
	int r, c, product, m, d;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			product = r * c;

			m = product % 10;

			d = product / 10;

			if (product <= 9)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(d + '0');
				_putchar(m + '0');
			}

			if (c < 9)
			{
				if (product > 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
}

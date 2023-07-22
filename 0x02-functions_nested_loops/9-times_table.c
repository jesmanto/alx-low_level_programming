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

			if (c > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
			}

			if (product <= 9)
			{
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + d);
				_putchar('0' + m);
			}

			if (c == 9)
			{
				_putchar('\n');
			}
		}
	}
}

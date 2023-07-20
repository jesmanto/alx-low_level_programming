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

			_putchar(product);
			if (c < 9)
			{
				if (product < 10)
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

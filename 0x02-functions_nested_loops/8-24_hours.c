#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print hours and minutes
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, r, m, n;

	h = '0';

	while (h <= '2')
	{
		r = '0';

		while (r <= '4')
		{
			m = '0';

			while (m <= '5')
			{
				n = '0';

				while (n <= '9')
				{
					_putchar(h);
					_putchar(r);
					_putchar(':');
					_putchar(m);
					_putchar(n);
					_putchar('\n');

					n++;
				}
				m++;
			}
			r++;
		}
		h++;
	}
}

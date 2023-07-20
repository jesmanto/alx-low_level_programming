#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print more numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	char i, j, d, m;

	i = 0;

	while (i <= 9)
	{
		j = 0;

		while (j < 15)
		{
			d = j / 10;
			m = j % 10;

			if (j > 9)
				_putchar(d + '0');
			_putchar(m + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_square - print a square
 *
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int l, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		l = 1;

		while (l <= size)
		{
			b = 1;

			while (b <= size)
			{
				_putchar('#');
				b++;
			}
			l++;
			_putchar('\n');
		}
	}
}

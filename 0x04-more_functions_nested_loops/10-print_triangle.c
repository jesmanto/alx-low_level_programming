#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints triangle
 *
 * @size: base of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int h, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		h = 1;

		while (h <= size)
		{
			b = 1;

			while (b <= size)
			{
				if (size - b < h)
					_putchar('#');
				else
					_putchar(' ');
				b++;
			}
			_putchar('\n');
			h++;
		}
	}
}

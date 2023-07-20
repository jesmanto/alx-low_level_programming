#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print in diagonal format
 *
 * @n: diagonal length
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int l, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		l = 1;

		while (l <= n)
		{
			b = 1;

			while (b <= n)
			{
				if (b != l)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
					break;
				}
				b++;
			}
			l++;
			_putchar('\n');
		}
	}
}

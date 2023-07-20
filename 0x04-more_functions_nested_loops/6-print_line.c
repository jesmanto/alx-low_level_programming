#include "main.h"
#include <stdio.h>

/**
 * print_line - draw a straight line
 *
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n)
{
	int line = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (line < n)
		{
			_putchar('_');
			line++;
		}
		_putchar('\n');
	}
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - represents a number in binary
 * @n: number to be represented in binary
 */
void print_binary(unsigned long int n)
{
	int i = 63, size = 0;
	unsigned long int num;

	for (; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			size++;
		}
		else if (size)
			_putchar('0');
	}
	if (!size)
		_putchar('0');
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * power - exponents
 * @b: base
 * @ex: exponents
 * Return: 0
 */
int power(int b, int ex)
{
	int i, num;

	num = 1;

	for (i = 0; i < ex; ++i)
		num *= b;

	return (num);
}

/**
 * print_number - prints an integer
 * @n: number
 * Return: void
 */
void print_number(int n)
{
	int neg, digit, divisor, start, place;

	neg = 0;
	start = 0;
	place = 10;

	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}

	while (place >= 0)
	{
		divisor = power(10, place);
		digit = (n / divisor) % 10;

		if (digit == 0 && start == 0)
			place--;
		else if (digit != 0 && start == 0)
		{
			start = 1;
			if (neg == 1)
				_putchar('_');
			_putchar('0' + digit);
			place--;
		}
		else
		{
			_putchar('0', digit);
			place--;
		}
	}
		if (digit == 0 && divisor == 1)
			_putchar(48);
}

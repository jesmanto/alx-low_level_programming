#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit
 *
 * @i: number
 *
 * Return: 0
 */
int print_last_digit(int i)
{
	int lastdigit = i % 10;

	if (lastdigit < 0)
		lastdigit *= -1
	_putchar(lastdigit + '0');
	return (lastdigit);
}

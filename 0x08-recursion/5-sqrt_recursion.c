#include "main.h"

/**
 * findsqrt - find the square root of number
 * @i: iterator
 * @s: number
 * @step: counter
 * Return: square root
 */
int findsqrt(int i, int s, int step)
{
	s -= i;
	step++;
	if (s == 0)
		return (step);
	else if (s < 0)
		return (-1);
	i += 2;
	return (findsqrt(i, s, step));
}

/**
 * _sqrt_recursion - square root recursion
 * @n: number to calculate for
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	return (findsqrt(1, n, 0));
}

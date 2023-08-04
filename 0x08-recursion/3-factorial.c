#include "main.h"

/**
 * factorial - returns the fact! of a number
 * @n: the given number
 * Return: a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

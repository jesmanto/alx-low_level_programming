#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic func that sums up its args
 * @n: constant
 * Return: total sum of the args
 */
int sum_them_all(const unsigned int n, ...)
{
	int s, sum;
	unsigned int i;
	va_list ag;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(ag, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ag, int);
		sum += s;
	}
	va_end(ag);
	return (sum);
}

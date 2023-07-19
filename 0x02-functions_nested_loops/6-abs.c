#include "main.h"
#include <stdio.h>

/**
 * _abs - absolute value
 *
 * @n: int param
 *
 * Return: 0
 */
int _abs(int n)
{
	int absval = n;

	if (n < 0)
	{
		absval = -1 * n;
	}

	return (absval);
}

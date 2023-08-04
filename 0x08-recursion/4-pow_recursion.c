#include "main.h"

/**
 * _pow_recursion - return the exponential of a number
 * @x: number to calculate the exponential
 * @y: power to the exponential
 * Return: exponential result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

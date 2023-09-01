#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer
 * @index: index of number
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}

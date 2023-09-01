#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @index: given index
 * @n: number
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int _bit;

	if (index > 63)
		return (-1);
	_bit = (n >> index) & 1;
	return (_bit);
}

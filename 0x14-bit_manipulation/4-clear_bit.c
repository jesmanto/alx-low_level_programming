#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - set value of bit to 0
 * @n: pointer to address
 * @index: index to set to 0
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - flip bits
 * @n: number to flip its bits
 * @m: another number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, c = 0;
	unsigned long int num, exc = n ^ m;

	for (; i >= 0; i--)
	{
		num = exc >> i;
		if (num & 1)
			c++;
	}
	return (c);
}

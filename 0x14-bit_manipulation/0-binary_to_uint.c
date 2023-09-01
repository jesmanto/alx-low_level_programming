#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to dec
 * @b: binary number in string
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			dec = (dec << 1) | 1;
		else if (b[i] == '0')
			dec = dec << 1;
		else
			return (0);
	}
	return (dec);
}

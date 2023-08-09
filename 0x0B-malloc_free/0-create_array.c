#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates a char array
 * @size: size of array
 * @c: initial array value
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *p = NULL;

	if (size > 0)
	{
		p = malloc(size);
	}
	if (p != NULL)
	{
		n = 0;
		for (; n < size; n++)
		{
			p[n] = c;
		}
	}
	return (p);
}

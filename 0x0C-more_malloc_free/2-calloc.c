#include "main.h"
#include <stdlib.h>

/**
 * _calloc - arrays memory allocation
 * @nmemb: number os items
 * @size: memory size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	nmemb *= size;

	while (nmemb--)
		c[nmemb] = 0;
	return ((void *)c);
}

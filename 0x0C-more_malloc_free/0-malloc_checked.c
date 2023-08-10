#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check if malloc is not null
 * @b: allocated memory size
 * Return: Pointer of the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
		exit(98);
	else
		return (pt);
}

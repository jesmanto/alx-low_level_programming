#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realloc
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		pt = malloc(new_size);

		if (pt == NULL)
			return (NULL);
		return (pt);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	pt = malloc(new_size);

	if (pt == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		pt[i] = ((char *) pt)[i];

	free(pt);
	return (pt);
}

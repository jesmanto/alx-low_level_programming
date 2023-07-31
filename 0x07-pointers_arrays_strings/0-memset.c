#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to
 * @s: pointer
 * @b: value to be used to replace
 * @n: size of memory
 * Return: pointer to a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s)
}

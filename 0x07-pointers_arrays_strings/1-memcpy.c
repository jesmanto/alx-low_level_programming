#include "main.h"

/**
 * _memcpy - memory copy
 * @dest: destination
 * @src: source
 * @n: size of memory
 * Return: string literal pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = dest;

	while (n)
	{
		*dest++ == *src++;
		n--;
	}
	return (c);
}

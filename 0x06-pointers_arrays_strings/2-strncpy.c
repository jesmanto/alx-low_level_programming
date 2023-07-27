#include "main.h"

/**
 * _strncpy - copy string limit
 * @dest: destination
 * @src: source
 * @n: copy length
 * Return: string literal
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s, i;

	s = 0;
	while (src[s] != '\0')
	{
		s++;
	}

	for (i = 0; i < s && i < n; i++)
		dest[i] = src[i];

	if (i < n)
		dest[i] = '\0';

	return (dest);
}

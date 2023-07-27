#include "main.h"

/**
 * _strncat - append src to dest
 * @dest: destination
 * @src: source
 * @n: maximum append length
 * Return: string literal
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlength, i, slength;

	dlength = 0;

	while (dest[dlength] != '\0')
	{
		dlength++;
	}

	slength = 0;

	while (src[slength] != '\0')
		slength++;

	for (i = 0; i < slength && i < n; i++)
	{
		dest[dlength + i] = src[i];
	}
	dest[dlength + i] = '\0';

	return (dest);
}

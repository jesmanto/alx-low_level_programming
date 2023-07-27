#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: char array
 */
char *_strcat(char *dest, char *src)
{
	int d, i;

	d = 0;

	while (dest[d] != '\0')
		d++;

	for (i = 0; i < d && src[i] != '\0'; i++)
		dest[d + i] = src[i];

	dest[d + i] = '\0';

	return (dest);
}

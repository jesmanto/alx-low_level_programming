#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: char array
 */
char *_strcat(char *dest, char *src)
{
	int size, i;

	size = 0;

	while (dest[size] != '\0')
		size++;

	for (i = 0; i < size && src[i] != '\0'; i++)
		dest[size + i] = src[i];

	dest[size + i] = '\n';

	return (dest);
}

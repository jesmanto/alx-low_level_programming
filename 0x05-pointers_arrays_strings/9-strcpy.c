#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - copy strings
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}

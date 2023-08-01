#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strchr - locatesa character in a string
 * @s: string
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}

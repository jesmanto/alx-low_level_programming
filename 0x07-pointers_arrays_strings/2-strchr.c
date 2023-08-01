#include "main.h"

/**
 * _strchr - locatesa character in a string
 * @s: string
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	if (*s == c)
		return (s);
	
	while (*s)
	{
		if (*s == c)
			return (s);
	}

	return (NULL);
}

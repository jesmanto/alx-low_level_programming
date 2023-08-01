#include "main.h"

/**
 * _strpbrk - locates the 1st occurance of a char
 * @s: string literal
 * @accept: character to locate
 * Return: point to located character
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}

#include "main.h"

/**
 * _strspn - gets the lenght of a substring
 * @s: string
 * @accept: strings with byte to compare
 * Return: unsigned int;
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, m, i;

	c = 0;
	m = 0;


	while (*s)
	{
		for (i = 0; accept(i); i++)
		{
			if (*s == accept[i])
			{
				c++;
				m = 1;
			}
		}

		if (!m)
			return (c);
		m = 0;
		s++
	}
	return (c);
}

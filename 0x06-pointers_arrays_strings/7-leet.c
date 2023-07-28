#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string literal
 * Return: string literal
 */
char *leet(char *c)
{
	int i, n;

	n = 0;
	while (c[n] != '\0')
		n++;

	i = 0;
	while (i < n)
	{
		if (c[i] == 'A' || c[i] == 'a')
			c[i] = '4';
		else if (c[i] == 'E' || c[i] == 'e')
			c[i] = '3';
		else if (c[i] == 'o' || c[i] == 'O')
			c[i] = '0';
		else if (c[i] == 't' || c[i] == 'T')
			c[i] = '7';
		else if (c[i] == 'l' || c[i] == 'L')
			c[i] = '1';
		else
			c[i] = c[i];
		i++;
	}
	return (c);
}

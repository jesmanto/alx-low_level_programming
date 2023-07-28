#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string literal
 * Return: string literal
 */
char *leet(char *c)
{
	return (_encode(c));
}

/**
 * _encode - encodes a string into 1337
 * @c: string literal
 * Return: string literal
 */
char *_encode(char *c)
{
	int i;
	
	i = 0;
	for (; c[i] != '\0'; i++)
	{
		if (c[i] == 'A' || c[i] == 'a')
			c[i] = '4';
		if (c[i] == 'E' || c[i] == 'e')
			c[i] = '3';
		if (c[i] == 'o' || c[i] == 'O')
			c[i] = '0';
		if (c[i] == 't' || c[i] == 'T')
			c[i] = '7';
		if (c[i] == 'l' || c[i] == 'L')
			c[i] = '1';
	}
	return (c);
}

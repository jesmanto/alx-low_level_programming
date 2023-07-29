#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string literal
 * Return: string literal
 */
char *leet(char *c)
{
	char *s = c;
	char l[] = { 'a', 'e', 'o', 't', 'l' };
	char m[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*c)
	{
		for (i = 0; i < 5; i++)
		{
			if (*c == l[i] || *c == l[i] - 32)
				*c = m[i] + '0';
		}
		c++;
	}
	return (s);
}

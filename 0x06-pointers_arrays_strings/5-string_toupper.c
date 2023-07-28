#include "main.h"

/**
 * string_toupper - convert string to uppercase
 * @c: lowercase characters string
 * Return: uppercase characters string
 */
char *string_toupper(char *c)
{
	int i, n;

	i = 0;

	while (c[i] != '\0')
		i++;

	n = 0;

	while (n < i)
	{
		if (c[n] >= 'a' && c[n] <= 'z')
			c[n] -= 32;
		else
			c[n] = c[n];
		n++;
	}

	return (c);
}

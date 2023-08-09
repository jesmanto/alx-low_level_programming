#include <stdlib.h>

/**
 * _strdup - allocate memory for a copied string
 * @str: copied string
 * Return: pointer to copy of string
 */
char *_strdup(char *str)
{
	int n;
	char *c;

	if (str == NULL)
		return (NULL);
	n = 0;
	for (; str[n]; n++)
	{
	}

	c = malloc(n + 1);
	if (c != NULL)
		for (; n >= 0; n--)
		{
			c[n] = str[n];
		}
	return (c);
}

#include <stdlib.h>

/**
 * str_concat - allocatesmemory to joint strings
 * @s1: First string
 * @s2: Second string
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, n;
	char *c;

	l1 = 0;
	l2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; s1[l1]; l1++)
	{
	}

	for (; s2[l2]; l2++)
	{
	}

	c = malloc(l1 + l2 + 1);

	i = 0;
	for (; s1[i]; i++)
		c[i] = s1[i];
	for (n = 0; i < l1 + l2; i++, n++)
		c[i] = s2[n];

	c[i] = '\0';
	return (c);
}

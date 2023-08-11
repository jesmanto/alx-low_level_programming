#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: first number of strings from string 2
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*s1++)
		len1++;
	while (*s2++)
		len2++;

	if (n > len2)
		n = len2;

	pt = malloc(len1 + n + 1);


	if (pt == NULL)
		return (NULL);

	for (i = 0; i < len1 + n; i++)
	{
		if (*s1)
		{
			pt[i] = *s1;
			s1++;
		}
		else
		{
			pt[i] = *s2;
			s2++;
		}
	}
	pt[i] = '\0';
	return (pt);
}

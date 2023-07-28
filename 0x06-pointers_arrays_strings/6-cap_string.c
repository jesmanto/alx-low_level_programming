#include "main.h"

/**
 * cap_string - capitalize the first letter of every word
 * @c: string
 * Return: calpitalized string
 */
char *cap_string(char *c)
{
	int separator, i;

	separator = 1;
	i = 0;

	while (c[i] != '\0')
	{
		if (separator == 1)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] -= 32;
				separator = 0;
			}
			else
			{
				if (c[i] == '\n' || c[i] == ',' || c[i] == ';')
				{
					c[i] = c[i];
					separator = 1;
				}
				else if (c[i] == '.' || c[i] == '!' || c[i] == '?')
				{
					c[i] = c[i];
					separator = 1;
				}
				else if (c[i] == 34 || c[i] == '(' || c[i] == ')')
				{
					c[i] = c[i];
					separator = 1;
				}
				else if (c[i] == '{' || c[i] == '}' || c[i] == 32 || c[i] == 9)
				{
					c[i] = c[i];
					separator = 1;
				}
				else
				{
					c[i] = c[i];
					separator = 0;
				}
			}
		}
		else
		{
			if (c[i] == '\n' || c[i] == ',' || c[i] == ';')
			{
				c[i] = c[i];
				separator = 1;
			}
			if (c[i] == '.' || c[i] == '!' || c[i] == '?')
			{
				c[i] = c[i];
				separator = 1;
			}
			if (c[i] == 34 || c[i] == '(' || c[i] == ')')
			{
				c[i] = c[i];
				separator = 1;
			}
			if (c[i] == '{' || c[i] == '}' || c[i] == 32 || c[i] == 9)
			{
				c[i] = c[i];
				separator = 1;
			}
		}
		i++;
	}
	return (c);
}

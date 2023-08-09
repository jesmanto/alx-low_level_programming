#include <stdlib.h>

/**
 * argstostr - concatenate all the strings in the program
 * @ac: number of strings
 * @av: string array of the strings
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int row, col, i, l;
	char *c;

	i = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	row = 0;
	for (; row < ac; row++)
	{
		col = 0;
		for (; av[row][col]; col++)
			;
		l += col + 1;
	}
	c = malloc(l + 1);
	if (c != NULL)
	{
		row = 0;
		for (; row < ac; row++)
		{
			col = 0;
			for (; av[row][col]; col++, i++)
			{
				c[i] = av[row][col];
			}
			c[i++] = '\n';
		}
		c[i] = '\0';
	}
	return (c);
}

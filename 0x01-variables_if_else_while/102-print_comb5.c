#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	i = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			l = j + 1;
			k = i;
			while (k < 58)
			{
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i < 57 || j < 56 || k < 57 || l < 57)
					{
						putchar(44);
						putchar(32);
					}
					l++;
				}
				l = 48;
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}

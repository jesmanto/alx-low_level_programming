#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		int j;

		for (j = i + 1; j < 58; j++)
		{
			int k;

			for (k = j + 1; k < 58; k++)
			{
				if (i != j && j != k && k != i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
				}
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	exit(EXIT_SUCCESS);
}

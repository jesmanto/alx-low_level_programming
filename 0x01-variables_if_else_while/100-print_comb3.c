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
			putchar(i);
			putchar(j);
			if (i != 56 && i != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	exit(EXIT_SUCCESS);
}

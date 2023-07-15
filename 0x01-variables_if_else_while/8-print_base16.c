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

	for (i = 0; i < 48; i++)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
	}
	putchar(10);

	exit(EXIT_SUCCESS);
}

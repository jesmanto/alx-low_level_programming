#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n != 101 && n != 113)
			putchar(n);
		n++;
	}

	putchar(10);

	exit(EXIT_SUCCESS);
}

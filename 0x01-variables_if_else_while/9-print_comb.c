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

	for (i = 48; i < 58;)
	{
		putchar(i++);
		if (i != 58)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	exit(EXIT_SUCCESS);
}

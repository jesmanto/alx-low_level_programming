#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of args
 * @argv: args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;
	char *fn;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		puts("Error");
		return (2);
	}

	fn = (char *)main;
	for (fn = (char *)main; n > 0; n--, fn++)
	{
		printf("%02x", *fn & 0xff);
		if (n != 1)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

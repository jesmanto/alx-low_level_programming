#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i = 1, num, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (argv[i][0] >= 'a' && argv[i][0] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		if (argv[i][0] >= 'A' && argv[i][0] <= 'Z')
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		sum  += num;
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}

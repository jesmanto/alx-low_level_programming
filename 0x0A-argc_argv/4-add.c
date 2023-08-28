#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int j, i = 1, num, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (; i < argc; i++)
	{
		j = 0;
		for (; argv[i][j] != '\0'; j++)
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
		num = atoi(argv[i]);
		sum  += num;
	}
	printf("%d\n", sum);
	return (0);
}

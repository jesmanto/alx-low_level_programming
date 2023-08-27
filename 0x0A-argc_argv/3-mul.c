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
	int i = 1;
	int result = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (; i < argc; i++)
		result *= atoi(argv[i]);
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}

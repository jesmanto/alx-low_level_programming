#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	exit(EXIT_SUCCESS);
}

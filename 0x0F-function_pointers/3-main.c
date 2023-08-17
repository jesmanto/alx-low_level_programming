#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - compute math operations
 * @argv: args with 2 numbers and operator
 * @argc: number of args in argv
 * Return: int
 */
int main(int argc, char *argv[])
{
	int n1, n2, (*fn)(int, int);

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if (n2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		puts("Error");
		return (100);
	}
	fn = get_op_func(argv[2]);
	if (fn == NULL)
	{
		puts("Error");
		return (99);
	}
	printf("%d\n", fn(n1, n2));
	return (0);
}

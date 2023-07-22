#include "main.h"
#include <stdio.h>

/**
 * print_greater_than_98 - prints backward
 * @b: number
 * Return: void
 */
void print_greater_than_98(int b)
{
	int i;

	for (i = b; i >= 98; i--)
	{
		if (i != b)
		{
			if (i == 98)
				printf(", %d\n", i);
			else
				printf(", %d", i);
		}
		else
			printf("%d", i);
	}
}


/**
 * print_less_than_98 - prints backward
 * @a: number
 * Return: void
 */
void print_less_than_98(int a)
{
	int i;

	for (i = a; i <= 98; i++)
	{
		if (i != a)
		{
			if (i == 98)
				printf(", %d\n", i);
			else
				printf(", %d", i);
		}
		else
			printf("%d", i);
	}
}

/**
 * print_to_98 - print any number to 98
 * @n: number to start from
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", n);
	else if (n < 98)
		print_less_than_98(n);
	else
		print_greater_than_98(n);
}

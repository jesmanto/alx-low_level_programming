#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverse a string
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int count;

	count = strlen(s) - 1;

	while (count >= 0)
	{
		put(s[count]);
		count--;
	}
	put('\n');
}

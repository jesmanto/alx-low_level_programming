#include "main.h"
#include <stdio.h>
#include <string.h>

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
		puts(s[count]);
		count--;
	}
	puts('\n');
}

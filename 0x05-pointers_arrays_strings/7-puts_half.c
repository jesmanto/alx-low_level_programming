#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int n;

	if (strlen(str) == 0)
		putchar('\n');
	else
	{
		n = (strlen(str) - 1) / 2;
		while (n < length)
		{
			putchar(str[n]);
			n++;
		}

	}
}

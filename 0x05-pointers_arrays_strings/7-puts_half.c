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
	int length, n, m;

	if (strlen(str) == 0)
		putchar('\n');
	else
	{
		n = 0;
		while (str[n] != '\0')
		{
			n++;
		}
		length = n;
		m = length / 2;
		while (m < length)
		{
			putchar(str[m]);
			m++;
		}
		putchar('\n');
	}
}

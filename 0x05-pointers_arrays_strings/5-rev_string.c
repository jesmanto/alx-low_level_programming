#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int pos, count, length;

	char c[500];
	strcpy(c, s);

	length = strlen(s);
	count = length - 1;
	pos = 0;

	while (count >= 0)
	{
		s[pos] = c[count];
		count--;
		pos++;
	}
}

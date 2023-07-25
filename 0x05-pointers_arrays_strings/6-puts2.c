#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print characters
 * @str: array of characters
 * Return: void
 */
void puts2(char *str)
{
	int length, count;

	length = strlen(str);
	count = 0;

	while (count < length)
	{
		if (count % 2 == 0)
			putchar(str[count]);
		count++;
	}
	putchar('\n');
}

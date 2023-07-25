#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}

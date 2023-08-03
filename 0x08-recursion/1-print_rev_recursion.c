#include "main.h"

/**
 * _print_rev_recursion - recursively reverse a string
 * @s: string literal
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(++s);
	putchar(*s);
}

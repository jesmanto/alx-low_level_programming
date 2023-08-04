#include "main.h"
#include <string.h>

/**
 * _strcmp - compare 2 strings
 * @s: string
 * @i: first index
 * @l: last index
 * Return: integer
 */
int _strcmp(char *s, int i, int l)
{
	if (*(s + i) != *(s + l))
		return (0);
	else if (i == l && (*(s + i) == *(s + l)))
		return (1);
	else if (l - i == 1 && *(s + i) == *(s + l))
		return (1);
	i++;
	l--;
	return _strcmp(s, i, l);
}

/**
 * is_palindrome - determine if a string is mirrorable
 * @s: string
 * Return: integer
 */
int is_palindrome(char *s)
{
	int l = strlen(s);

	if (l == 0)
		return (1);
	return (_strcmp(s, 0, l - 1));
}

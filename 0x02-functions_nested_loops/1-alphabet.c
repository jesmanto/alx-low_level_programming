#include "main.h"

/**
 * print_alphabet - prints all alphabets in lowercase
 *
 * Description: prints lowercase alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
	}

	_putchar('\n');
}

#include "main.h"

/**
 * main - prints all alphabets in lowercase
 *
 * Description: prints lowercase alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
	}

	_putchar('\n');

	return (0);
}

include "main.h"

/**
 * print_alphabet_x10 - print alphabets in lines
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int counter = 1;

	while (counter <= 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		counter++;
	}
}

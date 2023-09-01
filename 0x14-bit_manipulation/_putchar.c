#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a char to the standard output
 * @c: character to be written
 * Return: integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

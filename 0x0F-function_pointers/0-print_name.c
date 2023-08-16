#include "main.h"

/**
 * print_name - prints the name
 * @name: name to print
 * @f: function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}

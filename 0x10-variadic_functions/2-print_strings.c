#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: string to be printed between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (va_args(args, char *) == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", va_arg(args, char *));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	putchar('\n');
}

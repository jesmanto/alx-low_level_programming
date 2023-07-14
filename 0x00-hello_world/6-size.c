#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int charsize = sizeof(char);
	int intsize = sizeof(int);
	int longsize = sizeof(long);
	int floatsize = sizeof(float);

	printf("Size of char: %i byte(s)\nSize of an int: %i byte(s)\nSize of a long int: %i byte(s)\nSize of a long long int: %i byte(s)\nSize of a float: %i byte(s)\n", charsize, intsize, longsize, longsize, floatsize);

	return (0);
}

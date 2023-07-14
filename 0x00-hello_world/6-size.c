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
	int longsize = sizeof(long int);
	int llongsize = sizeof(long long int);
	int floatsize = sizeof(float);

	printf("Size of char: %i byte(s)\n", charsize);
	printf("Size of an int: %i byte(s)\n", intsize);
	printf("Size of a long int: %i byte(s)\n", longsize);
	printf("Size of a long long int: %i byte(s)\n", llongsize);
	printf("Size of a float: %i byte(s)\n", floatsize);

	return (0);
}

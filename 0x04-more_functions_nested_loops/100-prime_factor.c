#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the highest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143;
	long int quo = num;
	long int d = 2;

	while (quo != d)
	{
		if (quo % d == 0)
			quo /= d;
		else
			d++;
	}

	printf("%li\n", quo);
	return (0);
}

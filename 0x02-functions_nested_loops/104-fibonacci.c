#include <stdio.h>
#include <stdint.h>

/**
 * main - print the first 98 fibonacci
 * Return: 0
 */
int main(void)
{
	int64_t n, sum, n1, n2;

	int i;

	n1 = 0;
	n2 = 1;
	sum = 0;
	n = 0;

	for (i = 0; i < 98; i++)
	{
		n1 = n;
		sum = n1 + n2;
		printf("%ld, ", sum);

		n = n2;
		n2 = sum;
	}
	putchar('\n');
	return (0);
}

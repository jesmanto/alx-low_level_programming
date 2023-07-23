#include <stdio.h>

/**
 * main - prints the fibonacci series
 * Return: 0
 */
int main(void)
{
	int sum, n;

	sum = 0;
	n = 1;

	while (n <= 50)
	{
		sum += n;

		printf("%d\n", sum);
		n++;
	}
	return (0);
}

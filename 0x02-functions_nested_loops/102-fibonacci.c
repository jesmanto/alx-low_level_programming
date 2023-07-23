#include <stdio.h>

/**
 * main - prints the fibonacci series
 * Return: 0
 */
int main(void)
{
	long int i, n1, n2, n;

	n = 0;
	n1 = 0;
	n2 = 1;
	i = 0;

	while (i < 50)
	{
		n1 = n;
		printf("%li", n1 + n2);
		if (i < 49)
			printf(", ");
		n = n2;
		n2 += n1;
		i++;
	}
	putchar('\n');
	return (0);
}

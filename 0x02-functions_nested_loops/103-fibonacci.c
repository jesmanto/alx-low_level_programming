#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int i, sum, n1, n2;

	n1 = 0;
	n2 = 1;
	sum = 0;
	i = 0;

	while (i < 4000000)
	{

		if ((n2 + n1) % 2 == 0)
			sum += (n2 + n1);

		n1 = n2;
		n2 += n1;
		i = n2;
	}
	printf("%li\n", sum);
	return (0);
}

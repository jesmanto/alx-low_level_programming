#include <stdlib.h>
#include <stdio.h>

int isprime(long int n)
{
	int i;

	if (n <= 1)
		return (0);

	i = 0;

	for (i = 0; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

int gethighestprime(long int n)
{
	int highest = 1;

	int i;

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0 && isprime(i))
		{
			highest = i;

			while (n % i == 0)
				n /= i;
		}
	}

	if (n  > 1 && isprime(n))
		highest = n;
	return highest;
}

int main(void)
{
	printf("%d\n", gethighestprime(612852475143));
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

long int isprime(long int n)
{
	long int i;

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

long int gethighestprime(long int n)
{
	long int  highest = 1;

	long int i;

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
	printf("%ld\n", gethighestprime(612852475143L));
	return (0);
}

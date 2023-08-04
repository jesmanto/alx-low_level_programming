#include "main.h"

/**
 * prime_num - check for prime numbers
 * @n: number
 * @i: iterator
 * Return: integer
 */
int prime_num(int n, int i)
{
	if (n > i && n % i == 0)
		return (0);
	else if (n == i)
		return (1);
	i++;
	return (prime_num(n, i));
}

/**
 * is_prime_number - determines if a number is prime
 * @n: number
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else if (n == 1)
		return  (0);
	return (prime_num(n, 2));
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 5 == 0 && num % 3 == 0)
			printf("%s ", "FizzBuzz");
		else if (num % 3 == 0)
			printf("%s ", "Fizz");
		else if (num % 5 == 0)
			printf("%s ", "Buzz");
		else
			printf("%d ", num);
		num++;
	}
	putchar('\n');

	return (0);
}

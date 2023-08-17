#include <stddef.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - get operator by index
 * @s: funtion pointed to
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t operator[] = {
		{"+", op_add},
		{"*", op_mul},
		{"/", op_div},
		{"-", op_sub},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (i < 5)
	{
		if (strcmp(operator[i].op, s) == 0)
			return (operator[i].f);
		i++;
	}
	return (NULL);
}

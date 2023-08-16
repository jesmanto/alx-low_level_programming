#include "function_pointers.h"

/**
 * int_index - searches for numbers in an arrar
 * @array: array to be searched
 * @size: array size
 * @cmp: function that compares int
 * Return: number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp && size > 0)
		for (; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}

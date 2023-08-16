#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute a function for each element of an array
 * @array: array to be iterated
 * @size: array size
 * @action: action
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array && action)
	{
		for (s = 0; s < size; s++)
			action(array[s]);
	}
}

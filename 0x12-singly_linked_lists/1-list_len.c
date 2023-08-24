#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - returns the number of elements
 * @h: head node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *curr = h;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}

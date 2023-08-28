#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * listint_len - returns the size of the list
 * @h: head node
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		len++;
		curr = curr->next;
	}
	return (len);
}

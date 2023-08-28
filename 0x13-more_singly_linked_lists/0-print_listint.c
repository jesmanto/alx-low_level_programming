#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_listint - prints the number of elements in the list
 * @h: head node
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		len++;
		curr = curr->next;
	}
	return (len);
}

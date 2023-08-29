#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: node head
 * @index: index
 * Return: Address to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	for (; index > 0; index--)
	{
		head = head->next;
	}
	if (index == 0)
		return (head);
	return (NULL);
}

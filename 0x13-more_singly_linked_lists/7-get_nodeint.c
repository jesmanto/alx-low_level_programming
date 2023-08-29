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
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;
	for (; i <= index; i++)
	{
		temp = head;
		head = head->next;
	}
	return (temp);
}

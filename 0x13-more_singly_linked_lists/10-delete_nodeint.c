#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at an index
 * @head: start node
 * @index: position to delete from
 * Return: data (n) of position
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *initial = *head, *rem = NULL;
	unsigned int i = 1;

	if (head == NULL)
		return (-1);
	for (; i < index; i++)
	{
		if (initial->next != NULL)
			initial = initial->next;
		else
			return (-1);
	}
	if (index == 0)
	{
		rem = initial;
		*head = (*head)->next;
		return (-1);
	}
	else
	{
		rem = initial->next;
		initial->next = rem->next;
	}
	free(rem);
	return (1);
}

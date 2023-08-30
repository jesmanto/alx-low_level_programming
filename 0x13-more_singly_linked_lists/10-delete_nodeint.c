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
	listint_t *initial = *head, *rem = NULL, *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (initial != NULL && i < index)
	{
		rem = initial;
		initial = initial->next;
		i++;
	}
	if (initial == NULL)
		return (-1);
	rem->next = initial->next;
	free(initial);
	return (1);
}

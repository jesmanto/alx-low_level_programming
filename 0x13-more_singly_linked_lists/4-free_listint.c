#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees the lists memory
 * @head: first element of the list
 */
void free_listint(listint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
}

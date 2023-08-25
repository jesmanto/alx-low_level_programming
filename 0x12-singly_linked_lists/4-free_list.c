#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_list - frees the lists from the memory
 * @head: head of the list to free
 */
void free_list(list_t *head)
{
	list_t *curr = head, *temp;

	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
}

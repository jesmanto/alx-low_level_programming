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
	list_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = curr->next;
		free(curr->str);
		free(curr);
	}
	free(head);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - pops the head node
 * @head: head node
 * Return: data n of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (*head == NULL)
		return (0);

	h = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(h);

	return (n);
}

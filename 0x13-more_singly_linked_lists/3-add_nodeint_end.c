#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: first node of the list
 * @n: data for the new node
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *curr;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = newnode;
	return (newnode);
}

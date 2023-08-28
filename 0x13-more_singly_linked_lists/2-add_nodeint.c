#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - add node at the beginning of list
 * @head: node head
 * @n: int data of the new node
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head != NULL)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;

		return (newnode);
	}
	return (NULL);
}

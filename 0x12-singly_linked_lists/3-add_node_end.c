#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - add a node at the end of the list
 * @head: pointer to the address of the head node
 * @str: string data of new node
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int l = 0;
	char *s = strdup(str);
	list_t *newnode, *temp;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = l;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
		return (newnode);
	}
	free(newnode);
	return (newnode);
}

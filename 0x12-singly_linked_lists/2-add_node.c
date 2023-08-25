#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node to the beginning
 * @head: pointer to the pointer of the head
 * @str: string of the the head node
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s = strdup(str);
	unsigned int l = 0;
	list_t *newnode;

	if (head != NULL && str != NULL)
	{
		newnode = malloc(sizeof(list_t));
		if (!newnode)
			return (NULL);
		while (*s != '\0')
		{
			l++;
			s++;
		}
		newnode->str = strdup(str);
		newnode->len = l;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	return (NULL);
}

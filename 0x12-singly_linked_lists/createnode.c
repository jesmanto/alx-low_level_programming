#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * createnode - creates a new node
 * @s: string data
 * Return: pointer to a new node
 */
list_t *createnode(char *s)
{
	unsigned int l = 0;
	list_t *new_node = malloc(sizeof(list_t));

	while (*s != '\0')
	{
		l++;
		s++;
	}
	new_node->str = s;
	new_node->len = l;
	new_node->next = NULL;

	return (new_node);
}

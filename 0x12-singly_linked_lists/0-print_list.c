#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - prints a linked list
 * @h: head of linkedlist
 * Return: size of linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *curr = h;

	while (curr != NULL)
	{
		count++;
		if (curr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", curr->len, curr->str);
		curr = curr->next;
	}
	return (count);
}

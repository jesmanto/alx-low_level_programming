#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sums up all data (n) of a list
 * @head: node head
 * Return: sum of all data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

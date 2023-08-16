#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog info
 * @d: pointer to the dog object
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL && d->owner == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

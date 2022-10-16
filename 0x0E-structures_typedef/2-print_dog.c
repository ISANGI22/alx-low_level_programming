#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function that prints a struct dog
 *
 * @d: pointer to a struct or new dog
 *
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit (EXIT_SUCCESS);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d-> = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

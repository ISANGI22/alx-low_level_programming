#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Function that initializes a variable of type struct dog
 *
 * @d: name of the pointer used in the function as new dog
 * @name: the parameter name
 * @age: the paramater age
 * @owner: the parameter owner
 *
 * Return: always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

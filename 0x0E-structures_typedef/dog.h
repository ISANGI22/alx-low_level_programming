#ifndef MAIN_H
#define MAIN_H
#include "main.h"
#include <stdlib.h>

/**
 * struct dog - Structure dans define a dog
 * @name: name given to a specific dog
 * @age: age of a specific dog
 * @owner: a person responsible of a dog
 *
 * Description: THis struct will be used to define a dog with some
 * basic information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

	/**
	 * new_dog: the new dog to be used in the function
	 *
	 * Descritpion: The section is use create a new struct nex dog and
	 * this will be used in the function
	 */

struct dog *new_dog(char *name, float age, char *owner)
{
	struct dog *chien;

	chien = malloc(sizeof(struct dog));
	if (chien == NULL)
		return (NULL);
	chien->name = name;
	chien->age = age;
	chien->owner = owner;
	return (chien);
}
#endif

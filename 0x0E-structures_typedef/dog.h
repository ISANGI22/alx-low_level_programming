#ifndef DOG
#define DOG

#include <stdlib.h>

/**
 * struct dog - Structure that define a dog
 * @name: name given to a specific dog
 * @age: age of a specific dog
 * @owner: a person responsible of a dog
 * @new_dog: the new dog to be used in the function
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
	 * struct new_dog: the new dog to be used in the function
	 * @chien: pointer to use in the function
	 * 
	 * Description: The new objet will be used as a child to the structure
	 * for creating a new user from the parent structure
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

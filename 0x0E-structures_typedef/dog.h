#ifndef DOG
#define DOG

/**
 * struct dog - Structure that define a dog
 * @name: name given to a specific dog
 * @age: age of a specific dog
 * @owner: a person responsible of a dog
 * @new_dog: the new dog to be used in the function
 * Description: THis struct will be used to define a dog with some
 * basic information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_s;

#endif

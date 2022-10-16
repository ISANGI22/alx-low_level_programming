#ifndef DOG
#define DOG

/**
 * struct dog - Structure that define a dog
 * @name: name given to a specific dog
 * @age: age of a specific dog
 * @owner: a person responsible of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/*prototype*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

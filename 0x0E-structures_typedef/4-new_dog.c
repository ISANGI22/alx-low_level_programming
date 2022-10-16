#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - function that calculate the length of a string
 *
 * @str: the string to be calculated
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _strcopy - Function that copy a string pointed to the src + '\0'
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: a string to char
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Function that creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: The new dog, a pointer to a dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *chaca;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	chaca = malloc(sizeof(dog_t));
	if (chaca == NULL)
		return (NULL);
	chaca->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (chaca->name == NULL)
	{
		free(chaca);
		return (NULL);
	}
	chaca->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (chaca->owner == NULL)
	{
		free(chaca->name);
		free(chaca);
		return (NULL);
	}
	chaca->name = _strcopy(chaca->name, name);
	chaca->age = age;
	chaca->owner = _strcopy(chaca->owner, owner);
	return (chaca);
}

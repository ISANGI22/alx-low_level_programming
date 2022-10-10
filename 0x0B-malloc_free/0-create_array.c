#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars, and intializes
 * it with a specific char
 *
 * @size: size of the array
 * @c: return type of the pointer
 *
 * Return: NULL is size = 0, returns a point to a array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(size * sizeof(char));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;
	ch[size] = '\0';
	return (ch);
}

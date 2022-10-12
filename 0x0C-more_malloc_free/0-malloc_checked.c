#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Functions that allocates memory using malloc
 * @b: integer to be used in the function
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

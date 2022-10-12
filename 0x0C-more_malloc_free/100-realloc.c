#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the previously allocated with a call to malloc
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the new memory block
 *
 * If new_size > old_size, the added memory should not be initialized
 * If new_size == old_size do not do anuthing and return ptr
 * If ptr is NULL, the the call is equivalent to malloc(new_size),
 * for all value of old-size and new_size
 * If new_size is equal to zero, and ptr is not NULL, then the
 * call is equivalent to free(ptr). Return NULL
 * Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *cl, *rel;
	unsigned int i;

	if (ptr != NULL)
		cl = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	rel = malloc(new_size);
	if (rel == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		rel[i] = cl[i];
	}
	free(ptr);
	return (rel);
}

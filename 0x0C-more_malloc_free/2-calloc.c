#include "main.h"

/**
 * _calloc - Function that allocates memoty for an array using malloc
 *
 * @nmemb: number of element of the array
 * @size: size of the element of the array
 *
 * Return: pointer to the allocated memory
 * If nmemb or size is 0, then the function returns NULL
 * If malloc fails, then the function returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);
	for (j = 0; j < nmemb * size; j++)
		pt[j] = 0;
	return (p);
}

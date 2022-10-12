#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 *
 * @min: first caracter of the array
 * @max: last caracter of the array
 *
 * Return: pointer to the newly created array
 * if min > max return NULL
 * if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *ch;
	int i = 0;
	int t = min;

	if (min > max)
		return (NULL);
	ch = malloc((max - min + 1) * sizeof(int));
	if (ch == NULL)
		return (NULL);
	while (i <= max - min)
		ch[i++] = t++;
	return (ch);
}

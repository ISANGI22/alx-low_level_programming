#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional
 * array of integers
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: Null on failure. If wifth or heiht is 0 or negative,
 * return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, **ch;

	if (width <=0 || height <= 0)
		return ('\0');
	ch = malloc(sizeof(int *) * height);
	if (ch == NULL)
	{
		free(ch);
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		ch[i] = malloc(sizeof(int) * width);
		if (ch[i] == NULL)
		{
			for (k = i; k >= 0; k--)
				free(ch[k]);
			free(ch);
			return ('\0');
		}
		for (j = 0; j < width; j++)
			ch[i][j] = 0;
	}
	return (ch);
}

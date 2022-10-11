#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grip previously
 * created by your alloc_grid function
 *
 * @grid: pointer to pointer used in the function
 * @height: height of the function
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}

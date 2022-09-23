#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of int.
 *
 * @a: integer 1
 * @n: integer 2
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; j = n - 1; i < j; i++, j--)
	{
		int k = *a[i];
		*a[i] = *a[j];
		*a[j] = k;
	}
}

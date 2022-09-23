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

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}

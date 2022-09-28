#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of the two diagonals of a square
 * 	matrix of integers
 *
 * @a: integer to be used 
 * @size: the size of the matrix
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i];
		a = a + size;
	}
	a = a - size;
	for (i = 0; i < size; i++)
	{
		s2 = s2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", s1, s2);
}

#include "main.h"

/**
 * void swap_int - Function to swap the values of two integers
 * @a: parameter 1
 * @b: parameter 2
 * Return: the value swaped *a*b
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}	

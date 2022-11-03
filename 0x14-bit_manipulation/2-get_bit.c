#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 *
 * @n: number to be converted in binary
 * @index: the counter or place of the specified bit to be returned 
 *
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}

#include "main.h"

/**
 * set_bit - Function that sets the value of bit to 1 at a given index
 *
 * @n: pointer to a bit
 * @index: index starting from 0 of the bit you want to set
 *
 * Return: 1 if it wokrked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}

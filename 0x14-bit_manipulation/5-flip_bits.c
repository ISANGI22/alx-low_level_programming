#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need to
 * flip to get from on number to another
 * @n: parameter one
 * @m: parameter two
 *
 * Return: A number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}


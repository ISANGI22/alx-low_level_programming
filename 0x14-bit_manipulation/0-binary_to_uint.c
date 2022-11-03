#include "main.h"

/**
 * binary_to_uint - Function that converts a binary to an unisigned int
 *
 * @b: parameter to be used in the function
 *
 * Return: the converted number, or 0 if
 * there is one more chars in the string b that is not
 * 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d_val = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		d_val = 2 * d_val + (b[i] - '0');
	}
	return (d_val);
}

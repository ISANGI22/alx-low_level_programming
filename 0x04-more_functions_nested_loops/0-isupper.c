#include "main.h"

/**
 * _isupper - check the uppercase character
 * @c: the character passed over for checking
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
		return (1);
	else
		return (0);
}

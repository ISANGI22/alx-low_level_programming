#include "main.h"

/**
 * _isdigit - check the uppercase character
 * @c: the character passed over for checking
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' &&  c <= '9')
		return (1);
	else
		return (0);
}

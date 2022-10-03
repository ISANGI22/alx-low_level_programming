#include "main.h"

/**
 * _isalpha - Checking for alphabetic character
 * @c: The caracter passed over for checking
 *
 * Return: 1 if chacarter is lowercase, 0 UPPERCASE
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

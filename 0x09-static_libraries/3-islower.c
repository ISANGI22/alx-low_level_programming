#include "main.h"

/**
 * _islower - Checking for lowercase character
 * @c: The caracter passed over for checking
 *
 * Return: 1 if chacarter is lowercase, 0 UPPERCASE
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

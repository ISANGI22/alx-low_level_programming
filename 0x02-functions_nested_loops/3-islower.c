#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _islower - Checking for lowercase character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}

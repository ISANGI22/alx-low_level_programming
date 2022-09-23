#include "main.h"

/**
 * *string_toupper - Function that changes all lowercase letter to a string to uppercase
 *
 * @i: caracter to be used
 *
 * Return: Always 0
 */
char *string_toupper(char *i)
{
	int j = 0;

	while (i[j])
	{
		if (i[j] >= 97 && i[j] <= 122)
			i[j] = i[j] - 32;
		j++;
	}
}

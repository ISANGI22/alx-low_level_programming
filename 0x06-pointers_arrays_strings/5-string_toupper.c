#include "main.h"

/**
 * *string_toupper - Function that changes all lowercase
 *	letter to a string to uppercase
 *
 * @str: caracter to be used
 *
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

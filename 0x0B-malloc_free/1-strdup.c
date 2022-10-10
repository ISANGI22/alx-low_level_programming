#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Functions that returns a pointer to a newlly allocate space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: string to be used in the function
 *
 * Return: NULL is str = NULL. On success, the functions returns a pointer
 * to the duplicated string. It returns NULL if insufficient memory was
 * available
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int longu = 0;
	char *ch;

	if (str == NULL)
		return ('\0');
	while (str[longu] != '\0')
		longu++;
	longu++;
	ch = malloc(longu * sizeof(*str));

	if (ch == NULL)
		return ('\0');

	for (i = 0; i < longu; i++)
		ch[i] = str[i];
	ch[i] = '\0';

	return (ch);
}

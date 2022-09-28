#include "main.h"

/**
* *_strchr - Function that locates a character in a string
*
* @s: pointer to be used
* @c: character to be used
*
* Return: a pointer if the first occurence if character c in the string or NULL
*/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}

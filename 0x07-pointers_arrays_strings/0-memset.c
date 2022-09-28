#include "main.h"

/**
* _memset - Function that fills memory with a constant byte
* @s: pointer to be used
* @b: char to be used
* @n: integer to be used
* Return: a pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}

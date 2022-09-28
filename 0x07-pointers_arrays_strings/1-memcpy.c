#include "main.h"

/**
* *_memcpy - Function that copies memory area
*
* @dest: character destination
* @src: character source
* @n: interger to be used
*
* Return: charater dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *d = dest;
	char *s = src;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

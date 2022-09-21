#include "main.h"

/**
 * *_strcat - function that concatenates twa strings
 *
 * @dest: source string
 * @src: destination string
 *
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int longu = 0, j;

	while (dest[longu] != '\0')
	{
		++longu;
	}
	for (j = 0; src[j] != '\0'; ++j, ++longu)
	{
		dest[longu] = src[j];
	}
	dest[longu] = '\0';
	return (dest);
}

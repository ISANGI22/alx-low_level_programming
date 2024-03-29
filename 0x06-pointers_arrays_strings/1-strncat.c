#include "main.h"
#include <string.h>

/**
 * *_strncat - Function to concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: parameter to be used
 *
 * Return: Always dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

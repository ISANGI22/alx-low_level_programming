#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by scr
 * including the termination null byte (\0)
 * to the buffer pointed to by dest
 * @dest: parameter 1
 * @src: parameter 2
 * Return: pointer to desk
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}

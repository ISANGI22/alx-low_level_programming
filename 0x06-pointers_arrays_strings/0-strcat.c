#include "main.h"
#include <string.h>

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
	strcat(dest, src);
	return dest;
}

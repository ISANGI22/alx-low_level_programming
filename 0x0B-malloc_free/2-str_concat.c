#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * The returned pointer should point to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: if NULL is passed, treat as an empty string
 * the functions should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int i, j;
	char *ch;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + x) != '\0')
		x++;
	while (*(s2 + y) != '\0')
		y++;
	ch = malloc(1 + (x * sizeof(*s1)) + (y * sizeof(*s2)));
	if (ch == NULL)
		return ('\0');
	for (i = 0; i < x; i++)
		ch[i] = s1[i];
	for (j = 0; i < y; j++)
		ch[j] = s2[j];
	return (ch);
}

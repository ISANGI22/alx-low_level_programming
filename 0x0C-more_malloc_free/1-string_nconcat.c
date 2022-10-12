#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: integer to be used the function
 *
 * Return: pointer to a new allocated space in memory which contains s1
 * followed by the first n bytes of s2 and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[j] != '\0')
		j++;
	while (s2[k] != '\0')
		k++;
	if (n > k)
		n = k;
	pt = malloc((j + n + 1) * sizeof(char));
	if (pt == NULL)
		return (0);
	for (i = 0; i < j; i++)
	{
		pt[i] = s1[i];
	}
	for (; i < j + n; i++)
	{
		pt[i] = s2[i - j];
	}
	pt[i] = '\0';
	return (pt);
}

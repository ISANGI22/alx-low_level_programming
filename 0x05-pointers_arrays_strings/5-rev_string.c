#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: parameter to be used
 * Return: Always 0
 */
void rev_string(char *s)
{
	char c;
	int i, j, k;

	j = 0;
	k = 0;

	while (s[j] != '\0')
		j++;

	k = j - 1;
	for (i = 0; i < j / 2; i++)
	{
		c = s[i];
		s[i] = s[k];
		s[k] = c;
		k -= 1;
	}
}

#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 *
 * @str: string to be used
 *
 * Return: a string
 */
char *cap_string(char *str)
{
	char eg[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int lon = 13;
	int j = 0, k;

	while (str[j])
	{
		k = 0;
		while (k < lon)
		{
			if ((j == 0 || str[j - 1] == eg[i]) && (str[j] >= 97 && str[j] <= 122))
				str[j] = str[j] - 32;
			k++;
		}
		j++;
	}
	return (str);
}

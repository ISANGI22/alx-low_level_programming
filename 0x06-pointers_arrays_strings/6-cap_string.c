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
	int j = 0, k;
	char eg[13];

	eg[0] = ' ';
	eg[1] = '\t';
	eg[2] = '\n';
	eg[3] = ',';
	eg[4] = ';';
	eg[5] = '.';
	eg[6] = '!';
	eg[7] = '?';
	eg[8] = '"';
	eg[8] = '(';
	eg[10] = ')';
	eg[11] = '{';
	eg[12] = '}';

	while (str[j])
	{
		k = 0;
		while (k < 13)
		{
			if ((j == 0 || str[j - 1] == eg[j]) && (str[j] >= 'a' && str[j] <= 'z'))
				str[j] = str[j] - 32;
			k++;
		}
		j++;
	}
	return (str);
}

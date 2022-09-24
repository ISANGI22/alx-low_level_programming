#include "main.h"

/**
 * *leet - Function that encodes a string into 1337
 *
 * @x: parameter to be used in the funciton
 *
 * Return: Always 0
 */
char *leet(char *x)
{
	int i = 0, j, lon = 5;
	char sc[5] = {'A', 'E', 'O', 'T', 'L'};
	char scr[5] = {'4', '3', '0', '7', '1'};

	while (x[i])
	{
		j = 0;

		while (j < lon)
		{
			if (x[i] == sc[j] || x[i] - 32 == sc[j])
				x[i] = scr[j];
			j++;
		}
		i++;
	}
	return (x);
}


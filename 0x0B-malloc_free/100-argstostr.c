#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments of your program
 *
 * @ac: argc of the function
 * @av: argv of the function of parameter
 *
 * Return: Pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int ct = 0;
	int cts = 0;
	char *ch;

	if (ac == 0 || av == NULL)
		return ('\0');
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			cts++;
		}
		cts++;
	}
	ch = malloc(sizeof(char) * cts + 1);
	if (ch == NULL)
		return ('\0');
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ch[ct++] = av[i][j];
		}
		ch[ct++] = '\n';
	}
	ch[cts] = '\0';
	return (ch);
}




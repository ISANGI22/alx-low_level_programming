#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @: parameter to be used 
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);

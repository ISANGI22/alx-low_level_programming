#include "main.h"

/**
 * _strlen_recursion - Functions that returns the length of a string
 *
 * @s: string to get the length
 *
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int longu = 0;

	if (*s)
	{
		longu++;
		longu = longu + _strlen_recursion(s + 1);
	}
	return (longu);
}

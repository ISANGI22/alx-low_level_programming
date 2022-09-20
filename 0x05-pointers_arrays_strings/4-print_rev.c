#include "main.h"
#include <string.h>

/**
 * print_rev - print a strinf in reverse followed by a new line
 * @s: parameter to be used
 * Return: always 0
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>

/**
 * puts_half - Function that prints half of a string folllowed by a new line
 * @str: parameter to be passed
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i, j;

	i = strlen(str);
	if (i % 2 == 1)
	{
		y = x / 2 + 1;
	}
	else
	{
		y = x / 2;
	}
	for (k = j; k < i; k++)
		_putchar(str[i]);
	_putchar('\n');
}

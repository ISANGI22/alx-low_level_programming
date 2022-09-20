#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string
 *         starting with the first character followed by a new line
 * @str: parameter to be used
 * Return: always 0
 */
void puts2(char *str)
{
	int i, j;

	j = strlen(str);
	for ((i % 2) = 0; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts_recursion - Function that prints a string, followed by anew line
 *
 * @s: string to be printed
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}


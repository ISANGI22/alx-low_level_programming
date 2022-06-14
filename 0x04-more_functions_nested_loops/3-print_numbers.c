#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 *@a: integer used for loop
 *
 * Return: the value of mul
 */
void print_numbers(void)
{
	int number = 0;
	for (number = 0; number < 10; number++)
		_putchar(number);
	_putchar('\n');
}

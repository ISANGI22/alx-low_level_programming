#include "main.h"

/**
 * print_sign - Checking for alphabetic character
 * @n: The caracter passed over for checking
 *
 * Return: return 1 and prints + is n is greter than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

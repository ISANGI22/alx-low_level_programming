#include "main.h"

int check_divisible(int nomb, int div);
int is_prime_number(int n);

/**
 * check_divisible - Function to check if a number in divisible
 *
 * @nomb: The integer to be checked
 * @div: the divisor
 *
 * Return: 0 if the number is divisible, 1 if not
 */
int check_divisible(int nomb, int div)
{
	if (nomb % div == 0)
		return (0);
	if (div == nomb / 2)
		return (1);
	return (check_divisible(nomb, div + 1));
}

/**
 * is_prime_number - Function that returns 1 if the input integer
 * 	is a prime number, otherwise return 0
 *
 * @n: integer to be used in the function
 *
 * Return: always 0
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (check_divisible(n, div));
}

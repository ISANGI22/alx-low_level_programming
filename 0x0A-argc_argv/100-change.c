#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - Function that prints the minimum number of coins to make
 * change for an amount of money
 *
 * @argc: argument to count the parameters
 * @argv: argument to hlod the parameters
 * @cents: the amount of cents you need to give back
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int cent, change, montant;

	UNUSED(argc);

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}

	montant = atoi(argv[
	if (montant < 0)
	{
		printf("0\n");
	}



	return (0);
}

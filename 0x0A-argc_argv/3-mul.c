#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)

/**
 * main - Function that multiplies two numbers
 *
 * @argc: argument to count the parameters
 * @argv: argument to hold the parameters
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, som = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			som = som * atoi(argv[i]);
		}
		printf("%d\n", som);
	}
	return (0);
}

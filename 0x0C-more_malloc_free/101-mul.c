#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Functions that multiplies two positive numbers
 *
 * @argc: number of arguments
 * @argv: arguments passed to the function
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Function that adds positive numbers
 *
 * @argc: argument to count the parameters
 * @argv: argument to hold the parameters
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unsigned int i, som = 0;

	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		som = som + atoi(argv[argc]);
	}
	printf("%d\n", som);
	return (0);
}

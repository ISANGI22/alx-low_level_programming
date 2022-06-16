#include <stdio.h>

/**
 * main - Prints the FizzBuzz
 * Return: Always 0
 */
int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz \n");
		else if ((i % 5) == 0)
		{
			if (i != 100)
				printf("Buzz ");
			else
				printf(("Buzz ");
		}
			printf("Buzz \n");
		else if ((i % 15) == 0)
			printf("FizzBuzz \n");
		else
			printf("%d ", i);
	}
	return (0);
}

#include <stdio.h>

/**
 * main - prints the FizzBuzz sequence from 1 to 100
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1)  /* Only print a space for numbers after the first one */
		{
			printf(" ");
		}

		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}

	printf("\n");

	return (0);
}

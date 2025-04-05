#include <stdio.h>

/**
 * is_palindrome - Checks if a number is a palindrome.
 * @n: The number to check.
 *
 * Return: 1 if it's a palindrome, 0 otherwise.
 */
int is_palindrome(int n)
{
	int reversed = 0, original = n;

	while (n > 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}

	return (original == reversed);
}

/**
 * main - Finds and prints the largest palindrome made from the
 *        product of two 3-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, product, max = 0;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			product = i * j;
			if (is_palindrome(product) && product > max)
				max = product;
		}
	}

	printf("%d\n", max);
	return (0);
}


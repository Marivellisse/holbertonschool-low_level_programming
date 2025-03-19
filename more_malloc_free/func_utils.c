#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_error - Prints "Error" and exits with 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_digit - Checks if a string contains only digits
 * @s: The string to check
 * Return: 1 if only digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - Returns the length of a string
 * @s: The string
 * Return: Length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * multiply - Multiplies two numbers represented as strings
 * @num1: First number string
 * @num2: Second number string
 * @result: Array to store result digits
 * @len1: Length of num1
 * @len2: Length of num2
 */
void multiply(char *num1, char *num2, int *result, int len1, int len2)
{
	int i, j, n1, n2, carry;

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}

		if (carry)
			result[i + j + 1] += carry;
	}
}

/**
 * print_result - Prints the result array
 * @result: Array of digits
 * @size: Size of the result array
 */
void print_result(int *result, int size)
{
	int i = 0;
	int started = 0;

	while (i < size)
	{
		if (!started && result[i] != 0)
			started = 1;

		if (started)
			putchar(result[i] + '0');
		i++;
	}

	if (!started)
		putchar('0');

	putchar('\n');
}


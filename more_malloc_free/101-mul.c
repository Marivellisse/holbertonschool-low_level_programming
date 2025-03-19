#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/* Prototipos para funciones que movimos */
int is_digit(char *s);
int _strlen(char *s);
void print_error(void);

/**
 * multiply - multiplies two numbers represented as strings
 * @num1: first number string
 * @num2: second number string
 * @result: array to store the result
 * @len1: length of num1
 * @len2: length of num2
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
 * print_result - prints the result array
 * @result: array containing result digits
 * @size: size of the result array
 */
void print_result(int *result, int size)
{
	int i = 0;

	while (i < size && result[i] == 0)
		i++;

	if (i == size)
		putchar('0');
	else
	{
		while (i < size)
			putchar(result[i++] + '0');
	}

	putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, total_len, *result;

	if (argc != 3)
		print_error();

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
		print_error();

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	total_len = len1 + len2;

	result = calloc(total_len, sizeof(int));
	if (!result)
		exit(98);

	multiply(num1, num2, result, len1, len2);
	print_result(result, total_len);

	free(result);
	return (0);
}


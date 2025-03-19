#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string contains only digits
 * @s: the string to check
 * Return: 1 if true, 0 if false
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
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * print_error - prints "Error" and exits with 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}


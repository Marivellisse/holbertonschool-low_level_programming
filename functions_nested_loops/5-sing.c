#include "main.h"
/**
 * print_sign - It sees if the number is <0 or >0
 * @n: it the number
 * Return: 1 if positive or 0 if zero or -1 if negative
 */
int print_sign(int n)
{
	/* This whole line of if statemant are check for postive and negative numbers*/
	if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}

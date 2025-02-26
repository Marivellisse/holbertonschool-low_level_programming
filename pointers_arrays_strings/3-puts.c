#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Pointer to the string.
 */
void _puts(char *str)
{
	while (*str)  /*  Loop until the null terminator is reached */
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');  /*  Print a new line */
}

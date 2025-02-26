#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')  /* Loop until null terminator is found */
	{
		length++;
	}
	return (length);
}

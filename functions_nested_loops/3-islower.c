#include "main.h"
/**
 * _islower - It's checks if the char is a lowercase letter
 * @c: it's the char
 *
 * Return: 1 if a lowercase letter or 0 if not
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}

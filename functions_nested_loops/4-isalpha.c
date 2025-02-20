#include "main.h"
/**
 * _isalpha - It's check if the char is a letter
 * @c: It's a char
 *
 * Return: 1 if a letter else 0
 */
int _isalpha(int c)
{
	if (c > 'A' && c < 'Z')
		return (1);
	else if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}

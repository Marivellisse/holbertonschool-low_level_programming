#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if they can be considered identical
 * @s1: the first string
 * @s2: the second string (may contain wildcard '*')
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings reach the end, they match */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If s2 has '*', it can match zero or more characters in s1 */
	if (*s2 == '*')
	{
		/* Move to the next character in s2 OR */
		/* stay at current * in s2 but move in s1 */
		return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));
	}

	/* If current characters match (including when both are '\0') */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* No match */
	return (0);
}

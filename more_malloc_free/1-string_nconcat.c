#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to take from s2
 *
 * Return: pointer to newly allocated memory containing s1 + n bytes of s2
 *         or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get lengths of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* If n >= len2, use the entire s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for new string */
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy n bytes of s2 */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	/* Null-terminate */
	concat[i] = '\0';

	return (concat);
}


#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length needed for the new string */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			total_len++;
			j++;
		}
		total_len++; /* For the '\n' */
	}

	str = malloc(sizeof(char) * (total_len + 1)); /* +1 for '\0' */

	if (str == NULL)
		return (NULL);

	k = 0;

	/* Copy arguments into new string */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[k++] = av[i][j++];
		}
		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}


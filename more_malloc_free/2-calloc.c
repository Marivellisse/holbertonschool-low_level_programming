#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory initialized to zero,
 *         or NULL if nmemb/size is 0 or malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* Initialize allocated memory to zero */
	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}


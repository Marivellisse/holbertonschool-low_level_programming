#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory (can be NULL)
 * @old_size: size of the old memory block in bytes
 * @new_size: size of the new memory block in bytes
 *
 * Return: pointer to the newly allocated memory, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, min_size;

	/* If new_size is equal to old_size, do nothing and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* If ptr is NULL, treat it as malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* If new_size is 0 and ptr is not NULL, free(ptr) and return NULL */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy data from old memory block to new block */
	min_size = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < min_size; i++)
		new_ptr[i] = ((char *)ptr)[i];

	/* Free old memory block */
	free(ptr);

	return (new_ptr);
}


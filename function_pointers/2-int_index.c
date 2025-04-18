#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of first element for which cmp function returns non-zero
 *         -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}


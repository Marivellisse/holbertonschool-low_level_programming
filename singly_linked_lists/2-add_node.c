#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer to the head node.
 * @str: String to duplicate and add to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	dup = strdup(str);
	if (!dup)
	{
		free(new);
		return (NULL);
	}

	new->str = dup;
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}


#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	/* Calculate string length */
	while (str && str[len])
		len++;

	/* Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	/* Duplicate the string */
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = len;

	/* The link: New node points to what head was pointing to */
	new->next = (*head);

	/* Move the head to point to the new node */
	(*head) = new;

	return (new);
}

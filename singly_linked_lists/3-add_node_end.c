#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to be duplicated and added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	/* Calculate the length of the string */
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
	new->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Traverse to the last node */
	while (temp->next != NULL)
		temp = temp->next;

	/* Link the last node to the new node */
	temp->next = new;

	return (new);
}

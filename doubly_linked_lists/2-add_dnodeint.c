#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be added in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	/* 1. Create the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* 2. Initialize the node */
	new_node->n = n;
	new_node->prev = NULL;      /* It will be the first node */
	new_node->next = *head;     /* Point it to the current first node */

	/* 3. Re-link the existing list to the new node */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* 4. Update the head to point to the new node */
	*head = new_node;

	return (new_node);
}

#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be added in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	if (head == NULL)
		return (NULL);

	/* 1. Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* 2. Set the data and initial pointers */
	new_node->n = n;
	new_node->next = NULL;

	/* 3. If the list is empty, make new node the head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* 4. Traverse to the last node */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	/* 5. Link the last node and the new node together */
	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}

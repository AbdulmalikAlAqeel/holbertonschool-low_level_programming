#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return, starting from 0
 *
 * Return: the address of the node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	/* Initialize i at 0 and move until head is NULL */
	for (i = 0; head != NULL; i++)
	{
		/* If the current position matches the index, return this node */
		if (i == index)
			return (head);

		/* Move to the next node */
		head = head->next;
	}

	/* If we reached here, the node doesn't exist */
	return (NULL);
}

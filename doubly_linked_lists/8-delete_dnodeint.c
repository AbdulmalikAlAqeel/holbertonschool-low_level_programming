#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	/* 1. Handle deletion of the first node */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* 2. Traverse to the node at the specific index */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* 3. Check if index is out of range */
	if (current == NULL)
		return (-1);

	/* 4. Unlink the node and adjust pointers */
	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;

	/* 5. Free the memory */
	free(current);

	return (1);
}

#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL)
	{
		/* 1. Save the address of the next node */
		next_node = head->next;

		/* 2. Free the memory of the current node */
		free(head);

		/* 3. Move the head pointer to the next node we saved */
		head = next_node;
	}
}

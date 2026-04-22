#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the list_t list to be freed
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		/* 1. Save the pointer to the next node */
		temp = head->next;

		/* 2. Free the string inside the node (allocated by strdup) */
		free(head->str);

		/* 3. Free the node structure itself */
		free(head);

		/* 4. Move to the next node we saved in temp */
		head = temp;
	}
}

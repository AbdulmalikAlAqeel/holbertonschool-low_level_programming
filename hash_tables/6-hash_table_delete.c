#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and frees all memory.
 * @ht: A pointer to the hash table to delete.
 *
 * Description: Navigates through the array and each linked list to
 * free keys, values, nodes, the array itself, and finally the table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	/* 1. Iterate through every slot in the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		/* 2. Traverse the linked list (chain) in each slot */
		while (node != NULL)
		{
			/* Store the next node before freeing the current one */
			temp = node->next;

			/* 3. Free the strings we duplicated with strdup */
			free(node->key);
			free(node->value);

			/* 4. Free the node structure itself */
			free(node);

			/* Move to the next saved node */
			node = temp;
		}
	}

	/* 5. Free the array of pointers */
	free(ht->array);

	/* 6. Free the main hash table structure */
	free(ht);
}

#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * Description: Prints the key/value pairs in the order they appear 
 * in the hash table array. Format: {'key': 'value', 'key': 'value'}
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int comma_flag = 0; /* Flag to control comma printing */

	if (ht == NULL)
		return;

	printf("{");

	/* Traverse every slot in the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		/* Traverse the linked list in each slot (handling collisions) */
		while (node != NULL)
		{
			/* If this isn't the first element printed, add a comma */
			if (comma_flag == 1)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);

			/* After the first pair is printed, enable the comma flag */
			comma_flag = 1;
			node = node->next;
		}
	}

	printf("}\n");
}

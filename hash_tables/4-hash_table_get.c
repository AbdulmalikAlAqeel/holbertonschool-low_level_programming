#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	/* 1. Validation check */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* 2. Get the index using the key_index function */
	index = key_index((const unsigned char *)key, ht->size);

	/* 3. Go to the bucket and traverse the linked list (Chaining) */
	temp = ht->array[index];
	while (temp != NULL)
	{
		/* If the key matches, return the pointer to the value */
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	/* 4. If the loop ends without finding the key */
	return (NULL);
}

#include "hash_tables.h"

/**
 * create_and_add_node - Helper function to create and add a node at the start.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value.
 * @idx: The index where to add the node.
 * Return: 1 on success, 0 on failure.
 */
int create_and_add_node(hash_table_t *ht, const char *key,
			const char *value, unsigned long int idx)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}

	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}

	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value.
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *new_val;

	if (!ht || !key || !*key || !value)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	/* Check for existing key to update value */
	tmp = ht->array[i];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_val = strdup(value);
			if (!new_val)
				return (0);
			free(tmp->value);
			tmp->value = new_val;
			return (1);
		}
		tmp = tmp->next;
	}

	return (create_and_add_node(ht, key, value, i));
}

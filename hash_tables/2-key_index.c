#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 * @key: The key (string) to hash.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* 1. Get the large hash value using the djb2 function */
	hash_value = hash_djb2(key);

	/* 2. Use the modulo operator to stay within array bounds */
	return (hash_value % size);
}

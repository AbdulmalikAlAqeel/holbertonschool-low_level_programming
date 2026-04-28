#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash value (unsigned long int).
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* The "magic" starting number */
	hash = 5381;

	/* Iterate through each character in the string */
	while ((c = *str++))
	{
		/**
		 * The core formula:
		 * (hash << 5) + hash is equivalent to hash * 33.
		 * We then add the ASCII value of the current character 'c'.
		 */
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}

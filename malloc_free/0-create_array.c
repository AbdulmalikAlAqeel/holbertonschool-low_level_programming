#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	/* 1. Check if size is 0 as per requirements */
	if (size == 0)
	{
		return (NULL);
	}

	/* 2. Allocate memory for the array */
	/* We use sizeof(char) which is 1 byte */
	ptr = malloc(sizeof(char) * size);

	/* 3. Check if malloc failed (returns NULL) */
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* 4. Fill the array with the given character */
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	/* 5. Return the pointer to the newly created array */
	return (ptr);
}

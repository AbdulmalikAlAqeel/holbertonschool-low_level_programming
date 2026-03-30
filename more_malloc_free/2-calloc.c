#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total_size, i;

	/* 1. Check if either input is zero */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* 2. Calculate the total number of bytes needed */
	total_size = nmemb * size;

	/* 3. Allocate memory using malloc */
	ptr = malloc(total_size);

	/* 4. Check if malloc failed */
	if (ptr == NULL)
		return (NULL);

	/* 5. Initialize every byte to zero */
	/* We use char * because a char is always 1 byte in C */
	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}

	/* 6. Return the pointer as a generic void pointer */
	return ((void *)ptr);
}

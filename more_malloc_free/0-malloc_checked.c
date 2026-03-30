#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the function causes normal process termination
 * with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* 1. Attempt to allocate 'b' bytes in the Heap */
	ptr = malloc(b);

	/* 2. Check if the allocation was successful */
	if (ptr == NULL)
	{
		/* 3. If NULL, terminate the program immediately with status 98 */
		exit(98);
	}

	/* 4. Return the valid pointer to the caller */
	return (ptr);
}

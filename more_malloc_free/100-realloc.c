#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: pointer to the new memory block, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	/* Case 1: Sizes are the same */
	if (new_size == old_size)
		return (ptr);

	/* Case 2: Freeing memory */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* Case 3: Behaves like malloc */
	if (ptr == NULL)
		return (malloc(new_size));

	/* Allocate new block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Cast to char* to perform byte-by-byte copying */
	old_ptr = ptr;

	/* Copy data based on the smaller of the two sizes */
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}

	/* Free the old block and return the new one */
	free(ptr);
	return (new_ptr);
}

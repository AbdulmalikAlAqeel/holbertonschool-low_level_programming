#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers within a specific range.
 * @min: The starting value (inclusive).
 * @max: The ending value (inclusive).
 *
 * Return: A pointer to the newly created array, 
 * or NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	/* 1. Logic Check: If min is greater than max, it's an invalid range */
	if (min > max)
		return (NULL);

	/* 2. Calculate the number of elements needed */
	/* Example: 0 to 10 requires 11 spaces (10 - 0 + 1) */
	size = max - min + 1;

	/* 3. Allocate memory for 'size' number of integers */
	array = malloc(sizeof(int) * size);

	/* 4. Check if the memory allocation was successful */
	if (array == NULL)
		return (NULL);

	/* 5. Fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}

	/* 6. Return the pointer to the calling function */
	return (array);
}

#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the starting value (inclusive)
 * @max: the ending value (inclusive)
 *
 * Return: pointer to the newly created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}

	return (array);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer in an array
 * @array: the array to search in
 * @size: the number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: index of the first element for which cmp does not return 0.
 * If no element matches or size <= 0, return -1.
 * If array or cmp is NULL, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Check if the array or function pointer is NULL, or if size is invalid */
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	/* Iterate through each element of the array */
	for (i = 0; i < size; i++)
	{
		/* * Call the comparison function 'cmp' with the current element.
		 * If it returns a non-zero value, it means the condition is met.
		 */
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	/* If the loop finishes without finding a match, return -1 */
	return (-1);
}

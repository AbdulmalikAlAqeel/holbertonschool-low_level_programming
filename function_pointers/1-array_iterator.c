#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter 
 * on each element of an array.
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: pointer to the function you need to use
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* Safety check: ensure the array and the function pointer are not NULL */
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			/* Execute the 'action' function on the current element */
			action(array[i]);
		}
	}
}

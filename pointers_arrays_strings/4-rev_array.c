#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: The number of elements in the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	/* We only need to loop up to the halfway point */
	for (i = 0; i < n / 2; i++)
	{
		/* Swap element at i with element at the symmetric end */
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

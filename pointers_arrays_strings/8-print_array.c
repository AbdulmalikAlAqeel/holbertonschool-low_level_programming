#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the first element of the array
 * @n: number of elements to be printed
 *
 * Description: Numbers are separated by a comma and a space.
 * The output ends with a new line.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		/* Print the current number */
		printf("%d", a[i]);

		/* If this is NOT the last element, print the comma and space */
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	/* Print the final new line */
	printf("\n");
}

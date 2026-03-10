#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: the size of the matrix (width/height)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0;
	long int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* sum1: diagonal from top-left to bottom-right */
		sum1 += a[i * size + i];

		/* sum2: diagonal from top-right to bottom-left */
		sum2 += a[(i + 1) * size - (i + 1)];
	}

	printf("%ld, %ld\n", sum1, sum2);
}

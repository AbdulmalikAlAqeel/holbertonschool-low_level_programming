#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number to calculate the factorial of
 *
 * Return: factorial of n, or -1 if n < 0 to indicate error
 */
int factorial(int n)
{
	/* Error case: negative numbers */
	if (n < 0)
	{
		return (-1);
	}

	/* Base case: factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}

	/* Recursive call: n * (n - 1)! */
	return (n * factorial(n - 1));
}

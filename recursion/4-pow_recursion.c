#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the base value
 * @y: the exponent value
 *
 * Return: the result of x^y, or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	/* Error case: negative exponent */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case: any number to the power of 0 is 1 */
	if (y == 0)
	{
		return (1);
	}

	/* Recursive call: x * x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}

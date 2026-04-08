#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to be summed.
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	/* If no parameters are passed, return 0 as per requirements */
	if (n == 0)
		return (0);

	/* Initialize the va_list with the last fixed argument 'n' */
	va_start(nums, n);

	/* Iterate through all optional arguments */
	for (i = 0; i < n; i++)
	{
		/* Access the next argument and move the pointer */
		sum += va_arg(nums, int);
	}

	/* Clean up the va_list */
	va_end(nums);

	return (sum);
}

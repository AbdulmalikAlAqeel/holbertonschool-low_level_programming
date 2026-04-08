#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	/* Initialize the va_list to start after parameter 'n' */
	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		/* Print the current number */
		printf("%d", va_arg(nums, int));

		/* * Print separator only if:
		 * 1. It is not NULL
		 * 2. It is not the last element (i < n - 1)
		 */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	/* Print the trailing new line and clean up */
	printf("\n");
	va_end(nums);
}

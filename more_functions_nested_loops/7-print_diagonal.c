#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int row, space;

	/* If n is 0 or less, only print a newline */
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* Outer loop for each row */
		for (row = 0; row < n; row++)
		{
			/* Inner loop to print spaces before the \ */
			for (space = 0; space < row; space++)
			{
				_putchar(' ');
			}
			/* Print the diagonal character and move to next line */
			_putchar('\\');
			_putchar('\n');
		}
	}
}

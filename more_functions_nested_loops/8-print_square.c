#include "main.h"

/**
 * print_square - prints a square of a given size, followed by a new line
 * @size: the size (width and height) of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int row, col;

	/* Edge Case: if size is 0 or less, only print a newline */
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* Outer loop for Rows */
		for (row = 0; row < size; row++)
		{
			/* Inner loop for Columns */
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			/* Move to the next line after completing one row */
			_putchar('\n');
		}
	}
}

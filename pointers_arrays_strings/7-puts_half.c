#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to be printed
 *
 * Description: If the length is odd, it prints the last n characters
 * where n = (length_of_the_string + 1) / 2.
 */
void puts_half(char *str)
{
	int len = 0;
	int i, n;

	/* Step 1: Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Step 2: Determine the starting point 'n' */
	if (len % 2 == 0)
	{
		/* Even length: Start exactly at the middle */
		n = len / 2;
	}
	else
	{
		/* Odd length: Use the formula (len + 1) / 2 */
		n = (len + 1) / 2;
	}

	/* Step 3: Print from the starting point to the end */
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

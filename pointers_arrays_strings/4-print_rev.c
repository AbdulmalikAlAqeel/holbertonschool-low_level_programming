#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to be printed in reverse
 *
 * Description: First, the function finds the length of the string.
 * Then, it iterates backward from the last character to the first,
 * printing each character using _putchar.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Step 1: Calculate the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Step 2: Print from the last character down to the first */
	/* We start at len - 1 because s[len] is the null terminator '\0' */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	/* Step 3: Print a new line at the very end */
	_putchar('\n');
}

#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer to the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/* Base Case: if we reach the end of the string */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* Print current character */
	_putchar(*s);

	/* Recursive call: move to the next character address */
	_puts_recursion(s + 1);
}

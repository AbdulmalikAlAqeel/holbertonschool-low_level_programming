#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* Base Case: if we reach the end of the string, stop diving */
	if (*s == '\0')
	{
		return;
	}

	/* Recursive Step: Move to the next character first */
	_print_rev_recursion(s + 1);

	/* Action: Print the character AFTER the recursive call returns */
	_putchar(*s);
}

#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to measure
 *
 * Return: the length of the string as an integer
 */
int _strlen_recursion(char *s)
{
	/* Base Case: end of string reached */
	if (*s == '\0')
	{
		return (0);
	}

	/* Add 1 for the current char and call for the rest */
	return (1 + _strlen_recursion(s + 1));
}

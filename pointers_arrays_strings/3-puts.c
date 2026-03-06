#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to be printed
 *
 * Description: This function loops through each character of a string
 * and prints it using _putchar until it reaches the null terminator.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be treated
 *
 * Description: Starts with the first character (index 0) and prints
 * every second character until the end of the string.
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	/* Step 1: Calculate the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Step 2: Iterate through the string, incrementing by 2 each time */
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	/* Step 3: Print a new line at the end */
	_putchar('\n');
}

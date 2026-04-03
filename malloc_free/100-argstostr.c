#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: argument count.
 * @av: pointer to an array of strings (arguments).
 *
 * Return: pointer to the new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, len = 0;

	/* 1. Validation check */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* 2. Calculate the total required length */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* Space for the newline '\n' */
	}
	len++; /* Space for the null terminator '\0' */

	/* 3. Memory allocation */
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	/* 4. Copying arguments into the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n'; /* Append newline after each arg */
		k++;
	}
	str[k] = '\0'; /* Terminate the full string */

	return (str);
}

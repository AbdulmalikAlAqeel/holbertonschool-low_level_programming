#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: The difference between the first non-matching characters.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Loop through both strings while they are equal */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			/* Return the difference in ASCII values */
			return (s1[i] - s2[i]);
		}
		i++;
	}

	/* If one string ends before the other, return the difference */
	return (s1[i] - s2[i]);
}

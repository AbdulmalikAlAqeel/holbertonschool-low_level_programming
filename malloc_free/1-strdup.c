#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string,
 * or NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;

	/* 1. Return NULL if the input string is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* 2. Calculate the length of the string manually */
	/* (Standard library functions like strlen are forbidden) */
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	/* 3. Allocate memory for the duplicate */
	/* We add 1 to the length to accommodate the null terminator '\0' */
	duplicate = malloc(sizeof(char) * (len + 1));

	/* 4. Check if malloc was successful */
	if (duplicate == NULL)
	{
		return (NULL);
	}

	/* 5. Copy each character from the original string to the new memory */
	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}

	/* 6. Return the pointer to the duplicated string */
	return (duplicate);
}

#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string that will receive the append.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Move to the end of the dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copy each character from src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Append the null terminator to the end of the new string */
	dest[i] = '\0';

	return (dest);
}

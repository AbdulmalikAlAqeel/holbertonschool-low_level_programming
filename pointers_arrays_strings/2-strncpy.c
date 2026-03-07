#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	/* 1. Copy characters from src to dest until n bytes or end of src */
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	/* 2. If src is shorter than n, fill the rest of dest with null bytes */
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

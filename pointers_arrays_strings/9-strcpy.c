#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Loop through src until we find the null terminator */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Manually add the null terminator to the destination string */
	dest[i] = '\0';

	/* Return the pointer to the destination string */
	return (dest);
}

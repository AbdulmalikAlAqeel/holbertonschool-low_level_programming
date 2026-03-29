#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the newly allocated space containing s1 + s2,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	unsigned int i, j, len1, len2;

	/* 1. If NULL is passed, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* 2. Calculate lengths of s1 and s2 */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* 3. Allocate memory: len1 + len2 + 1 (for '\0') */
	conct = malloc(sizeof(char) * (len1 + len2 + 1));

	/* 4. Check if malloc failed */
	if (conct == NULL)
		return (NULL);

	/* 5. Copy s1 into the new space */
	for (i = 0; i < len1; i++)
		conct[i] = s1[i];

	/* 6. Copy s2 into the new space right after s1 */
	for (j = 0; j < len2; j++, i++)
		conct[i] = s2[j];

	/* 7. Add the null terminator at the very end */
	conct[i] = '\0';

	return (conct);
}

/**
 * rev_string - reverses a string in place
 * @s: the string to be reversed
 *
 * Description: This function finds the length of the string,
 * then swaps characters from the ends moving toward the center
 * until the entire string is reversed in memory.
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	/* Step 1: Calculate string length */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Step 2: Swap characters using a temporary variable */
	/* We set len to the index of the last character */
	len--;

	while (i < len)
	{
		/* Store the front character in temp */
		temp = s[i];
		/* Move the back character to the front */
		s[i] = s[len];
		/* Put temp (original front) into the back */
		s[len] = temp;

		/* Move pointers toward the middle */
		i++;
		len--;
	}
}

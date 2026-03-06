#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int res = 0;
	int found_digit = 0;

	/* Iterate through the string character by character */
	while (s[i] != '\0')
	{
		/* Handle signs: every '-' flips the sign; '+' does nothing */
		if (s[i] == '-')
		{
			sign *= -1;
		}
		/* If a digit is found, start building the number */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			res = (res * 10) + (s[i] - '0');
		}
		/* If we already found digits and encounter a non-digit, stop */
		else if (found_digit)
		{
			break;
		}
		i++;
	}

	/* Multiply the accumulated result by the final sign */
	return (res * sign);
}

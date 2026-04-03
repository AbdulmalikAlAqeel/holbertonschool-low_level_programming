#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if string contains only digits, 0 otherwise
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * errors - prints error message and exits
 *
 * Return: nothing (exit status 98)
 */
void errors(void)
{
	char *err = "Error\n";
	int i = 0;

	while (err[i])
		_putchar(err[i++]);

	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, exits with 98 on error
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2, *res, carry, n1, n2;
	int start = 0;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
		errors();

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);

	res = malloc(sizeof(int) * (len1 + len2));
	if (!res)
		return (1);

	for (i = 0; i < len1 + len2; i++)
		res[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = argv[1][i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = argv[2][j] - '0';
			carry += res[i + j + 1] + (n1 * n2);
			res[i + j + 1] = carry % 10;
			carry /= 10;
		}
		res[i + j + 1] += carry;
	}

	while (start < len1 + len2 - 1 && res[start] == 0)
		start++;

	for (; start < len1 + len2; start++)
		_putchar(res[start] + '0');

	_putchar('\n');
	free(res);
	return (0);
}

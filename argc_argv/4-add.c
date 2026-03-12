#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the command line arguments.
 *
 * Return: 0 (Success), or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/* If no numbers are passed, print 0 and exit */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through each argument starting from index 1 */
	for (i = 1; i < argc; i++)
	{
		/* Check every character in the current argument */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* If the character is not a digit, print Error */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/* Add the converted integer to sum */
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

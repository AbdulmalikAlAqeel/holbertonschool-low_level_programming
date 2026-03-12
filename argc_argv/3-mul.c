#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the command line arguments.
 *
 * Return: 0 (Success), or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if the number of arguments is exactly 3 */
	/* (program name + first number + second number) */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert strings from argv into integers using atoi */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Perform the multiplication */
	result = num1 * num2;

	/* Print the result followed by a new line */
	printf("%d\n", result);

	return (0);
}

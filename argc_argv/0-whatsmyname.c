#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the command line arguments.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* Tell the compiler to ignore the unused argc variable */
	(void)argc;

	/* argv[0] always contains the program name/path */
	printf("%s\n", argv[0]);

	return (0);
}

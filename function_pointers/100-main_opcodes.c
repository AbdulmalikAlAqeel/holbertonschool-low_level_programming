#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 if arguments are incorrect, 2 if bytes < 0.
 */
int main(int argc, char **argv)
{
	int nbytes, i;
	unsigned char *address;

	/* Check for the correct number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* Convert the argument string to an integer */
	nbytes = atoi(argv[1]);

	/* Check if the number of bytes requested is negative */
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Point to the starting address of the main function */
	address = (unsigned char *)main;

	for (i = 0; i < nbytes; i++)
	{
		/* Print each byte in lowercase hex, padded to 2 chars */
		printf("%02hhx", address[i]);

		/* Print a space between opcodes, except for the last one */
		if (i < nbytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}

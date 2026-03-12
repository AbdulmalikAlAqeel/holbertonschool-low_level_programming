#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array that contains the command line arguments.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* Silence unused argv warning */
	(void)argv;

	/*
	 * argc includes the program name.
	 * We print (argc - 1) to show only the passed arguments.
	 */
	printf("%d\n", argc - 1);

	return (0);
}

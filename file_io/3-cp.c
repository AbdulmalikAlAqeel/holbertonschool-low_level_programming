#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_exit - Prints error messages and exits with specific codes
 * @code: The exit code
 * @fmt: The error message format
 * @arg: The string argument (filename)
 * @fd: The file descriptor value (used for exit code 100)
 */
void error_exit(int code, const char *fmt, const char *arg, int fd)
{
	if (code == 100)
		dprintf(STDERR_FILENO, fmt, fd);
	else
		dprintf(STDERR_FILENO, fmt, arg);
	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
    /* ... rest of your code ... */
}

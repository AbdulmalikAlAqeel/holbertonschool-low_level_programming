#include "main.h"

/**
 * create_file - creates a file and writes text content into it
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_wrote, len = 0;

	if (!filename)
		return (-1);

	/* * O_CREAT: Create file if it doesn't exist 
	 * O_WRONLY: Open for writing only
	 * O_TRUNC: If it exists, truncate (empty) it first
	 * 0600: Permissions rw------- (Read/Write for owner only)
	 */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		/* Calculate the length of the string manually */
		while (text_content[len])
			len++;

		/* Write the content to the file */
		n_wrote = write(fd, text_content, len);
		if (n_wrote == -1 || n_wrote != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

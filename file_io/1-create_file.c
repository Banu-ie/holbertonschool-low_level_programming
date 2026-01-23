#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file and writes text content into it
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	/* Compute length of text_content (if not NULL) */
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	/*
	 * O_CREAT: create if doesn't exist
	 * O_TRUNC: truncate if exists
	 * O_WRONLY: write only
	 * mode 0600 only applies when file is created
	 */
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, create empty file (no write needed) */
	if (len > 0)
	{
		w = write(fd, text_content, len);
		if (w == -1 || (size_t)w != len)
		{
			close(fd);
			return (-1);
		}
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}

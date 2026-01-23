#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL-terminated string to append (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	/* Open existing file for appending (do not create) */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL: add nothing, but succeed since file exists */
	if (text_content == NULL)
	{
		if (close(fd) == -1)
			return (-1);
		return (1);
	}

	while (text_content[len] != '\0')
		len++;

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

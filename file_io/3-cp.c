#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

/**
 * print_usage - prints usage message and exits with 97
 */
static void print_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error_read - prints read error message and exits with 98
 * @file: filename
 */
static void error_read(const char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * error_write - prints write error message and exits with 99
 * @file: filename
 */
static void error_write(const char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * error_close - prints close error message and exits with 100
 * @fd: file descriptor
 */
static void error_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buf[BUF_SIZE];

	if (ac != 3)
		print_usage();

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		error_read(av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_write(av[2]);
	}

	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w == -1 || w != r)
		{
			close(fd_from);
			close(fd_to);
			error_write(av[2]);
		}
	}

	if (r == -1)
	{
		close(fd_from);
		close(fd_to);
		error_read(av[1]);
	}

	if (close(fd_from) == -1)
		error_close(fd_from);

	if (close(fd_to) == -1)
		error_close(fd_to);

	return (0);
}

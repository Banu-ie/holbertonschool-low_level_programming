#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

static void print_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

static void error_read(const char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

static void error_write(const char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

static void error_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

static void copy_file(int fd_from, int fd_to, char *from, char *to)
{
	ssize_t r, w;
	char buf[BUF_SIZE];

	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w == -1 || w != r)
		{
			close(fd_from);
			close(fd_to);
			error_write(to);
		}
	}

	if (r == -1)
	{
		close(fd_from);
		close(fd_to);
		error_read(from);
	}
}

int main(int ac, char **av)
{
	int fd_from, fd_to;

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

	copy_file(fd_from, fd_to, av[1], av[2]);

	if (close(fd_from) == -1)
		error_close(fd_from);

	if (close(fd_to) == -1)
		error_close(fd_to);

	return (0);
}

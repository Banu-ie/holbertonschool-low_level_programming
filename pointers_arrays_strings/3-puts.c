#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to print
 *
 * Description: This function prints the string to stdout
 *              using the write system call, then prints a newline.
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	write(1, str, len);
	write(1, "\n", 1);
}


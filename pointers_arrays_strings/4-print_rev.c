#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	/* find the length of the string */
	for (i = 0; s[i] != '\0'; i++)
		;

	/* print the string in reverse */
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}


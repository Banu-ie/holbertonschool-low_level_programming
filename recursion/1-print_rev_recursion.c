#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 *
 * Description: Uses recursion to print each character
 * from the last to the first.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
		return;

	_print_rev_recursion(s + 1); /* Recursive call for next character */
	_putchar(*s); /* Print current character after recursion */
}

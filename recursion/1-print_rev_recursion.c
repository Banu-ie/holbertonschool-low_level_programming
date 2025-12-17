#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 *
 * Description: This function uses recursion to print each character
 * of the string starting from the last character back to the first.
 */
void _print_rev_recursion(char *s)
{
    /* Base case: stop recursion at the end of the string */
    if (*s == '\0')
        return;

    /* Recursive call: go to the next character first */
    _print_rev_recursion(s + 1);

    /* Print the current character after returning from recursion */
    _putchar(*s);
}

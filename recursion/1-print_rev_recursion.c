#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')  /* базовый случай: конец строки */
        return;

    _print_rev_recursion(s + 1);  /* рекурсивный вызов для остатка строки */
    _putchar(*s);                 /* печатаем текущий символ после рекурсии */
}

#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
    int c = 'a';

    while (c <= 'z')
    {
        _putchar(c);  /* First call to _putchar */
        c++;
    }

    _putchar('\n');  /* Second call to _putchar */
}

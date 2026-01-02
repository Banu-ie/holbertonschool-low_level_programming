#include <stddef.h> /* чтобы компилятор знал NULL */
#include "function_pointers.h"

/**
 * print_name - prints a name using the given function
 * @name: name of the person
 * @f: function pointer that takes a char * and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;

    f(name);
}

#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h> /* для size_t и NULL */

/* 0-print_name */
void print_name(char *name, void (*f)(char *));

/* 1-array_iterator */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */

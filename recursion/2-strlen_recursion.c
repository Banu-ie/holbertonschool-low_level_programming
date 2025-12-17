#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to measure
 *
 * Return: length of the string
 *
 * Description: Uses recursion to count the characters
 * of the string until the null-terminator is reached.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
		return (0);

	return (1 + _strlen_recursion(s + 1)); /* Count current char + rest */
}

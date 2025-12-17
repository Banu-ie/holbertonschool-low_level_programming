#include "main.h"
#include <stdio.h>

/**
 * main - check the _strlen_recursion function
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _strlen_recursion("Corbin Coleman");
	printf("%d\n", len);

	len = _strlen_recursion("Holberton");
	printf("%d\n", len);

	len = _strlen_recursion("");
	printf("%d\n", len);

	return (0);
}

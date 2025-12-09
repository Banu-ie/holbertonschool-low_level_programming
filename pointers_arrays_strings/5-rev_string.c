#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	/* find the length of the string */
	for (i = 0; s[i] != '\0'; i++)
		;

	/* swap characters from start and end */
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}

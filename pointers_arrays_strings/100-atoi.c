#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	int digit;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			/* Build number as negative to avoid overflow */
			num = (num * 10) - digit;

			started = 1;
		}
		else if (started)
			break;

		i++;
	}

	if (sign > 0)
		return (-num);

	return (num);
}



#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	int capitalize_next = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
			capitalize_next = 0;
		}
		else if (!capitalize_next && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 'a' - 'A';
		}

		capitalize_next = 0;
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize_next = 1;
				break;
			}
		}

		i++;
	}

	return (str);
}


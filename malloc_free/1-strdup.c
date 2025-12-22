#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	i = 0;
	while (i <= len)
	{
		dup[i] = str[i];
		i++;
	}

	return (dup);
}

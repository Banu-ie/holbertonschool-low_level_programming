#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - duplicates a string using malloc
 * @str: string to duplicate
 *
 * Return: pointer to new string, or NULL if malloc fails
 */
char *_strdup(const char *str)
{
	char *copy;
	size_t len, i;

	if (!str)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	copy = malloc(len + 1); /* +1 for '\0' */
	if (!copy)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;

	if (!name || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	name_copy = _strdup(name);
	if (!name_copy)
	{
		free(d);
		return (NULL);
	}

	owner_copy = _strdup(owner);
	if (!owner_copy)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}

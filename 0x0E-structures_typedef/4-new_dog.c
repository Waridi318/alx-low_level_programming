#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - returns *p -> space in memory containing copy of string.
 * @s: *p -> str
 * Return: *p -> str(in stored mem)
 */

char *_strdup(char *s)
{
	char *dup;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
		i += 1;

	i++;

	dup = malloc(i * sizeof(*dup));
	if (dup == NULL)
		return (NULL);
	while (j < i)
	{
		dup[j] = s[j];
		j++;
	}
	return (dup);
}

/**
 *new_dog - new instance of struct dog
 *@name: first arg
 *@age: second arg.
 *@owner: third arg.
 *Return: instance of struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
		return (NULL);
	newdog->name = _strdup(name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = _strdup(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->age = age;

	return (newdog);
}

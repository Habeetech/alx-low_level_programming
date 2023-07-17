#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog
 * Return: Pointer to the created dog structure.
 * Returns NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
	return (d);
}

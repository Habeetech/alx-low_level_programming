#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize the struct dog variable
 * @d: pointer to the struture
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: None
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - a structure to describe dogs
 * @name: name of the dog
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: None
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

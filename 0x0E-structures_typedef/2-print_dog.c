#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the dog details
 * if an element of d;is NULL, print (nil)
 * if d is NULL, print nothing
 * @d: pointer to the struct dog
 * Return: None
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}

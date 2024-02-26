#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize var of type struct dog
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

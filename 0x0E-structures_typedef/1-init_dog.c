#include "dog.h"
#include<stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer
 * @struct dog - structure definition of a dog
 * @name: pointer to character array(string)
 * @age: integer
 * @owner: pointer to character array(string)
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

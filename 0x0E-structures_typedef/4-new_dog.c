#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - Function
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: function defines dogs
 * Return: void
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o;

	n = name;
	o = owner;

	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}

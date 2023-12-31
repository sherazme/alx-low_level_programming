#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Function
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: function defines dogs
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

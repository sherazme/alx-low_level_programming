#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Function
 * @d: dog struct
 * Description: function defines dogs
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == NULL)
		d->owner = "nil";
	printf("name: %s\nage: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}

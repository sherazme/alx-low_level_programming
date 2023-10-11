#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

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

	int len = 0, len2 = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len])
		len++;
	while (owner[len2])
		len2++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	n = malloc(len + 1);
	if (n == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		n[i] = name[i];
	n[i] = '\0';

	o = malloc(len2 + 1);
	if (o == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		o[i] = owner[i];
	o[i] = '\0';

	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);
}

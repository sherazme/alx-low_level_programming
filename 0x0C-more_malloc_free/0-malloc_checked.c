#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function
 * @b: value
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit (98);
	return (s);
}

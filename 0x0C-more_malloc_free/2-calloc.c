#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function
 * @nmemb: value
 * @size: value
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		s[i] = 0;

	return (s);
}

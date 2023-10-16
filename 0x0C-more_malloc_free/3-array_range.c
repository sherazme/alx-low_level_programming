#include <stdlib.h>
#include "main.h"

/**
 * array_range - function
 * @min: min value
 * @max: max value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, size, *array;

	if (min > max)
		return (NULL);

	size = max - min;
	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}

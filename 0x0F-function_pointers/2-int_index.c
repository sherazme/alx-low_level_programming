#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function
 * @array: array
 * @size: array size
 * @cmp: function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (0);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}

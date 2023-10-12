#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: array
 * @size: array size
 * @action: function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size <= 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

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
	/*if (name == NULL || f == NULL)*/
		/*return;*/
	for (i = 0; i < size; i++)
		action(array[i]);
}

#include "search_algos.h"


/**
  * exponential_search - Searches for a value in an array of integers
  * @array: pointer to the first element of the array
  * @size: number of elements in array
  * @value: value to search for
  * Return: the first index where value is located
  *             or -1 If value is not present in array or array NULL
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}

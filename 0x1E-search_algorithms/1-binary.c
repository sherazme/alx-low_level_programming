#include "search_algos.h"

/**
  * binary_search - Searches for a value in an array of integers
  * @array: pointer to the first element of the array
  * @size: number of elements in array
  * @value: value to search for
  * Return: the first index where value is located
  *             or -1 If value is not present in array or array NULL
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

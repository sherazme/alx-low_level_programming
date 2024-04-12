#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches recursively for value in
  * sorted array of integers
  * @array: pointer to the first element of [sub]array to search
  * @left: starting index of [sub]array
  * @right: ending index of [sub]array
  * @value: value to search for
  *
  * Return: the first index where value is located
  *             or -1 If value is not present in array or array NULL
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Searches for a value in an array of integers
  * @array: pointer to the first element of the array
  * @size: number of elements in array
  * @value: value to search for
  *
  * Return: the first index where value is located
  *             or -1 If value is not present in array or array NULL
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

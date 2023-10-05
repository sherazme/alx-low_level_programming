#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: value
 * @height: value
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for ( ; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
		{

			for (j = i; j >= 0; j--)
			{
				free(array[j]);
			}

			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0 ; j < width; j++)
		array[i][j] = 0;
	}
	return (array);
}

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: value
 * @height: value
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for ( ; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int r, x, y, z;

	x = 1;
	y = 2;
	for (r = 0; r < 50; r++)
	{
		printf("%d, ", x);
		printf("%d, ", y);
		z = x + y;
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int r, x, y, z;

	x = 1;
	y = 2;
	printf("%d", x);
	printf(", %d", y);
	for (r = 2; r < 50; r++)
	{
		z = x + y;
		x = y;
		y = z;
		printf(", %d", y);
	}
	printf("\n");
	return (0);
}

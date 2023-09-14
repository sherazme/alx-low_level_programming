#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long r, x, y, z;

	x = 1;
	y = 2;
	printf("%lu", x);
	printf(", %lu", y);
	for (r = 3; r < 98; r++)
	{
		z = x + y;
		x = y;
		y = z;
		printf(", %lu", y);
	}
	printf("\n");
	return (0);
}

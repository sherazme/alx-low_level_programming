#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int sum, x, y, z;

	x = 1;
	y = 2;
	for (r = 2; y < 4000000; r++)
	{
		z = x + y;
		x = y;
		y = z;
		if (y % 10 == 1)
			sum += y;
	}
	printf("%lu\n", sum);
	return (0);
}

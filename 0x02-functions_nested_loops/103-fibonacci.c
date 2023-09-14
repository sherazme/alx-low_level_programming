#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum, x, y, z;

	x = 1;
	y = 2;
	while (y < 4000000)
	{
		if (y % 10 == 0)
			sum += y;
		z = x + y;
		x = y;
		y = z;
	}
	printf("%d\n", sum);
	return (0);
}

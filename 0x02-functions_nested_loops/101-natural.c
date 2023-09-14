#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int r, x;

	for (r = 0; r < 1024; r++)
	{
		if (r % 3 == 0 || r % 5 == 0)
			x += r;
	}
	printf("%d\n",x);
	return (0);
}

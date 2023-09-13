#include <stdio.h>
#include "main.h"

/**
*  times_table - Entry point
*
* Return: Always 0 (Success)
*/
void times_table(void)
{
	int x, y, r;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			r = x * y;
			_putchar(r + '0');

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}

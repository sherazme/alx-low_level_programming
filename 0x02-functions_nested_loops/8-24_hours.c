#include <stdio.h>
#include "main.h"

/**
*  jack_bauer- Entry point
*
* Return: Always 0 (Success)
*/
void jack_bauer(void)
{
	int h, hh, m, mm;

	for (h = 0; h < 3; h++)
	{
		for (hh = 0; hh < 4; hh++)
		{
			for (m = 0; m < 7; m++)
			{
				for (mm = 0; mm < 10; mm++)
				{
					_putchar(h + '0');
					_putchar(hh + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(mm + '0');
					_putchar('\n');
				}
			}
		}
	}
}

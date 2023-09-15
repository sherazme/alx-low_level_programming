#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Check characters
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			_putchar(j + '0');
			else
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
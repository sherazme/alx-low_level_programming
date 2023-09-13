#include <stdio.h>
#include "main.h"

/**
* print_sign - Entry point
* @n: parameter
*
* Return: Always 0 (Success)
*/
int print_sign(int n)
{
	int c;

	if (n > 0)
	{
		c = 1;
		_putchar('+');
	}
	else
	{
		if (n == 0)
		{
			c = 0;
			_putchar('0');
		}
		else
		{
			c = -1;
			_putchar('-');
		}
	}
	return (c);
}

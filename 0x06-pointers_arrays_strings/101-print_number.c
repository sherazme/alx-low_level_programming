#include <stdio.h>
#include "main.h"

/**
 * print_number - Check characters
 * @n: num
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
*/
void print_number(int n)
{
	if (n < 0)
		_putchar('-');
	if (n / 1000 > 0)
	{
		_putchar(n / 1000 + '0');
		n = n % 1000;
	}
	if (n / 100 > 0)
	{
		_putchar(n / 100 + '0');
		n = n % 100;
	}
	if (n / 10 > 0)
	{
		_putchar(n / 10 + '0');
		n = n % 10;
	}
	_putchar('\n');
}

#include <stdio.h>
#include "main.h"

/**
 * print_number - Check characters
 * @n: number
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
*/
void print_number(int n)
{

	if (n <= 9)
		_putchar(n + '0');
	else if (n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n <= 999)
	{
		_putchar(n % 100 + '0');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n <= 9999)
	{
		_putchar(n % 1000 + '0');
		_putchar(n % 100 + '0');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	_putchar('\n');
}

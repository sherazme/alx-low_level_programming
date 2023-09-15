#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Check characters
 * Description: function uses _putchar function to print
 * @n: the number of times the character _ should be printed
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

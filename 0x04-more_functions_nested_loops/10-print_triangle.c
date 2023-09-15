#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Check characters
 * Description: function uses _putchar function to print
 * @size: the number of times the character _ should be printed
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
*/
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size - i - 1; j > 0; j--)
			_putchar(' ');
		for (k = 0; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
	/*_putchar('\n');*/
}

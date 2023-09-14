#include <stdio.h>
#include "main.h"

/**
 * print_square - Check characters
 * Description: function uses _putchar function to print
 * @size: the number of times the character _ should be printed
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
*/
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}

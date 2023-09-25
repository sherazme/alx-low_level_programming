#include <stdio.h>
#include "main.h"

/**
 * print_ diagsums- Check characters
 * Description: function uses _putchar function to print
 * @a: the number of times the character _ should be printed
 * @size: size
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
*/
void print_diagsums(int *a, int size)
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			/**
			 * if (j < 7)
			 * {
			 * 	_putchar(',');
			 * 	_putchar(' ');
			 * }
			 */
		}
		_putchar('\n');
	}
}

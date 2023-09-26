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
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *a[i][i];
		for (j = size; j > 0; j++)
		{
			sum2 += *a[i][j];
		}
	}
	printf("%d, %d", sum1, sum2);
}

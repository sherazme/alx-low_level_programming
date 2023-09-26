#include <stdio.h>
#include "main.h"

/**
 * print_diagsums- Check characters
 * Description: function uses _putchar function to print
 * @a: the number of times the character _ should be printed
 * @size: size
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
*/
void print_diagsums(int *a, int size)
{
	int i, sum, sizer;

	i = 0;
	sum = 0;
	sizer = size * size;
	while (i < sizer)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < sizer)
	{
		if (i % (size - 1) == 0 && i != (sizer - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}

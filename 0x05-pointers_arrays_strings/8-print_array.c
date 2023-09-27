#include <stdio.h>
#include "main.h"

/**
 * print_array - prints characters
 * Description: function uses _putchar function to print
 * @a: array
 * @n: length
 * Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if( i < n - 1)
			printf(", ");
		else
			printf("\n");
	}
}

#include <stdio.h>
#include "main.h"

/**
 * swap_int - Check characters
 * @a: An input character
 * @b: second input
 * Description: function uses _putchar function to print
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
#include "main.h"

int _sqrt(int prev, int v);
/**
 * _sqrt_recursion - Check characters
 * @n: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - square
 * @prev: previous
 * @v: value
 * Return: square
 */
int _sqrt(int prev, int v)
{
	if (prev > v)
		return (-1);
	else if (prev * prev == v)
		return (prev);
	return (_sqrt(prev + 1, v));
}

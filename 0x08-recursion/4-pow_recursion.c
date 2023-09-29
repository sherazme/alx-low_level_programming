#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Check characters
 * @x: A n input character
 * @y: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y < 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

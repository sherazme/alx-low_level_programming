#include <stdio.h>
#include "main.h"

/**
 * factorial - Check characters
 * @n: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

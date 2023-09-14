#include <stdio.h>
#include "main.h"

/**
 * _isupper - Check characters
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
*/
int _isdigit(int c)
{
	int digit = 0, i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
			digit = 1;
	}
	return (digit);
}

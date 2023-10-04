#include <stdio.h>
#include "main.h"

/**
 * _isupper - Check characters
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
*/
int _isupper(int c)
{
	char i;
	int up = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			up = 1;
	}
	return (up);
}

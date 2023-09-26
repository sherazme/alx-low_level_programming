#include <stdio.h>
#include "main.h"

/**
 * print_rev - Check characters
 * @s: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

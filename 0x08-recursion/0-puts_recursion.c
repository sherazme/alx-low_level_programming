#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Check characters
 * @s: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
void _puts_recursion(char *s)
{

	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}

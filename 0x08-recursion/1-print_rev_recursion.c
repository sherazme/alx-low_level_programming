#include <stdio.h>
#include "main.h"

/**
 * print_rev_recursion - Check characters
 * @s: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Check characters
 * @s: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

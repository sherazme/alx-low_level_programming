#include <stdio.h>
#include "main.h"

/**
 * _puts- Check characters
 * @str: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		/*str++;*/
		i++;
	}
	_putchar('\n');
}

#include <stdio.h>
#include "main.h"

/**
 * puts2- Check characters
 * @str: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' || str[i] != '\\')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

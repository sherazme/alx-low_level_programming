#include <stdio.h>
#include "main.h"

/**
 * puts_half - Check characters
 * @str: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
void puts_half(char *str)
{
	int j = 0, i = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	i = (j - 1) / 2;
	while (i < j)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

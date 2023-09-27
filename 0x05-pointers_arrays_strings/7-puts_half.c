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
	if (j % 2 == 0)
		i = j / 2;
	else
		i = j / 2 + 1;
	while (i < j)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

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
	int j =0,i = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	while (i < j)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

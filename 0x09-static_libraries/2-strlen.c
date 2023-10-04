#include <stdio.h>
#include "main.h"

/**
 * _strlen- Check characters
 * @s: An input character
 * Description: function uses _putchar function to print
 * Return: length
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

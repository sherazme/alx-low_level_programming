#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Check characters
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
*/
char *string_toupper(char *c)
{
	char *i = c;

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c -= 32;
		}
		c++;
	}
	return (i);
}

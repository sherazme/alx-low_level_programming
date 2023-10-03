#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Check characters
 * @s1: An input character
 * @s2: source
 * Description: function compare words
 * Return: destination
 */
int _strcmp(char *s1, char *s2)
{
	/*int i = 0, strlength = 0;*/

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);

}

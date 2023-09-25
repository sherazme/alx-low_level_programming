#include <stdio.h>
#include "main.h"

/**
 * _strchr - Check characters
 * @s: An input character
 * @c: character to search for
 * Description: function swap words
 * Return: destination
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}

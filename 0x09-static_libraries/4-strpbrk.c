#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Check characters
 * @s: An input character
 * @accept: character to search for
 * Description: function swap words
 * Return: destination
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}

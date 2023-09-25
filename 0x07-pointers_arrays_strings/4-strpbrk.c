#include <stdio.h>
#include "main.h"

/**
 * _strbrk - Check characters
 * @s: An input character
 * @accept: character to search for
 * Description: function swap words
 * Return: destination
 */
char *_strpbrk(char *s, char *accept)
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

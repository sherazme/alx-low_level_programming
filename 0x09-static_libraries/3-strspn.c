#include <stdio.h>
#include "main.h"

/**
 * _strspn - Check characters
 * @s: An input character
 * @accept: character to search for
 * Description: function swap words
 * Return: destination
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}

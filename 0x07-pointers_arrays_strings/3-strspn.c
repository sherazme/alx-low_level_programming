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
	int i = 0, j;
	unsigned int k = 0;

	while (*s)
	{
		while (*accept)
		{
			if (s[i] == accept[j])
				k++;
			j++;
		}
		j = 0;
		i++;
	}
	return (k);
}

#include <stdio.h>
#include "main.h"

/**
 * _memset - Check characters
 * @s: An input character
 * @b: bytes
 * @n:  bytes to fill
 * Description: function swap words
 * Return: destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

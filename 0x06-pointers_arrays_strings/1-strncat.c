#include <stdio.h>
#include "main.h"

/**
 * _strncat - Check characters
 * @dest: An input character
 * @src: source
 * @n: num of bytes
 * Description: function swap words
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	char *str = dest, *srctemp = src;
	int i = 0, strlength = 0;

	while (*dest)
		dest++;

	while (*src)
	{
		strlength++;
		src++;
	}
	src = srctemp;
	if ( n > strlength)
		n = strlength;
	for ( ; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (str);
}

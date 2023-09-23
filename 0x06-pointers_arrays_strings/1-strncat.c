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
	int i = 0, strlen = 0;

	while (dest[strlen])
		strlen++;

	for ( ; i < n && src[i]; i++)
	{
		dest[strlen] = src[i];
		strlen++;
	}
	dest[strlen + n + 1] = '\0';
	return (dest);
}

#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Check characters
 * @dest: An input character
 * @src: bytes
 * @n:  bytes to fill
 * Description: function swap words
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

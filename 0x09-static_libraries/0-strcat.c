#include <stdio.h>
#include "main.h"

/**
 * _strcat - Check characters
 * @dest: An input character
 * @src: source
 * Description: function swap words
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (str);
}

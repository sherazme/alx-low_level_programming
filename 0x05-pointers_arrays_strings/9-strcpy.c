#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Check characters
 * @src: A n input character
 * @dest: destenation
 * Description: function uses _putchar function to print
 * Return: length
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

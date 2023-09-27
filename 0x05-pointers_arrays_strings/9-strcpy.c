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
	/*char temp;*/

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/*
	 * while (j < i--)
	 *{
	 *	temp = s[j];
	 *	s[j++] = s[i];
	 *	s[i] = temp;
	 *}
	 */
	return (dest);
}

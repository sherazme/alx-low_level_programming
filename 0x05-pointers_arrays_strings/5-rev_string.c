#include <stdio.h>
#include "main.h"

/**
 * rev_string - Check characters
 * @s: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	while (j < i--)
	{
		temp = s[j];
		s[j++] = s[i];
		s[i] = temp;
	}
}

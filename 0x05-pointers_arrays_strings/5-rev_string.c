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
	int i = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	for ( ; i >= 0; i--)
	{
		if (s[i] != '\0')
			temp[i] = s[i];
	}
	*s = temp;
}

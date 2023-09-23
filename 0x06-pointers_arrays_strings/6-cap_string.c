#include <stdio.h>
#include "main.h"

/**
 * cap_string - Check characters
 * @s: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
*/
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };

	while (s[i])
	{
		for (j = 0; j < 13 ; j++)
		{
			if ((i == 0 || s[i - 1] == seperators[j]) && (s[i] >= 97 && s[i] <= 122))
				s[i] -= 32;
		}
		i++;
	}

	return (s);
}

#include <stdio.h>
#include "main.h"

/**
 * wildcmp - Check characters
 * @s1: A n input character
 * @s2: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2) || wildcmp(s1 + 1, s2 + 1)))
		return (1);
	if (*s2 == '*' && *(s1 + 1) && *s2)
		return (0);
	return (0);
}

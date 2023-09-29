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
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return wildcmp(s1, ++s2);
		else if (*s1 == '*' && *s2 == '\0')
			return wildcmp(++s1, s2);
		return (0);
	}

	if (*s1 == *s2)
	{
		return wildcmp(++s1, ++s2);
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
			return wildcmp(++s1, s2);
		else
		{
			return wildcmp(s1, findsrc(s2, *(s1 + 1), 0, 0) + s2);
		}
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return wildcmp(s1, ++s2);
		else
		{
			return wildcmp(s1 + findsrc(s1, *(s2 + 1), 0, 0), s2);
		}
	}

	return (0);
}

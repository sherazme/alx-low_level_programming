#include <stdio.h>
#include "main.h"

int get_length(char *s);
int check_pal(char *s, int len);

/**
 * is_palindrome - Check characters
 * @s: A n input character
 * Description: function uses _putchar function to print
 * Return: length
 */
int is_palindrome(char *s)
{
	int length;

	length = get_length(s) - 1;

	return (check_pal(s, --length));
}

/**
 * get_length - get length
 * @s: string
 * Return: return length of string
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_length(++s));
}

/**
 * check_pal - check
 * @s: string
 * @len: length of string
 * Return: 1 or 0
 */

int check_pal(char *s, int len)
{
	if (*s == *(s + len))
	{
		if (len <= 0)
			return (1);
		else
			return (check_pal(++s, len - 2));
	}
	else
		return (0);
}

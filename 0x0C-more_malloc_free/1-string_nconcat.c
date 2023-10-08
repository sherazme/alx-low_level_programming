#include "main.h"
#include <stdlib.h>

unsigned int String_length(char *str);

/**
 * string_nconcat - function
 * @s1: value
 * @s2: value
 * @n: value
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len = 1, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	len += String_length(s1);

	if (s2 == NULL)
		s2 = "";

	len2 = String_length(s2);

	if (n < len2)
		len += n;
	else
		len += len2;
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	len2 = 0;
	len--;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
		len2++;
	}
	while (len2 <= len - 1)
	{
		s[i] = s2[j];
		j++;
		i++;
		len2++;
	}
	s[i] = '\0';
	return (s);
}
/**
 * String_length - function
 * @str: value
 * Return: pointer
 */
unsigned int String_length(char *str)
{
	char *tmp;
	unsigned int l = 0;

	tmp = str;
	while (*str)
	{
		l++;
		str++;
	}
	str = tmp;
	return (l);
}

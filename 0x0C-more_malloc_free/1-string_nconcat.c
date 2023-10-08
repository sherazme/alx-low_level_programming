#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: value
 * @s2: value
 * @n: value
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s, *tmp;
	unsigned int i = 0, j = 0, len = 1, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	tmp = s1;
	while (*s1)
	{
		len++;
		s1++;
	}

	s1 = tmp;
	if (s2 == NULL)
		s2 = "";
	tmp = s2;
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = tmp;
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
	while (len2 <= len)
	{
		s[i] = s2[j];
		j++;
		i++;
		len2++;
	}
	s[i] = '\0';
	return (s);
}

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function
 * @s1: value
 * @s2: value
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *s, *tmp;
	int i = 0, j = 0, len = 1;

	if (s1 == NULL)
		return (NULL);
	tmp = s1;
	while (*s1)
	{
		len++;
		s1++;
	}

	s1 = tmp;
	if (s2 == NULL)
		return (NULL);
	tmp = s2;
	while (*s2)
	{
		len++;
		s2++;
	}
	s2 = tmp;
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	s[i] = '\0';
	return (s);
}

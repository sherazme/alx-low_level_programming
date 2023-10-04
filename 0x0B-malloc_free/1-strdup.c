#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * @str: value
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *s, *tmp;
	int i = 0, len = 0;

	tmp = str;
	while (*str)
	{
		len++;
		str++;
	}

	str = tmp;
	s = malloc(len * sizeof(char));

	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

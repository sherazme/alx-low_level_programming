#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function
 * @ac: value
 * @av: value
 * Return: 0
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, length = 1;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
		length++;
	}
	str = malloc(length * sizeof(char));
	if (str == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[length] = av[i][j];
			length++;
		}
		str[length] = '\n';
		length++;
	}
	str[length] = '\0';
	return (str);
}

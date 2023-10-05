#include "main.h"
#include <stdlib.h>

/**
 * strtow - function
 * @str: value
 * Return: pointer
 */
char **strtow(char *str)
{
	char **words;
	int i, j, wc = 0, n, start, len = 0, index = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
			wc++;
	}
	if (wc == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
		{
			slen = 0, start = i;
			while (str[i] != ' ' && str[i])
			{
				len++;
				i++;
			}
			words[index] = malloc(sizeof(char) * (len + 1));
			if (words[index] == NULL)
			{
				for (n = 0; n < len; n++)
					free(words[n]);
				free(words);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				words[index][j] = str[start + j];
			words[index][j] = '\0';
			index++;
		}
	}
	return (words);
}

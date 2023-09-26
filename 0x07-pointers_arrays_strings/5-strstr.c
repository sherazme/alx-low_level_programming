#include <stdio.h>
#include "main.h"

/**
 * _strstr - Check characters
 * @haystack: An input character
 * @needle: character to search for
 * Description: function swap words
 * Return: destination
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = needle, *start1 = haystack;

	while (*haystack)
	{
		start1 = haystack;
		needle = start;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = start1 + 1;
	}
	return (NULL);
}

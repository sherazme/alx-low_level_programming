#include "main.h"

/**
  * _strncpy - Copy
  * @dest: string
  * @src: string
  * @n: byte
  * Return: char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i])
	{
		i++;
	}

	while (j < n && src[j])
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

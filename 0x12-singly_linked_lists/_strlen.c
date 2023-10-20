#include "lists.h"

/**
 * _strlen - Calculate lenght
 *
 * @str: String
 *
 * Return: lenght of a string.
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}
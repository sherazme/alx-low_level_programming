#include <stdio.h>
#include "main.h"

/**
 * _atoi - Check characters
 * @s: A n input character
 * Description: function uses _putchar function to print
 * Return: length
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	char f = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			/*f = 1;*/
			num = num * 10 + *s - '0';
		}

		else if (f)
			break;
		s++;
	}

	if (sign < 0)
		num = (-num);

	return (num);
}

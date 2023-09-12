#include <stdio.h>
#include "main.h"

/**
* _islower - Entry point
*
* Return: Always 0 (Success)
* @c is the char
*/
int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			low = 1;
	}

	return (low);
}

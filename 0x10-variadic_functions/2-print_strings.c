#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - function
 * @n: args number
 * @separator: string
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	if (n > 0)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(list, char *);
			printf("%s", str == NULL ? "(nil)" : str);
			if (i == n - 1)
				printf("\n");
			else
				printf("%s", separator);
		}
		va_end(list);
	}
}

#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function
 * @n: first arg
 * Return: Nothing
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n != 0)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
			sum += va_arg(list, int);
		va_end(list);
		return (sum);
	}
	else
		return (0);
}

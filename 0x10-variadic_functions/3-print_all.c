#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function
 * @format: string
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;

	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(list, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(list);
	printf("\n");
}

/**
  * print_a_char - Prints a character of char type
  * @separator: The separator of the character
  * @list: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_a_char(char *separator, va_list list)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
  * print_a_integer - Prints a character of integer type
  * @separator: The separator of the character
  * @list: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_a_integer(char *separator, va_list list)
{
	printf("%s%i", separator, va_arg(list, int));
}

/**
  * print_a_float - Prints a character of float type
  * @separator: The separator of the character
  * @list: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_a_float(char *separator, va_list list)
{
	printf("%s%f", separator, va_arg(list, double));
}

/**
  * print_a_char_ptr - Prints the content of pointer to char type
  * @separator: The separator of the character
  * @list: A list of variadic arguments
  *
  * Return: Nothing
  */
void print_a_char_ptr(char *separator, va_list list)
{
	char *arg = va_arg(list, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}

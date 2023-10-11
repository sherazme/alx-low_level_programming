#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function
 * @name: pointer
 * @f: function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

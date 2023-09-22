#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse array
 * @a: An input character
 * @n: source
 * Description: reverse_array
 * Return: destination
 */
void reverse_array(int *a, int n)
{
	int tmp, i = 0;

	while (i < n)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
	}

}

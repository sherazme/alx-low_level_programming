#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	putchar(48 + num);
	for (num = 1; num < 10; num++)
	{
		putchar(',');
		putchar(' ');
		putchar(48 + num);
	}
	putchar('\n');
	return (0);
}

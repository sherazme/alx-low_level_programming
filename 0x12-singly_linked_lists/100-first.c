#include "lists.h"

/**
 * first - A constractur function to print a string befor main function start
 */
void __attribute__((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
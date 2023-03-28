#include"main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: value of integer 1
 * @b: value of integer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

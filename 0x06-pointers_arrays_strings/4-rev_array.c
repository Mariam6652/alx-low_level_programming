#include"main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int
 * @n: int
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = 0 ; i < n ; i++)
	{
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
		n--;
	}
}

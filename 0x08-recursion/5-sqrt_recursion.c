#include"main.h"
/**
 * _sqrt - returns the natural square root of a number
 * @n: int
 * @i: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns the natural square root of a number
 * @n: int
 * @i: int
 * Return: int
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}

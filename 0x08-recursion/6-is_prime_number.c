#include"main.h"

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - returns 1 if the input integer is a prime number, otherwise return0
 * @n: int
 * @i: int
 * Return: int
 */
int _prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (_prime(n, i + 1));
}

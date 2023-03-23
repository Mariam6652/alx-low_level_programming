#include"main.h"

/**
 * print_sign - prints the sign of a number
 *  @n: number tested
 *  Return: 1 n greater than zero or 0 n zero or -1 n less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

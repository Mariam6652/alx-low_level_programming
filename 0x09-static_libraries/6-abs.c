#include"main.h"

/**
 * _abs -  computes the absolute value of an integer
 * @n: num of cmputed
 * Return: absval of  n or 0
 */

int _abs(int n)
{
	if (n < 0)
	{
	int absval;

	absval = n * -1;
	return (absval);
	}
	else
	{
		return (n);
	}
}

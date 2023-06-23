#include<stdarg.h>
#include"variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: unsigned int
 * @...: A variable number of paramters
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int s = 0;
	unsigned int i;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0 ; i < n ; i++)
		s = s + va_arg(ap, int);
	va_end(ap);
	return (s);
}

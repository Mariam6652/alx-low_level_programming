#include<stdarg.h>
#include<stdio.h>
#include"variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

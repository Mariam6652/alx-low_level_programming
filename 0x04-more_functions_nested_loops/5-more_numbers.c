#include"main.h"

/**
 * more_numbers - prints 10 times the numbers
 * Return: void
 */

void more_numbers(void)
{
	int i, x;

	for (x = 0 ; x < 10 ; x++)
	{
	for (i = 0 ; i <= 14 ; i++)
	{
		if (i > 9)
		{
		_putchar((i / 10) + '0');
		}
	_putchar((i % 10) + '0');
	}
	_putchar('\n');
	}
}

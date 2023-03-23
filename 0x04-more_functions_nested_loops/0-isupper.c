#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: variable checked
 * Return: 1 for uppercase 0 for otherwise.
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

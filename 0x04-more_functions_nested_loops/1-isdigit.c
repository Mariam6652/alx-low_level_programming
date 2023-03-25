#include"main.h"

/**
 * _isdigit - checks for a digit
 * @c: variable checked
 * Return: 1 for digit or 0 for otherwise.
 */

int _isdigit(int c)
{
	if ((c <= 57) && (c >= 48))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

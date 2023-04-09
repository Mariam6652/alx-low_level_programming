#include"main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character checked
 * Return: 1 for alphabetic characters or 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

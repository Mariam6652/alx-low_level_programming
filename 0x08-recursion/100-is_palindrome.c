#include"main.h"
/**
 * _strlen - return the length of a char
 * @s: char
 * Return: int
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * _compare - compare chars
 * @s: char
 * @n1: int
 * @n2: int
 * Return: int
 */
int _compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + _compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - return if a string is a palindrome
 * @s: char
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compare(s, 0, _strlen(s) - 1));
}

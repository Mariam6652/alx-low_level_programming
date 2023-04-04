#include"main.h"
#include <stddef.h>

/**
 * _strchr -  locates a character in a string
 * @s: char
 * @c: char
 * Return: a pointer to the first occurrence
 * of the character c in the string s or 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}

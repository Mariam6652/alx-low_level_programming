#include"main.h"
#include<stdio.h>

/**
 * _strstr -  locates a substring
 * @haystack: char
 * @needle: char
 * Return: a pointer to a char
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (NULL);
}

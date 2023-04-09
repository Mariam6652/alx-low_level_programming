#include"main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (*s == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (n);
			}
		}
	}
	return (n);
}

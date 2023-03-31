#include"main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (i = 0 ; src[i] && i < n ; i++)
	{
		dest[l] = src[i];
		l++;
	}
	return (dest);
}

#include"main.h"

/**
 * _strncpy -  copies a string
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, l = 0;

	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0 ; src[i] && i < n ; i++)
	{
		dest[i] = src[i];
	}
	for (i = l ; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

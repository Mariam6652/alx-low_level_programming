#include"main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[l] = src[i];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}

#include"main.h"

/**
 * _strcpy - copies the string
 * @dest : char
 * @src: char
 * return: string dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; i != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}

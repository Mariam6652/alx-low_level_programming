#include"main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: char
 * @b: char
 * @n: int
 * Return:  pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int j;

	j = n;
	for (i = 0 ; i < j ; i++)
	{
		s[i] = b;
	}
	return (s);
}

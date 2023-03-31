#include"main.h"

/**
 * _strcmp -  compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: if s1>s2 the difference if s2>s1 the nigative difference if s1=s2 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

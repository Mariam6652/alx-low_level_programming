#include"main.h"
#include<stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: har
 * @s2: char
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;

	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;
	for (k = 0 ; k < l ; k++)
	{
		if (k <= i)
		{
			s[k] = s1[k];
		}

		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
	}
	s[k] = '\0';
	return (s);
}

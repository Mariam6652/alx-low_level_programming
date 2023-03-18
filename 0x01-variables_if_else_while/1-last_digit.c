#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("the last digit of %d is greater than 5", n);
	}
	else if (last_digit == 0)
	{
		printf("the last digit of %d is 0", n);
	}
	else
	{
		printf("the last digit of %d is less than 6 and not 0", n);
	}
	return (0);
}

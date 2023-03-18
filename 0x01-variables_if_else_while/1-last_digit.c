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
	int lstdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (lstdgt > 5)
	{
		printf("the last digit of %d is %d and is greater than 5", n, lstdgt);
	}
	else if (lstdgt == 0)
	{
		printf("the last digit of %d is %d and is 0", n, lstdgt);
	}
	else
	{
		printf("the last digit of %d is %d and is less than 6 and not 0", n, lstdgt);
	}
	return (0);
}

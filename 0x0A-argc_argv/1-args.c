#include"main.h"
#include<stdio.h>

/**
 * main - prints the number if args
 * @argv: char
 * @argc: int
 * Return: int
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"

/**
 * op_add - calc the sum
 * @a: int1
 * @b: int2
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calc the difference
 * @a: int1
 * @b: int2
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calc the multiplication
 * @a: int1
 * @b: int2
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calc the division
 * @a: int1
 * @b: int2
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calc the modulo
 * @a: int1
 * @b: int2
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}

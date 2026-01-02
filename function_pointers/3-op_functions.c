#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first integer
 * @b: second integer
 * Return: quotient of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes remainder of a / b
 * @a: first integer
 * @b: second integer
 * Return: remainder of a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

#include "main.h"

/**
 * _sqrt_helper - finds the natural square root recursively
 * @n: number to find square root of
 * @guess: current guess
 *
 * Return: natural square root of n, -1 if none
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n) /* Found the square root */
		return (guess);
	if (guess * guess > n) /* Exceeded n, no natural square root */
		return (-1);

	return (_sqrt_helper(n, guess + 1)); /* Try next number */
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: natural square root of n, -1 if none
 *
 * Description: Uses recursion to find the na*

#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to compute factorial
 *
 * Return: factorial of n
 *         -1 if n is lower than 0
 *
 * Description: Uses recursion to calculate n!
 */
int factorial(int n)
{
	if (n < 0) /* Error case: negative number */
		return (-1);

	if (n == 0) /* Base case: 0! = 1 */
		return (1);

	return (n * factorial(n - 1)); /* Recursive call */
}

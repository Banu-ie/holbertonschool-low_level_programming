#include "main.h"

/**
 * _is_prime_helper - checks if n is divisible by i
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
	if (n <= 1) /* Numbers <= 1 are not prime */
		return (0);
	if (i * i > n) /* No divisors found, n is prime */
		return (1);
	if (n % i == 0) /* Divisible by i, not prime */
		return (0);

	return (_is_prime_helper(n, i + 1)); /* Try next divisor */
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 *
 * Description: Uses recursion to test all divisors starting from 2.
 */
int is_prime_number(int n)
{
	return (_is_prime_helper(n, 2));
}

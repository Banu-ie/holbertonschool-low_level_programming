#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: base number
 * @y: exponent
 *
 * Return: x raised to the power y
 *         -1 if y is lower than 0
 *
 * Description: Uses recursion to multiply x by itself y times.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* Error case: negative exponent */
		return (-1);

	if (y == 0) /* Base case: any number to the power 0 is 1 */
		return (1);

	return (x * _pow_recursion(x, y - 1)); /* Recursive multiplication */
}

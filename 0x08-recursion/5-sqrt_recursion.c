#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: parameter
 * @i:param in _sqrt function
 * Return: returns int
 */

int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - square root recursion
 * @n: param 1
 * @i: param 2
 * Return: return square root
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);

	return (_sqrt(n, i + 1));
}

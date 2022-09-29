#include "main.h"
/**
 * is_prime_number - returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: param
 * @i: param for checkPrime function
 * Return: returns 1 on success otherwise 0
 */
int checkPrime(int n, int i);

int is_prime_number(int n)
{
       return (checkPrime(n, 2));
}

/**
 * checkPrime - check for prime number
 * @n: param 1
 * @i: param 2
 * Return: returns 1 or 0
 */
int checkPrime(int n, int i)
{
	if (n == i)
		return (1);
	if ((n % i) == 0)
		return (0);
	return (checkPrime(n, i + 1));
}


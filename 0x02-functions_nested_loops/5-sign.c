#include "main.h"

/**
 * print_sign - returns sign of int
 * @n: character to check
 * Return: return 1 if n > 0, return -1 if n < 1, return 0 if n == 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

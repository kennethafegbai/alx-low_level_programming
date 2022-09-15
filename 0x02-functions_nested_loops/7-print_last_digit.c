#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @num: parameter value
 * Return: returns last digit
 */

int print_last_digit(int num)
{
	int result;

	result = num % 10;
	if (result < 0)
	{
		result = -result;
		_putchar(result + '0');
	}
	return (result);
}

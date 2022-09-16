#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: parameter value to be check
 * Return: always return 1 (success) if true, otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

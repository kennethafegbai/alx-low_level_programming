#include "main.h"

/**
 * _abs - convert numeral to absolute
 * @num: number to convert
 * Return: int (Success)
 */

int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else if (num < 0)
	{
		return (num * -1);
	}
	else
	{
		return (0);
	}
}

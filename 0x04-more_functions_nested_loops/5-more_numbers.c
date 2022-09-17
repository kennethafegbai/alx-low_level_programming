#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
int num, row;

int a, b;

for (row = 0; row <= 9; row++)
{
	for (num = 0; num <= 14; num++)
	{
		if (num > 9)
		{
			a = num / 10;

			b = num % 10;
			_putchar(a + '0');
		}
		else
		{
			b = num;
		}
		_putchar(b + '0');
	}
	_putchar(10);
}
}

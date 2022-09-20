#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: parameter value
 */

void puts_half(char *str)
{
	int i, last, half;

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	last = i;
	if (last % 2 == 0)
	{

		half = last / 2;

		for (i = half; str[i]; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		half = ((last - 1) / 2) + 1;
		for (i = half; str[i]; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
